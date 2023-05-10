const fs = require('fs');

let prefix = {
  'm_': 'm_',
  'sno': 'sno',
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
  '_': '_',
  'script': 'script',
  'event': 'event',
  'param': 'param',
  'power': 'power',
  'condition': 'condition',
  'trigger': 'trigger',
  'phase': 'phase',
  'callback': 'callback',
  'gizmo': 'gizmo',
  'data': 'data',
  'definition': 'definition',
  'table': 'table',
  'list': 'list',
  'entry': 'entry',
  'unknown': 'unknown',
  'code': 'code',
  'none': 'none',
  'actor': 'actor',
  'npc': 'npc',
  'component': 'component',
  'set': 'set',
  'ai': 'ai',
  'behavior': 'behavior',
  'state': 'state',
  'ambient': 'ambient',
  'sound': 'sound',
  'animation': 'animation',
  'anim': 'anim',
  'appearance': 'appearance',
  'hero': 'hero',
  'cloth': 'cloth',
  'conversation': 'conversation',
  'converation': 'converation',
  'list': 'list',
  'effect': 'effect',
  'group': 'group',
  'encounter': 'encounter',
  'explosion': 'explosion',
  'flag': 'flag',
  'font': 'font',
  'game': 'game',
  'balance': 'balance',
  'global': 'global',
  'level': 'level',
  'area': 'area',
  'light': 'light',
  'marker': 'marker',
  'observer': 'observer',
  'particle': 'particle',
  'physics': 'physics',
  'quest': 'quest',
  'rope': 'rope',
  'scene': 'scene',
  'shader': 'shader',
  'map': 'map',
  'shake': 'shake',
  'skill': 'skill',
  'kit': 'kit',
  'string': 'string',
  'surface': 'surface',
  'texture': 'texture',
  'trail': 'trail',
  'ui': 'ui',
  'weather': 'weather',
  'world': 'world',
  'recipe': 'recipe',
  'treasure': 'treasure',
  'class': 'class',
  'account': 'account',
  'material': 'material',
  'lore': 'lore',
  'reverb': 'reverb',
  'music': 'music',
  'tutorial': 'tutorial',
  'tree': 'tree',
  'vibration': 'vibration',
  'wise': 'wise',
  'bank': 'bank',
  'speaker': 'speaker',
  'item': 'item',
  'player': 'player',
  'fog': 'fog',
  'volume': 'volume',
  'biome': 'biome',
  'wall': 'wall',
  'table': 'table',
  'sub': 'sub',
  'zone': 'zone',
  'value': 'value',
  'monster': 'monster',
  'family': 'family',
  'tile': 'tile',
  'population': 'population',
  'schedule': 'schedule',
  'vector': 'vector',
  'field': 'field',
  'story': 'story',
  'board': 'board',
  'territory': 'territory',
  'audio': 'audio',
  'context': 'context',
  'vo': 'vo',
  'process': 'process',
  'demon': 'demon',
  'scroll': 'scroll',
  'chain': 'chain',
  'loudness': 'loudness',
  'preset': 'preset',
  'type': 'type',
  'achievement': 'achievement',
  'crafter': 'crafter',
  'houdini': 'houdini',
  'sim': 'sim',
  'movie': 'movie',
  'tiled': 'tiled',
  'style': 'style',
  'affix': 'affix',
  'reputation': 'reputation',
  'paragon': 'paragon',
  'node': 'node',
  'bonus': 'bonus',
  'store': 'store',
  'product': 'product',
  'glyph': 'glyph',
  'challenge': 'challenge',
  'marking': 'marking',
  'shape': 'shape',
  'requirement': 'requirement',
  'boost': 'boost',
  'emote': 'emote',
  'jewelry': 'jewelry',
  'title': 'title',
  'emblem': 'emblem',
  'dye': 'dye',
  'of': 'of',
  'war': 'war',
  'threshold': 'threshold',
  'awareness': 'awareness',
  'tracked': 'tracked',
  'reward': 'reward',
  'collision': 'collision',
  'settings': 'settings',
  'aspect': 'aspect',
  'ab': 'ab',
  'test': 'test',
  'stagger': 'stagger',
  'eye': 'eye',
  'color': 'color',
  'makeup': 'makeup',
  'hair': 'hair',
  'dungeon': 'dungeon',
  'activity': 'activity',
  'facial': 'facial',
  'face': 'face',
  'normal': 'normal',
  'MouseOver': 'MouseOver',
  'pushed': 'pushed',
  'inactive': 'inactive',
};

let names = {};
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
      prefix[subname] = names[name];
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
      dict[subname] = names[name];
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
      dict[subname] = names[name];
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
      dict[subname] = names[name];
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
