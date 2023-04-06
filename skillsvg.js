const fs = require('fs');

JSON.parse(fs.readFileSync('./json/skl.json')).forEach((filename) => {
  const parts = filename.split('/');
  const fileparts = parts[parts.length - 1].split('.');
  const className = fileparts[0];
  const skills = JSON.parse(fs.readFileSync(`./json/${filename}`));

  let xmin = [];
  let xmax = [];
  let ymin = [];
  let ymax = [];

  skills.forEach((skill) => {
    // Adjust for aspect ratio
    skill.y *= 16/9;
    xmin.push(skill.x);
    xmax.push(skill.x);
    ymin.push(skill.y);
    ymax.push(skill.y);
  });

  xmin = Math.min(...xmin) - 300;
  xmax = Math.max(...xmax) + 300;
  ymin = Math.min(...ymin) - 300;
  ymax = Math.max(...ymax) + 300;

  const width = xmax - xmin;
  const height = ymax - ymin;

  const connected = {};
  const lines = [];
  const circles = [];

  skills.forEach((skill, index) => {
    skill.connections.forEach((connectionIndex) => {
      const skill2 = skills[connectionIndex];
      const [x1, y1] = [skill.x, skill.y];
      const [x2, y2] = [skill2.x, skill2.y];

      if (!connected[index + ',' + connectionIndex]) {
        connected[index + ',' + connectionIndex] = true;
        connected[connectionIndex + ',' + index] = true;
        lines.push(`<line x1="${x1}" y1="${y1}" x2="${x2}" y2="${y2}" stroke="#dfdfdf" stroke-width="20" />`);
      }
    });

    circles.push(`<circle cx="${skill.x}" cy="${skill.y}" r="125" fill="${skill.is_root ? '#ff5f5f' : '#009aff'}" />`);
  });

  const svg = [
    `<svg viewBox="${xmin} ${ymin} ${width} ${height}" xmlns="http://www.w3.org/2000/svg">\n`,
    `<style>\n`,
    `  svg {\n`,
    `    background-color: black;\n`,
    `  }\n`,
    `</style>\n`,
    lines.join(''),
    circles.join(''),
    `</svg>`
  ].join('');
  
  fs.writeFileSync(`./svg/${className}.skl.svg`, svg);
});
