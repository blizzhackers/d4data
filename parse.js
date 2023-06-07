const fs = require('fs');
const node_path = require('node:path');
const definitions = require('./definitions.json');
const snoGroups = require('./json/snoGroups.json');

const DEV_NONE = 0;
const DEV_INFO = 1;
const DEV_VERBOSE = 2;

const devAttributes = DEV_INFO;

process.chdir(__dirname);

let toc = {};
let gbid = fs.existsSync('json/GBID.json') ? JSON.parse(fs.readFileSync('json/GBID.json'), null, ' ') : {};
let readLog = [];
let fieldHashes = {};

function gbidHash(str) {
  let hash = new Uint32Array(1);

  str = str.value || str;

  str = str.toLowerCase();

  for (let c = 0; c < str.length; c++) {
    hash[0] = (hash[0] << 5) + hash[0] + str.charCodeAt(c);
  }

  return hash[0];
}

function typeHash(str) {
  let hash = new Uint32Array(1);

  for (let c = 0; c < str.length; c++) {
    hash[0] = (hash[0] << 5) + hash[0] + str.charCodeAt(c);
  }

  return hash[0];
}

function fieldHash(str) {
  let hash = new Uint32Array(1);

  for (let c = 0; c < str.length; c++) {
    hash[0] = (hash[0] << 5) + hash[0] + str.charCodeAt(c);
  }

  return hash[0] & 0xFFFFFFF;
}

fs.readFileSync('names.txt').toString().split(/[\n\r\s]+/gi).forEach(word => {
  let hash = fieldHash(word);

  fieldHashes[hash] = fieldHashes[hash] || [];

  if (!fieldHashes[hash].includes(word)) {
    fieldHashes[hash].push(word);
  }
});

if (fs.existsSync('data/base/CoreTOC.dat')) {
  let file = fs.readFileSync('data/base/CoreTOC.dat');
  let snoGroupsCount = file.readUInt32LE(0);
  let entryCounts = new Uint32Array(file.buffer.slice(4, 4 + 4 * snoGroupsCount));
  let entryOffsets = new Uint32Array(file.buffer.slice(4 + 4 * snoGroupsCount, 4 + 8 * snoGroupsCount));
  // let entryUnk = new Uint32Array(file.buffer.slice(4 + 8 * snoGroupsCount, 4 + 12 * snoGroupsCount));
  // let i0 = file.readUInt32LE(4 + 12 * snoGroupsCount);
  let dataStart = 8 + 12 * snoGroupsCount;

  for (let c = 0; c < snoGroupsCount; c++) {
    for (let i = 0, offset = dataStart + entryOffsets[c]; i < entryCounts[c]; i++, offset += 12) {
      let snoGroup = file.readInt32LE(offset);
      let snoId = file.readInt32LE(offset + 4);
      let pName = file.readInt32LE(offset + 8) + entryOffsets[c] + dataStart + 12 * entryCounts[c];

      let nameLength = 0;

      for (let j = 0; j < 256 && file[pName + nameLength] !== 0; j++) {
        nameLength++;
      }

      let name = file.subarray(pName, pName + nameLength).toString();
      toc[snoGroup] = toc[snoGroup] || {};
      toc[snoGroup][snoId] = name;
    }
  }

  fs.writeFileSync('json/base/CoreTOC.dat.json', JSON.stringify(toc, null, ' '));
}
else {
  toc = JSON.parse(fs.readFileSync('json/base/CoreTOC.dat.json'));
}

function devCombine(normal, dev, verbose) {
  let ret = {};

  if (dev && devAttributes >= DEV_INFO) {
    Object.assign(ret, dev);
  }

  if (verbose && devAttributes >= DEV_VERBOSE) {
    Object.assign(ret, verbose);
  }

  Object.assign(ret, normal);

  return ret;
}

function getTypeHashFromFormatHash (dwFormatHash) {
  for (let key of Object.keys(definitions)) {
    if (definitions[key].dwFormatHash === dwFormatHash) {
      return key;
    }
  }

  return null;
}

function getType (hash) {
  return definitions[hash];
}

function getTypeSize (type) {
  if (!type) {
    return null;
  }

  if (!Array.isArray(type)) {
    type = [type];
  }

  let typeDef = getType(type[0]);

  if (typeDef.size !== null) {
    return typeDef.size;
  }

  return getTypeSize(type.slice(1));
}

