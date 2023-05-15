const fs = require('fs');

let prefix = JSON.parse(fs.readFileSync('prefix.json').toString());
let dict = {};

let banned = {
  'wcyl': true,
};

let names = JSON.parse(fs.readFileSync('dict.json').toString());
let newnames = {};

fs.readFileSync('names.txt').toString().split(/\s+/gi).forEach(name => {
  names[name] = name;
});

Object.keys(names).forEach(name => {
  let matches = name.split(/^((?:fl|u|n|s|sz|pt|t|m|a|ar|b|bc|dw|e|f|gbid|h|i|is|id|l|p|pn|q|v|vw|wd|wp|wr|ws|wv)(?=[0-9A-Z_]))/g).filter(Boolean);

  matches.forEach(subname => {
    if (/^[^a-zA-Z]+$/.test(subname)) {
      return;
    }

    if (/^(fl|u|n|s|sz|pt|t|m|a|ar|b|bc|dw|e|f|gbid|h|i|is|id|l|p|pn|q|v|vw|wd|wp|wr|ws|wv)$/g.test(subname)) {
      if (!prefix[subname]) {
        prefix[subname] = names[name];
      }
    } else {
      newnames[subname] = names[name];
    }
  });
});

names = newnames;
newnames = {};

Object.keys(names).forEach(name => {
  let matches = name.split(/(3x3|4x4|BCVEC2I|IDs(?![a-z])|By(?![a-z])|To(?![a-z])|In(?![a-z])|Is(?![a-z])|On(?![a-z])|No(?![a-z])|(?<![0-9])2D|(?<![0-9])3D|(?<![0-9])4D)/g).filter(Boolean);

  matches.forEach(subname => {
    if (/^([^a-zA-Z]+)$/.test(subname) || subname.length < 3) {
      return;
    }

    if (/^(3x3|4x4|BCVEC2I|IDs(?![a-z])|By(?![a-z])|To(?![a-z])|In(?![a-z])|Is(?![a-z])|On(?![a-z])|No(?![a-z])|(?<![0-9])2D|(?<![0-9])3D|(?<![0-9])4D)$/g.test(subname) || /^[a-z]{3,}$/g.test(subname)) {
      if (!dict[subname]) {
        dict[subname] = names[name];
      }
    } else {
      newnames[subname] = names[name];
    }
  });
});

names = newnames;
newnames = {};

Object.keys(names).forEach(name => {
  let matches = name.split(/([A-Z][a-z]{2,})/g).filter(Boolean);

  matches.forEach(subname => {
    if (/^[^a-zA-Z]+$/.test(subname)) {
      return;
    }

    if (/^([A-Z][a-z]+)$/g.test(subname) || /^[a-z]{3,}$/g.test(subname)) {
      if (!dict[subname]) {
        dict[subname] = names[name];
      }
    } else {
      newnames[subname] = names[name];
    }
  });
});

names = newnames;
newnames = {};

Object.keys(names).forEach(name => {
  let matches = name.split(/([A-Z]{2,})/g).filter(Boolean);

  matches.forEach(subname => {
    if (/^[^a-zA-Z]+$/.test(subname)) {
      return;
    }

    if (/^([A-Z]{2,})$/g.test(subname) || /^[a-z]{3,}$/g.test(subname)) {
      if (!dict[subname]) {
        dict[subname] = names[name];
      }
    } else {
      newnames[subname] = names[name];
    }
  });
});

names = newnames;
newnames = {};

Object.keys(names).forEach(name => {
  let matches = name.split(/_+/g).filter(Boolean);

  matches.forEach(subname => {
    if (subname.length > 1 && !/^[^a-z]+$/gi.test(subname)) {
      newnames[subname] = names[name];
    }
  });
});

names = newnames;
newnames = {};

Object.keys(names).forEach(name => {
  let matches = name.split(/([a-z]+[0-9]*)/g).filter(Boolean);
  
  matches.forEach(subname => {
    if (subname.toLowerCase() == '') {
      debugger;
    }

    if (subname.length > 2 && !/^[^a-z]+$/gi.test(subname) && !banned[subname.toLowerCase()]) {
      if (!dict[subname]) {
        dict[subname] = names[name];
      }
    }
  });
});

names = newnames;
newnames = {};

fs.writeFileSync('prefix.json', JSON.stringify(prefix, null, ' '));
fs.writeFileSync('dict.json', JSON.stringify(dict, null, ' '));

prefix = Object.keys(prefix).sort();
dict = Object.keys(dict).sort();

fs.writeFileSync('prefix.txt', prefix.join('\n'));
fs.writeFileSync('dict.txt', dict.join('\n'));

fs.writeFileSync('dict.h', [
  '#include <string>',
  '#include <vector>',
  '',
  'std::vector<std::string> getPrefixes() {',
  '  std::vector<std::string> ret;',
  ...prefix.map((v, i) => '  ret.push_back(' + JSON.stringify(v) + '); // ' + i),
  '  return ret;',
  '};',
  '',
  'std::vector<std::string> getDict() {',
  '  std::vector<std::string> ret;',
  ...dict.map((v, i) => '  ret.push_back(' + JSON.stringify(v) + '); // ' + i),
  '  return ret;',
  '};',
  '',
].join('\n'));
