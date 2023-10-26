const fs = require('fs');
const node_path = require('path');
const definitions = require('./definitions.json');

const attributes = Object.values(require('./attributes.json')).reduce((t, v) => {
  t[v.eAttrib] = v;
  return t;
}, {});

const snoGroups = require('./json/snoGroups.json');
const snoFileInfo = require('./json/snoFileInfo.json');

process.chdir(__dirname);

let toc = {};
let tocflat = {};
let replacedSnos = {};
let encryptedSnos = {};
let snoPayloadMap = {};
let gbid = fs.existsSync('json/GBID.json') ? JSON.parse(fs.readFileSync('json/GBID.json'), null, ' ') : {};
let readLog = [];
let incoming = {};
let outgoing = {};

let fieldNames = {};
Object.entries(definitions).forEach(([typeHash, type]) => {
  if (type.fields) {
    type.fields.forEach(field => {
      fieldNames[field.hash] = field.name;
    });
  }
});

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

if (!fs.existsSync('json/')) {
  fs.mkdirSync('json');
}

if (!fs.existsSync('json/base/')) {
  fs.mkdirSync('json/base');
}

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
      tocflat[snoId] = [name, snoGroup];
    }
  }

  fs.writeFileSync('json/base/CoreTOC.dat.json', JSON.stringify(toc, null, ' '));
  fs.writeFileSync('json/CoreTOC_flat.json', JSON.stringify(tocflat, null, ' '));
}
else {
  toc = JSON.parse(fs.readFileSync('json/base/CoreTOC.dat.json'));
  tocflat = JSON.parse(fs.readFileSync('json/CoreTOC_flat.json'));
}

if (fs.existsSync('data/base/CoreTOCSharedPayloadsMapping.dat')) {
  let file = fs.readFileSync('data/base/CoreTOCSharedPayloadsMapping.dat');
  let entryCount = file.readUInt32LE(4);

  for (let i = 0; i < entryCount; i++) {
    let source = file.readUInt32LE(8 + i * 8);
    let destination = file.readUInt32LE(12 + i * 8);

    if (tocflat[source] && tocflat[destination]) {
      let [sourceDir, sourceExt] = snoFileInfo[tocflat[source][1]];
      let sourceName = tocflat[source][0];
      let [destinationDir, destinationExt] = snoFileInfo[tocflat[destination][1]];
      let destinationName = tocflat[destination][0];
      snoPayloadMap[`base/payload/${sourceDir}/${sourceName}.${sourceExt}`] = `base/payload/${destinationDir}/${destinationName}.${destinationExt}`;
    }
  }

  fs.writeFileSync('json/base/CoreTOCSharedPayloadsMapping.dat.json', JSON.stringify(snoPayloadMap, null, ' '));
}
else {
  snoPayloadMap = JSON.parse(fs.readFileSync('json/base/CoreTOCSharedPayloadsMapping.dat.json'));
}

if (fs.existsSync('data/base/CoreTOCReplacedSnosMapping.dat')) {
  let file = fs.readFileSync('data/base/CoreTOCReplacedSnosMapping.dat');
  let entryCount = file.readUInt32LE(4);

  for (let i = 0; i < entryCount; i++) {
    let snoID = file.readInt32LE(8 + i * 24 + 4);
    let unk0 = file.readInt32LE(8 + i * 24 + 16);
    let unk1 = file.readInt32LE(8 + i * 24 + 20);

    let rec = [
      file.readInt32LE(8 + i * 24),
      file.subarray(8 + i * 24 + 8, 8 + i * 24 + 16).toString('hex'),
    ];

    if (unk0 !== -1 || unk1 !== 0) {
      throw new Error('Unexpected data!');
    }

    if (replacedSnos[snoID]) {
      throw new Error('Replacement sno already exists!');
    }

    replacedSnos[snoID] = rec;
  }

  fs.writeFileSync('json/base/CoreTOCReplacedSnosMapping.dat.json', JSON.stringify(replacedSnos, null, ' '));
}
else {
  replacedSnos = JSON.parse(fs.readFileSync('json/base/CoreTOCReplacedSnosMapping.dat.json'));
}