let basicTypes = {
  "DT_BYTE": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readUInt8(offset);
    results.readLength += 1;
  },
  "DT_WORD": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readUInt16LE(offset);
    results.readLength += 2;
  },
  "DT_ENUM": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    ret.value = file.readInt32LE(offset);
    results.readLength += 4;
  },
  "DT_INT": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readInt32LE(offset);
    results.readLength += 4;
  },
  "DT_FLOAT": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readFloatLE(offset);
    results.readLength += 4;
  },
  "DT_OPTIONAL": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});

    results.readLength += 4;
    if (file.readInt32LE(offset)) {
      ret.value = readStructure(file, typeHashes.slice(1), offset + 4, field, [...fieldPath, c], results);
    }
    else {
      ret.value = null;
    }
  },
  "DT_SNO": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readInt32LE(offset);

    if (devAttributes >= DEV_INFO) {
      ret.group = field.group;
      ret.groupName = snoGroups[field.group];
      ret.type = 'sno';
      if (toc[ret.group] && toc[ret.group][ret.value]) {
        ret.name = toc[ret.group][ret.value];
      }
    }

    results.readLength += 4;
  },
  "DT_SNO_NAME": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readInt32LE(offset + 4);
    ret.group = file.readInt32LE(offset);
    ret.groupName = snoGroups[ret.group];
    ret.type = 'sno';

    if (devAttributes >= DEV_INFO) {
      if (toc[ret.group] && toc[ret.group][ret.value]) {
        ret.name = toc[ret.group][ret.value];
      }
    }

    results.readLength += 8;
  },
  "DT_GBID": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readUInt32LE(offset);
    ret.type = 'gbid';

    if (devAttributes >= DEV_INFO) {
      ret.group = field.group;

      if (gbid[ret.group] && gbid[ret.group][ret.value] && gbid[ret.group][ret.value].length) {
        ret.name = gbid[ret.group][ret.value][0];
      }
    }

    results.readLength += 4;
  },
  "DT_STARTLOC_NAME": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readUInt32LE(offset);

    results.readLength += 4;
  },
  "DT_UINT": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readUInt32LE(offset);

    results.readLength += 4;
  },
  "DT_ACD_NETWORK_NAME": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readBigUInt64LE(offset).toString(16);

    results.readLength += 8;
  },
  "DT_SHARED_SERVER_DATA_ID": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readBigUInt64LE(offset).toString(16);

    results.readLength += 8;
  },
  "DT_INT64": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readBigInt64LE(offset).toString(16);

    results.readLength += 8;
  },
  "DT_RANGE": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    let typeSize = getTypeSize(typeHashes.slice(1));
    let subresults = { readLength: 0 };
    ret.rangeValue1 = readStructure(file, typeHashes.slice(1), offset, field, [...fieldPath, 'value1'], subresults);
    ret.rangeValue2 = readStructure(file, typeHashes.slice(1), offset + subresults.readLength, field, [...fieldPath, 'value2'], subresults);
    results.readLength += subresults.readLength;
  },
  "DT_FIXEDARRAY": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = [];
    results.readLength += 0;

    let subresults = { readLength: 0 };

    for (let c = 0; c < field.arrayLength; c++) {
      ret.value.push(readStructure(file, typeHashes.slice(1), offset + subresults.readLength, field, [...fieldPath, c], subresults));
    }

    results.readLength += subresults.readLength;
  },
  "DT_TAGMAP": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    let padding1 = file.readInt32LE(offset);
    let padding2 = file.readInt32LE(offset + 4);
    let dataOffset = file.readInt32LE(offset + 8);
    let dataSize = file.readInt32LE(offset + 12);

    results.readLength += 16;
    ret.padding1 = padding1;
    ret.padding2 = padding2;
    ret.dataOffset = dataOffset;
    ret.dataSize = dataSize;
    ret.__message__ = 'DT_TAGMAP not fully implemented yet';
  },
  "DT_VARIABLEARRAY": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    let padding1 = file.readInt32LE(offset);
    let padding2 = file.readInt32LE(offset + 4);
    let dataOffset = file.readInt32LE(offset + 8);
    let dataSize = file.readInt32LE(offset + 12);

    results.readLength += 16;

    if (devAttributes > DEV_INFO) {
      ret.__padding1__ = padding1;
      ret.__padding2__ = padding2;
      ret.__dataOffset__ = dataOffset;
      ret.__dataSize__ = dataSize;
    }

    if (padding1 || padding2) {
      ret.__error__ = 'Unexpected value in padding!';
      return;
    }

    if ((field.flags & 0x200000) || (field.flags & 0x400000)) {
      ret.value = {};
      ret.value.__typeHash__ = typeHashes[1];
      ret.value.__type__ = getType(typeHashes[1]).name;

      if ([
        3846829457, // DT_CSTRING
        3244749660, // DT_VARIABLEARRAY
        3493213809, // DT_TAGMAP
        1683664497, // DT_POLYMORPHIC_VARIABLEARRAY
        3877855748, // DT_RANGE
        2175310548, // DT_CHARARRAY
      ].includes(typeHashes[1])) {
        ret.value.__auxTypeHash__ = typeHashes[2];
        ret.value.__auxType__ = getType(typeHashes[2]).name;
      }

      ret.value.dataOffset = dataOffset;
      ret.value.dataSize = dataSize;
      return;
    }

    if (dataSize < 1) {
      ret.value = [];
      return;
    }

    if (dataOffset < 1) {
      ret.__error__ = 'Something is wrong.';
      return;
    }

    ret.value = [];

    if (dataOffset) {
      if (dataOffset + dataSize > file.length) {
        ret.__error__ = "Invalid Length: " + dataSize;
        ret.value = null;
      }
      else {
        for (let c = 0; dataSize > 0; c++) {
          let subresults = { readLength: 0 };
          let struct = readStructure(file, typeHashes.slice(1), dataOffset, field, [...fieldPath, c], subresults);
          if (subresults.readLength < 1) {
            break;
          }
          ret.value[c] = struct;
          dataOffset += subresults.readLength;
          dataSize -= subresults.readLength;
        }  
      }
    }
  },
  "DT_POLYMORPHIC_VARIABLEARRAY": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});

    let padding1 = file.readInt32LE(offset);
    let padding2 = file.readInt32LE(offset + 4);
    let _dataOffset = file.readInt32LE(offset + 8); 
    let dataOffset = _dataOffset;
    let _dataSize = file.readInt32LE(offset + 12);
    let dataSize = _dataSize;
    let dataCount = file.readInt32LE(offset + 16);
    let padding3 = file.readInt32LE(offset + 20);

    results.readLength += 24;

    if (devAttributes > DEV_INFO) {
      ret.__padding1__ = padding1;
      ret.__padding2__ = padding2;
      ret.__dataOffset__ = dataOffset;
      ret.__dataSize__ = dataSize;
      ret.__dataCount__ = dataCount;
      ret.__padding3__ = padding3;
    }

    if (padding1 || padding2 || padding3) {
      ret.__error__ = 'Unexpected value in padding!';
      return;
    }

    if (dataCount >= 1000) {
      ret.__error__ = 'Something is wrong.';
      return;
    }

    if ((field.flags & 0x200000) || (field.flags & 0x400000)) {
      ret.value = {};
      ret.value.__typeHash__ = typeHashes[1];
      ret.value.__type__ = getType(typeHashes[1]).name;

      if ([
        3846829457, // DT_CSTRING
        3244749660, // DT_VARIABLEARRAY
        3493213809, // DT_TAGMAP
        1683664497, // DT_POLYMORPHIC_VARIABLEARRAY
        3877855748, // DT_RANGE
        2175310548, // DT_CHARARRAY
      ].includes(typeHashes[1])) {
        ret.value.__auxTypeHash__ = typeHashes[2];
        ret.value.__auxType__ = getType(typeHashes[2]).name;
      }

      ret.value.dataOffset = dataOffset;
      ret.value.dataSize = dataSize;
      ret.value.dataCount = dataCount;
      return;
    }

    if (dataSize < 1 || dataCount < 1) {
      ret.value = [];
      return;
    }

    if (dataOffset < 1) {
      ret.__error__ = 'Something is wrong.';
      return;
    }

    ret.value = [];

    if (dataOffset && dataCount > 0) {
      if (dataOffset + dataSize > file.length) {
        ret.__error__ = "Invalid Length: " + dataSize;
        ret.value = null;
      }
      else {
        // I think this is pointer storage or something.
        // Skip 8 bytes per entry at the start.
        dataOffset += dataCount * 8;
        dataSize -= dataCount * 8;
        ret.value.length = dataCount;

        for (let c = 0; c < dataCount && dataSize > 0; c++) {
          let polyBase = readStructure(file, [0x5d4bac71], dataOffset, field, [...fieldPath, c]);
          let polyTypes = [polyBase.dwType.value === undefined ? polyBase.dwType : polyBase.dwType.value, ...typeHashes.slice(1)];
          let subresults = { readLength: 0 };

          ret.value[c] = readStructure(file, polyTypes, dataOffset, field, [...fieldPath, c], subresults);

          dataOffset += subresults.readLength;
          dataSize -= subresults.readLength;
        }
      }
    }
  },
  "DT_STRING_FORMULA": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    let formulaOffset = file.readInt32LE(offset + 8);
    let formulaSize = file.readInt32LE(offset + 12);
    let compiledOffset = file.readInt32LE(offset + 24);
    let compiledSize = file.readInt32LE(offset + 28);

    results.readLength += 32;

    if (devAttributes > DEV_INFO) {
      ret.__formulaOffset__ = formulaOffset;
      ret.__formulaSize__ = formulaSize;
      ret.__compiledOffset__ = compiledOffset;
      ret.__compiledSize__ = compiledSize;
    }

    while (formulaSize > 0 && file.readUInt8(formulaOffset + formulaSize - 1) === 0) {
      formulaSize--;
    }

    ret.value = file.subarray(formulaOffset, formulaOffset + formulaSize).toString().trim();
    ret.compiled = file.subarray(compiledOffset, compiledOffset + compiledSize).toString('base64');
  },
  "DT_CSTRING": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    let stringOffset = file.readInt32LE(offset + 8);
    let stringSize = file.readInt32LE(offset + 12);

    results.readLength += 16;

    while (stringSize > 0 && file.readUInt8(stringOffset + stringSize - 1) === 0) {
      stringSize--;
    }

    ret.value = file.subarray(stringOffset, stringOffset + stringSize).toString();
  },
  "DT_CHARARRAY": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    let strlen = field.arrayLength;

    results.readLength += Math.max(0, field.arrayLength);

    while (strlen > 0 && file.readUInt8(offset + strlen - 1) === 0) {
      strlen--;
    }

    ret.value = file.subarray(offset, offset + strlen).toString();
  },
  "DT_RGBACOLOR": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = {
      r: file.readUInt8(offset),
      g: file.readUInt8(offset + 1),
      b: file.readUInt8(offset + 2),
      a: file.readUInt8(offset + 3),
    };

    results.readLength += 4;
  },
  "DT_RGBACOLORVALUE": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = {
      r: file.readFloatLE(offset),
      g: file.readFloatLE(offset + 4),
      b: file.readFloatLE(offset + 8),
      a: file.readFloatLE(offset + 12),
    };
    results.readLength += 16;
  },
  "DT_BCVEC2I": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = {
      x: file.readFloatLE(offset),
      y: file.readFloatLE(offset + 4),
    };
    results.readLength += 8;
  },
  "DT_VECTOR2D": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = {
      x: file.readFloatLE(offset),
      y: file.readFloatLE(offset + 4),
    };
    results.readLength += 8;
  },
  "DT_VECTOR3D": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = {
      x: file.readFloatLE(offset),
      y: file.readFloatLE(offset + 4),
      z: file.readFloatLE(offset + 8),
    };
    results.readLength += 12;
  },
  "DT_VECTOR4D": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = {
      x: file.readFloatLE(offset),
      y: file.readFloatLE(offset + 4),
      z: file.readFloatLE(offset + 8),
      w: file.readFloatLE(offset + 12),
    };
    results.readLength += 16;
  },
};

