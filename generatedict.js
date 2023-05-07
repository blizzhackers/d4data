const fs = require('fs');

let prefix = {
  'm_': 'm_',
};

let dict = {
  'a': 'a',
  'b': 'b',
  'c': 'c',
  'd': 'd',
  'e': 'e',
  'f': 'f',
  'g': 'g',
  'h': 'h',
  'i': 'i',
  'j': 'j',
  'k': 'k',
  'l': 'l',
  'm': 'm',
  'n': 'n',
  'o': 'o',
  'p': 'p',
  'q': 'q',
  'r': 'r',
  's': 's',
  't': 't',
  'u': 'u',
  'v': 'v',
  'w': 'w',
  'x': 'x',
  'y': 'y',
  'z': 'z',
  '0': '0',
  '1': '1',
  '2': '2',
  '3': '3',
  '4': '4',
  '5': '5',
  '6': '6',
  '7': '7',
  '8': '8',
  '9': '9',
};

let names = {};
let newnames = {};

fs.readFileSync('names.txt').toString().split(/\s+/gi).forEach(name => {
  names[name] = name;
});

Object.keys(names).forEach(name => {
  let matches = name.split(/^((?:fl|u|n|s|sz|pt|t|m|a|ar|b|bc|dw|e|f|gb|h|i|is|id|l|p|pn|q|v|vw|wd|wp|wr|ws|wv)(?=[0-9A-Z_]))/g).filter(Boolean);

  matches.forEach(subname => {
    if (/^[^a-zA-Z]+$/.test(subname)) {
      return;
    }

    if (/^(fl|u|n|s|sz|pt|t|m|a|ar|b|bc|dw|e|f|gb|h|i|is|id|l|p|pn|q|v|vw|wd|wp|wr|ws|wv)$/g.test(subname)) {
      prefix[subname.toLowerCase()] = names[name];
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
    if (/^([^a-zA-Z]+)$/.test(subname)) {
      return;
    }

    if (/^(3x3|4x4|BCVEC2I|IDs(?![a-z])|By(?![a-z])|To(?![a-z])|In(?![a-z])|Is(?![a-z])|On(?![a-z])|No(?![a-z])|(?<![0-9])2D|(?<![0-9])3D|(?<![0-9])4D)$/g.test(subname) || /^[a-z]{3,}$/g.test(subname)) {
      dict[subname.toLowerCase()] = names[name];
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
      dict[subname.toLowerCase()] = names[name];
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
      dict[subname.toLowerCase()] = names[name];
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
    if (subname.length > 1 && !/^[^a-z]+$/gi.test(subname)) {
      dict[subname] = names[name];
    }
  });
});

names = newnames;
newnames = {};

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
  '  ret.push_back(""); // 0',
  ...prefix.map((v, i) => '  ret.push_back(' + JSON.stringify(v) + '); // ' + (i + 1)),
  '  return ret;',
  '};',
  '',
  'std::vector<std::string> getDict() {',
  '  std::vector<std::string> ret;',
  '  ret.push_back(""); // 0',
  ...dict.map((v, i) => '  ret.push_back(' + JSON.stringify(v) + '); // ' + (i + 1)),
  '  return ret;',
  '};',
  '',
].join('\n'));
