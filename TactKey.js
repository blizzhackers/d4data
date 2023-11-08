let fs = require('fs');
let data = fs.readFileSync(0, 'utf-8');

if (data && data.length) {
    let keys = JSON.parse(data);
    
    if (keys && keys.length) {
        fs.writeFileSync('TactKey.csv', keys.map(pair => {
            return pair.id.toString(16).toUpperCase().padStart(16, '0') + ';' + Buffer.from(pair.value, 'base64').toString('hex').toUpperCase().padStart(32, '0');
        }).join('\n'));    
    }
}