function readStructure(file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
  if (typeHashes[0] === 1028442418) { // DT_NULL
    return undefined;
  }

  if (!fieldPath) {
    throw new Error("Needs a field path!");
  }

  let type = getType(typeHashes[0]);
  let devInfo = {};

  if (type.type === "complex") {
    devInfo.__type__ = type.name;
    devInfo.__typeHash__ = type.hash;
  }

  if (type.name === "DT_VARIABLEARRAY" || type.name === "DT_POLYMORPHIC_VARIABLEARRAY") {
    if ((field.flags & 0x200000) || (field.flags & 0x400000)) {
      devInfo.__type__ = type.name;
      devInfo.__typeHash__ = type.hash;
      devInfo.__flags__ = field.flags;
      devInfo.__external__ = true;
    }
  }

  let ret = devCombine({}, devInfo, {
    __type__: type.name,
    __typeHash__: type.hash,
    __fileOffset__: offset,
  });

  if (type.type === "complex") {
    let subresults = { readLength: 0 };

    type.fields.forEach(field => {
      ret[field.name] = readStructure(file, field.type, offset + field.offset, field, [...fieldPath, field.name], subresults);
    });

    results.readLength += type.size;

    if (type.name === 'GBIDHeader') {
      ret.szNameGBIDHash = gbidHash(ret.szName);
    }

    if (type.name === 'GameBalanceDefinition') {
      if (ret.ptData && ret.ptData[0] && ret.ptData[0].tEntries && ret.ptData[0].tEntries.length) {
        gbid[ret.eGameBalanceType] = gbid[ret.eGameBalanceType] || {};

        ret.ptData[0].tEntries.forEach(entry => {
          if (entry.tHeader && entry.tHeader.szNameGBIDHash !== undefined) {
            gbid[ret.eGameBalanceType][entry.tHeader.szNameGBIDHash] = gbid[ret.eGameBalanceType][entry.tHeader.szNameGBIDHash] || [];

            if (!gbid[ret.eGameBalanceType][entry.tHeader.szNameGBIDHash].includes(entry.tHeader.szName)) {
              gbid[ret.eGameBalanceType][entry.tHeader.szNameGBIDHash].push(entry.tHeader.szName);
            }
          }
        });
      }
    }
  }
  else if (type.type === "basic" && basicTypes[type.name]) {
    basicTypes[type.name](ret, file, typeHashes, offset, field, fieldPath, results);
  }
  else {
    throw new Error('Unhandled type: ' + type.name);
  }

  if (type.type !== "complex" && Object.values(ret).length == 1) {
    return Object.values(ret)[0];
  }

  return ret;
}