if (fs.existsSync('data/base/EncryptedSNOs.dat')) {
  let file = fs.readFileSync('data/base/EncryptedSNOs.dat');
  let entryCount = file.readUInt32LE(4);

  for (let i = 0; i < entryCount; i++) {
    let group = file.readInt32LE(8 + i * 16);
    let snoID = file.readInt32LE(8 + i * 16 + 4);
    let encryptionKeyID = file.subarray(8 + i * 16 + 8, 8 + i * 16 + 16).toString('hex');

    encryptedSnos[snoID] = [group, encryptionKeyID];
  }

  fs.writeFileSync('json/base/EncryptedSNOs.dat.json', JSON.stringify(encryptedSnos, null, ' '));
}
else {
  encryptedSnos = JSON.parse(fs.readFileSync('json/base/EncryptedSNOs.dat.json'));
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

function getBasicTypeAlignment (typeDef, typeHashes, inTagMap = false) {
  switch(typeDef.hash) {
    case 1683664497: // DT_POLYMORPHIC_VARIABLEARRAY
    case 2450313795: // DT_STRING_FORMULA
    case 3244749660: // DT_VARIABLEARRAY
    case 3493213809: // DT_TAGMAP
    case 3846829457: // DT_CSTRING
      return inTagMap ? 4 : 8;
    case 2175310548: // DT_CHARARRAY
      return 1;
    case 2388214534: // DT_FIXEDARRAY
      return getTypeAlignment(typeHashes[1]);
    case 3121633597: // DT_OPTIONAL
      return getTypeAlignment(typeHashes[1]); // 2 for DT_WORD, 8 for DT_INT?
    case 3339108615: // DT_SNO_NAME
      return 4;
    case 3877855748: // DT_RANGE
      return getTypeAlignment(typeHashes[1]);
    default:
      return typeDef.size;
  }
}

function getTypeAlignment (typeHashes, inTagMap = false) {
  if (!Array.isArray(typeHashes)) {
    typeHashes = [typeHashes];
  }

  let typeDef = getType(typeHashes[0]);
  if (!Array.isArray(typeDef.fields)) {
    if (typeDef.type === "basic") {
      return getBasicTypeAlignment(typeDef, typeHashes, inTagMap);
    }

    console.warn('No padding information for type:', typeDef.name, typeDef.hash.toString(16));
    return 4;
  }

  return Math.max(...typeDef.fields.map(f => getTypeAlignment(f.type)));
}

function findSnoGroup(id) {
  if (tocflat[id]) {
    return tocflat[id][1];
  }

  return 0;
}

let basicTypes = {
  "DT_BYTE": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readUInt8(offset);
    results.readLength += 1;

    if (field.serializedBitCount === 1) {
      ret.value = Boolean(ret.value);
    }
  },
  "DT_WORD": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readUInt16LE(offset);
    results.readLength += 2;

    if (field.serializedBitCount === 1) {
      ret.value = Boolean(ret.value);
    }
  },
  "DT_ENUM": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    ret.value = file.readInt32LE(offset);
    results.readLength += 4;
  },
  "DT_INT": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = file.readInt32LE(offset);
    results.readLength += 4;

    if (field.serializedBitCount === 1) {
      ret.value = Boolean(ret.value);
    }
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
      ret.value = readStructure.bind(this)(file, typeHashes.slice(1), offset + 4, field, [...fieldPath, c], results);
    }
    else {
      ret.value = null;
    }
  },
  "DT_SNO": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    results.readLength += 4;

    ret.__raw__ = file.readInt32LE(offset);

    if (ret.__raw__ === -1 || ret.__raw__ === 0 || ret.__raw__ === 0xFFFFFFFF) {
      ret.__raw__ = null;
      return;
    }

    if (replacedSnos[ret.__raw__]) {
      ret.__replaced__ = replacedSnos[ret.__raw__][1];
    }

    if (encryptedSnos[ret.__raw__]) {
      ret.__encrypted__ = encryptedSnos[ret.__raw__][1];
    }

    ret.__group__ = findSnoGroup(ret.__raw__) || field.group || -1;
    ret.__type__ = 'DT_SNO';
    ret.__typeHash__ = typeHashes[0];
    this.references = this.references || {};
    this.references[ret.__raw__] = ret.__raw__;

    if (!encryptedSnos[ret.__raw__] && tocflat[ret.__raw__] && snoFileInfo[ret.__group__] && snoFileInfo[ret.__group__][1]) {
      let baseDir = ret.__group__ == 42 ? 'enUS_Text' : 'base';
      ret.__targetFileName__ = baseDir + '/meta/' + snoFileInfo[ret.__group__][0] + '/' + tocflat[ret.__raw__][0] + '.' + snoFileInfo[ret.__group__][1];
    }

    ret.groupName = snoGroups[ret.__group__];

    if (!encryptedSnos[ret.__raw__] && tocflat[ret.__raw__]) {
      ret.name = tocflat[ret.__raw__][0];
    }
  },
  "DT_SNO_NAME": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    results.readLength += 8;

    ret.__raw__ = file.readInt32LE(offset + 4);

    if (ret.__raw__ === -1 || ret.__raw__ === 0 || ret.__raw__ === 0xFFFFFFFF) {
      ret.__raw__ = null;
      return;
    }

    if (replacedSnos[ret.__raw__]) {
      ret.__replaced__ = replacedSnos[ret.__raw__][1];
    }

    if (encryptedSnos[ret.__raw__]) {
      ret.__encrypted__ = encryptedSnos[ret.__raw__][1];
    }

    ret.__group__ = findSnoGroup(ret.__raw__) || file.readInt32LE(offset) || -1;
    ret.__type__ = 'DT_SNO_NAME';
    ret.__typeHash__ = typeHashes[0];
    this.references = this.references || {};
    this.references[ret.__raw__] = ret.__raw__;

    if (!encryptedSnos[ret.__raw__] && tocflat[ret.__raw__] && snoFileInfo[ret.__group__] && snoFileInfo[ret.__group__][1]) {
      let baseDir = ret.__group__ == 42 ? 'enUS_Text' : 'base';
      ret.__targetFileName__ = baseDir + '/meta/' + snoFileInfo[ret.__group__][0] + '/' + tocflat[ret.__raw__][0] + '.' + snoFileInfo[ret.__group__][1];
    }

    ret.groupName = snoGroups[ret.__group__];

    if (!encryptedSnos[ret.__raw__] && tocflat[ret.__raw__]) {
      ret.name = tocflat[ret.__raw__][0];
    }
  },
  "DT_GBID": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    results.readLength += 4;

    ret.__raw__ = file.readUInt32LE(offset);

    if (ret.__raw__ === -1 || ret.__raw__ === 0xFFFFFFFF) {
      ret.__raw__ = null;
      return;
    }

    ret.__type__ = 'DT_GBID';
    ret.__typeHash__ = typeHashes[0];

    ret.group = field.group;

    if (gbid[ret.group] && gbid[ret.group][ret.__raw__] && gbid[ret.group][ret.__raw__].length) {
      ret.name = gbid[ret.group][ret.__raw__][0];
    }
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

    if (field.serializedBitCount === 1) {
      ret.value = Boolean(ret.value);
    }
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

    if (field.serializedBitCount === 1) {
      ret.value = Boolean(ret.value);
    }
  },
  "DT_RANGE": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    let typeSize = getTypeSize(typeHashes.slice(1));
    let subresults = { readLength: 0 };
    ret.rangeValue1 = readStructure.bind(this)(file, typeHashes.slice(1), offset, field, [...fieldPath, 'value1'], subresults);
    ret.rangeValue2 = readStructure.bind(this)(file, typeHashes.slice(1), offset + subresults.readLength, field, [...fieldPath, 'value2'], subresults);
    results.readLength += subresults.readLength;
  },
  "DT_FIXEDARRAY": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    ret.value = [];
    results.readLength += 0;

    let subresults = { readLength: 0 };

    for (let c = 0; c < field.arrayLength; c++) {
      ret.value.push(readStructure.bind(this)(file, typeHashes.slice(1), offset + subresults.readLength, field, [...fieldPath, c], subresults));
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

    if (dataSize < 1) {
      return;
    }

    if (dataOffset < 1) {
      ret.__error__ = 'Something is wrong.';
      return;
    }

    if (dataOffset) {
      if (dataOffset + dataSize > file.length) {
        ret.__error__ = "Invalid Length: " + dataSize;
        ret.value = null;
      }
      else {
        const dataCount = file.readInt32LE(dataOffset);
        dataOffset += 4;
        dataSize -= 4;
        ret.value = {};
        let fieldInfoList = []

        // Step 1: Read field names and types
        for (let c = 0; c < dataCount; c++) {
          let fieldInfo = {}
          fieldInfo.fieldNameHash = file.readUInt32LE(dataOffset);
          fieldInfo.fieldTypeHashes = [file.readUInt32LE(dataOffset + 4)];
          dataOffset += 8;
          dataSize -= 8;
          results.readLength += 8;

          // get field types
          for (let typeIndex = 0; typeIndex < 2; typeIndex++) {
            const type = getType(fieldInfo.fieldTypeHashes[typeIndex]);
            if (!(type.flags & 0x8000)) {
              break;
            }

            fieldInfo.fieldTypeHashes.push(file.readUInt32LE(dataOffset));
            dataOffset += 4;
            dataSize -= 4;
            results.readLength += 4;
          }

          fieldInfo.fieldName = fieldNames[fieldInfo.fieldNameHash];

          fieldInfoList[c] = fieldInfo;
        }

        // Step 2: Read values
        let maxAlignment = 1;
        for (let c = 0; c < dataCount; c++) {
          const fieldInfo = fieldInfoList[c];

          const requiredAlignment = getTypeAlignment(fieldInfo.fieldTypeHashes, true);
          maxAlignment = Math.max(maxAlignment, requiredAlignment);
          const currentAlignment = dataOffset % requiredAlignment;
          //const currentAlignment = dataOffset & (alignment - 1);
          if (currentAlignment) {
            const padding = requiredAlignment - currentAlignment;
            dataOffset += padding;
            dataSize -= padding;
          }

          let subresults = { readLength: 0 };
          const tmField = {
            type: fieldInfo.fieldTypeHashes,
            hash: fieldInfo.fieldNameHash,
            name: fieldInfo.fieldName
          }
          const struct = readStructure.bind(this)(file, fieldInfo.fieldTypeHashes, dataOffset, tmField, [...fieldPath, fieldInfo.fieldName], subresults);
          if (subresults.readLength < 1) {
            break;
          }
          ret.value[fieldInfo.fieldName] = struct;
          dataOffset += subresults.readLength;
          dataSize -= subresults.readLength;
        }
      }
    }
  },
  "DT_VARIABLEARRAY": function (ret, file, typeHashes, offset, field, fieldPath, results = { readLength: 0 }) {
    readLog.push({fieldPath: fieldPath.join('.') + ' @ ' + offset, value: ret});
    let padding1 = file.readInt32LE(offset);
    let padding2 = file.readInt32LE(offset + 4);
    let dataOffset = file.readInt32LE(offset + 8);
    let dataSize = file.readInt32LE(offset + 12);

    results.readLength += 16;

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
          let struct = readStructure.bind(this)(file, typeHashes.slice(1), dataOffset, field, [...fieldPath, c], subresults);
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
          let polyBase = readStructure.bind(this)(file, [0x5d4bac71], dataOffset, field, [...fieldPath, c]);
          let polyTypes = [polyBase.dwType.value === undefined ? polyBase.dwType : polyBase.dwType.value, ...typeHashes.slice(1)];
          let subresults = { readLength: 0 };

          ret.value[c] = readStructure.bind(this)(file, polyTypes, dataOffset, field, [...fieldPath, c], subresults);

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
      x: file.readInt32LE(offset),
      y: file.readInt32LE(offset + 4),
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

  let ret = Object.assign({}, devInfo);

  if (type.type === "complex") {
    let subresults = { readLength: 0 };

    type.fields.forEach(field => {
      ret[field.name] = readStructure.bind(this)(file, field.type, offset + field.offset, field, [...fieldPath, field.name], subresults);

      if (ret.eAttribute !== null && ret.eAttribute !== undefined) {
        ret.__eAttribute_name__ = attributes[ret.eAttribute].name;
      }    
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
    basicTypes[type.name].bind(this)(ret, file, typeHashes, offset, field, fieldPath, results);
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
        let globals = {
          test: true,
        };

        let data = readStructure.bind(globals)(file, [getTypeHashFromFormatHash(header.readUInt32LE(4))], 0, null, [fileName]);
        let snoID = file.readUInt32LE(0);

        if (globals.references) {
          let refs = Object.values(globals.references);

          refs.forEach(snoIDTarget => {
            incoming[snoIDTarget] = incoming[snoIDTarget] || {};
            incoming[snoIDTarget][snoID] = snoID;
            outgoing[snoID] = outgoing[snoID] || {};
            outgoing[snoID][snoIDTarget] = snoIDTarget;
          });
        }

        console.log('#' + index, newFileName);

        if (data.eGameBalanceType !== null && data.eGameBalanceType !== undefined) {
          gbMap[data.eGameBalanceType] = gbMap[data.eGameBalanceType] || [];
          if (gbMap[data.eGameBalanceType].indexOf(newFileName) < 0) {
            gbMap[data.eGameBalanceType].push(newFileName);
          }
        }

        let payloadName = fileName.replace(/^data\/base\/meta/g, 'base/payload');

        if (!Object.keys(data).length) {
          debugger;
        }

        if (snoPayloadMap[payloadName]) {
          fs.writeFileSync(newFileName, JSON.stringify(Object.assign({
            __fileName__: fileName.replace(/^data\//g, ''),
            __snoID__: snoID,
            __payloadOverride__: snoPayloadMap[payloadName],
          }, data), null, ' ') + '\n');
        }
        else {
          fs.writeFileSync(newFileName, JSON.stringify(Object.assign({
            __fileName__: fileName.replace(/^data\//g, ''),
            __snoID__: snoID,
          }, data), null, ' ') + '\n');
        }

        success++;
      }
    }
  } catch (err) {
    console.error(err);
    fs.writeFileSync(newFileName, JSON.stringify({
      err,
    }));
  }
});

if (Object.values(gbMap).length) {
  fs.writeFileSync('json/eGameBalanceType.json', JSON.stringify(gbMap, null, ' '));
}

if (Object.values(gbid).length) {
  fs.writeFileSync('json/GBID.json', JSON.stringify(gbid, null, ' '));
}

Object.keys(outgoing).forEach(key => {
  outgoing[key] = Object.values(outgoing[key]);
});

Object.keys(incoming).forEach(key => {
  incoming[key] = Object.values(incoming[key]);
});

fs.writeFileSync('json/outgoingSnoReferences.json', JSON.stringify(outgoing));
fs.writeFileSync('json/incomingSnoReferences.json', JSON.stringify(incoming));

console.log('Processed', success, 'of', total, 'files.');
