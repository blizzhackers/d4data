#!/usr/bin/env bash
set -e

PATH="$(dirname $0)/CASCExplorer/CASCConsole/bin/Release/net6.0/:$PATH"
CASCConsole="CASCConsole"

# Add extension for windows if you're running in git bash
if [[ "$OSTYPE" =~ ^msys ]]; then
  CASCConsole="$CASCConsole.exe"
fi

echo Removing old data.
rm data/* -rf
echo Fetching keys.
curl https://d4armory.io/api/keys | node TactKey.js
echo Fetching data.
$CASCConsole -o -m Pattern -e "base/*.dat" -d data/ -l enUS -p fenris
$CASCConsole -o -m Pattern -e "Base\\meta\\*" -d data/ -l enUS -p fenris
$CASCConsole -o -m Pattern -e "enUS_Text\\meta\\*" -d data/ -l enUS -p fenris
$CASCConsole -o -m Pattern -e "enUS_Speech\\meta\\*" -d data/ -l enUS -p fenris

if ! [[ "$OSTYPE" =~ ^msys ]]; then
  echo Fixing windows directory names.
  mv data/base/* data/Base/
  rm data/base/ -rf
  mv data/Base/ data/base/
fi

git checkout data/

echo Removing old json.
rm json/base/meta -rf
rm json/enUS_Text/meta -rf
rm json/enUS_Speech/meta -rf
echo Parsing json.
node parse.js data/