let fileNames = [];
let dirNames = {};
let success = 0;
let total = 0;

function getAllFiles(path) {
  if (fs.existsSync(path)) {
    if (fs.statSync(path).isDirectory()) {
      while (path.slice(-1) === '/') {
        path = path.slice(0, -1);
      }
  
      fs.readdirSync(path).forEach((file) => {
        getAllFiles(path + '/' + file);
      })
    }
    else {
      dirNames[node_path.dirname(path)] = node_path.dirname(path);
      fileNames.push(path);
    }
  }
}

for (let c = 2; c < process.argv.length; c++) {
  getAllFiles(process.argv[c]);
}

dirNames = Object.values(dirNames);

dirNames.forEach(dirName => {
  dirName = dirName.split('/');
  dirName[0] = 'json';
  dirName = dirName.join('/');

  if (!fs.existsSync(dirName)) {
    fs.mkdirSync(dirName, { recursive: true });
    fs.writeFileSync(dirName + '/.gitkeep', '');
  }
});

let gbMap = {};

fileNames.forEach((fileName, index) => {
  // if (/bad data/gi.test(fileName)) {
  //   return;
  // }

  let newFileName = fileName.split('/');

  readLog = [];

  if (newFileName[0] === 'data') {
    newFileName[0] = 'json';
  }

  newFileName = newFileName.join('/') + '.json';

  try {
    total++;

    let file = fs.readFileSync(fileName);

    if (file.length >= 16) {
      let header = file.subarray(0, 16);

      file = file.subarray(16);

      let dwSignature = header.readUInt32LE(0);

      if (dwSignature === 0xdeadbeef) {
        let data = readStructure(file, [getTypeHashFromFormatHash(header.readUInt32LE(4))], 0, null, [fileName]);
        let snoID = file.readUInt32LE(0);

        console.log('#' + index, newFileName);

        if (data.eGameBalanceType !== null && data.eGameBalanceType !== undefined) {
          gbMap[data.eGameBalanceType] = gbMap[data.eGameBalanceType] || [];
          gbMap[data.eGameBalanceType].push(newFileName);
        }

        fs.writeFileSync(newFileName, JSON.stringify(devCombine(data, {
          __fileName__: fileName,
          __snoID__: snoID,
        }), null, ' ') + '\n');

        success++;
      }
    }
  } catch (err) {
    console.error(err);
    fs.writeFileSync(newFileName, '{}');
  }
});

if (Object.values(gbMap).length) {
  fs.writeFileSync('json/eGameBalanceType.json', JSON.stringify(gbMap, null, ' '));
}

if (Object.values(gbid).length) {
  fs.writeFileSync('json/GBID.json', JSON.stringify(gbid, null, ' '));
}

console.log('Processed', success, 'of', total, 'files.');
