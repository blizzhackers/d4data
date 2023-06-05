const fs = require('fs');
const definitions = require('./definitions.json');
const snoGroups = require('./snoGroups.json');

const DEV_NONE = 0;
const DEV_INFO = 1;
const DEV_VERBOSE = 2;

const devAttributes = DEV_INFO;


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

function readStructure(file, typeHashes, offset, field) {
  let type = getType(typeHashes[0]), ret = devCombine(type.type === "complex" ? {
    __type__: type.name,
    __typeHash__: type.hash,  
  } : {}, null, {
    __fileOffset__: '0x' + (offset + 16).toString(16),
  });

  if (type.type === "complex") {
    type.fields.forEach(field => {
      ret[field.name] = readStructure(file, field.type, offset + field.offset, field);
    });
  }
  else if (type.name === "DT_BYTE") {
    ret.value = file.readUInt8LE(offset);
  }
  else if (type.name === "DT_WORD") {
    ret.value = file.readUInt16LE(offset);
  }
  else if (type.name === "DT_ENUM" || type.name === "DT_INT") {
    ret.value = file.readInt32LE(offset);
  }
  else if (type.name === "DT_SNO") {
    ret.value = file.readInt32LE(offset);

    if (devAttributes >= DEV_INFO) {
      ret.group = field.group;
      ret.groupName = snoGroups[field.group];  
    }
  }
  else if (type.name === "DT_GBID") {
    ret.value = file.readInt32LE(offset);
    if (devAttributes >= DEV_INFO) {
      ret.group = field.group;
    }
  }
  else if (type.name === "DT_STARTLOC_NAME" || type.name === "DT_UINT") {
    ret.value = file.readUInt32LE(offset);
  }
  else if (type.name === "DT_ACD_NETWORK_NAME" || type.name === "DT_SHARED_SERVER_DATA_ID") {
    ret.value = file.readBigUInt64LE(offset).toString(16);
  }
  else if (type.name === "DT_INT64") {
    ret.value = file.readBigInt64LE(offset).toString(16);
  }
  else if (type.name === "DT_RANGE") {
    let typeSize = getTypeSize(typeHashes.slice(1));
    ret.value = readStructure(file, typeHashes.slice(1), offset, field);
    ret.end_value = readStructure(file, typeHashes.slice(1), offset + typeSize, field);
  }
  else if (type.name === "DT_FIXEDARRAY") {
    ret.value = [];
    let typeSize = getTypeSize(typeHashes.slice(1));

    for (let c = 0; c < field.arrayLength; c++) {
      ret.value.push(readStructure(file, typeHashes.slice(1), offset + c * typeSize, field));
    }
  }
  else if (type.name === "DT_VARIABLEARRAY") {
    let typeSize = getTypeSize(typeHashes.slice(1));
    let dataOffset = file.readInt32LE(offset + 8);
    let dataSize = file.readInt32LE(offset + 12);

    if (devAttributes > DEV_INFO) {
      ret.__dataOffset__ = '0x' + dataOffset.toString(16);
      ret.__dataSize__ = '0x' + dataSize.toString(16);
    }

    ret.value = [];

    for (let c = 0; c < dataSize / typeSize; c++) {
      ret.value.push(readStructure(file, typeHashes.slice(1), dataOffset + c * typeSize, field));
    }
  }
  else if (type.name === "DT_STRING_FORMULA") {
    let formulaOffset = file.readInt32LE(offset + 8);
    let formulaSize = file.readInt32LE(offset + 12);
    let compiledOffset = file.readInt32LE(offset + 24);
    let compiledSize = file.readInt32LE(offset + 28);

    if (devAttributes > DEV_INFO) {
      ret.__formulaOffset__ = formulaOffset;
      ret.__formulaSize__ = formulaSize;
      ret.__compiledOffset__ = compiledOffset;
      ret.__compiledSize__ = compiledSize;
    }

    ret.value = file.subarray(formulaOffset, formulaOffset + formulaSize - 1).toString();
    ret.compiled = [];

    for (let c = compiledOffset; c < compiledOffset + compiledSize; c++) {
      ret.compiled.push(file.readUInt8(c));
    }  
  }
  else if (type.name === "DT_CSTRING") {
    let stringOffset = file.readInt32LE(offset + 8);
    let stringSize = file.readInt32LE(offset + 12);

    ret.value = file.subarray(stringOffset, stringOffset + stringSize - 1).toString();
  }
  else {
    ret.unhandledType = true;
  }

  if (type.type !== "complex" && Object.values(ret).length == 1) {
    return Object.values(ret)[0];
  }

  return ret;
}

let fileNames = [];

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
      fileNames.push(path);
    }
  }
}

for (let c = 2; c < process.argv.length; c++) {
  getAllFiles(process.argv[c]);
}

fileNames.forEach((fileName, index) => {
  total++;

  let file = fs.readFileSync(fileName);

  if (file.length >= 16) {
    let header = file.subarray(0, 16);

    file = file.subarray(16);

    let dwSignature = header.readUInt32LE(0);

    if (dwSignature === 0xdeadbeef) {
      let data = readStructure(file, [getTypeHashFromFormatHash(header.readUInt32LE(4))], 0);
      let newFileName = fileName.split('/');
      let snoID = file.readUInt32LE(0);

      if (newFileName[0] === 'data') {
        newFileName[0] = 'json';
      }

      newFileName = newFileName.join('/') + '.json';
      console.log('#' + index, newFileName);

      fs.writeFileSync(newFileName, JSON.stringify(devCombine(data, {
        __fileName__: fileName,
        __snoID__: snoID,
      }), null, ' ') + '\n');

      success++;
    }
  }
});

console.log('Processed', success, 'of', total, 'files.');