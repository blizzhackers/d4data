const fs = require('fs');

let names = (new Function("return {\n" + fs.readFileSync('definitions/!!D4Checksums.yml').toString().split('\n').slice(2).join(',\n') + "};"))();
let data = fs.readFileSync('data/Base/ComplexTypeDescriptorSizes.dat');
let output = {};

for (let c = 0, count = (data.length - 4) / 8; c < count; c++) {
  let typeHash = data.readUInt32LE(4 + c * 8);

  output[typeHash.toString(16)] = [names[typeHash] && names[typeHash].length ? names[typeHash][0] : typeHash.toString(16), data.readUInt32LE(8 + c * 8)];
}

fs.writeFileSync('json/ComplexTypeDescriptorSizes.json', JSON.stringify(output, null, ' '));
