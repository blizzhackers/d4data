#!/usr/bin/env bash

PATH="$(dirname $0)/CASCExplorer/CASCConsole/bin/Release/net6.0/:$PATH"
CASCConsole="CASCConsole"

# Add extension for windows if you're running in git bash
if [[ "$OSTYPE" =~ ^msys ]]; then
  CASCConsole="$CASCConsole.exe"
fi

rm data/* -rf
curl https://d4armory.io/api/keys | node TactKey.js
$CASCConsole -o -m Pattern -e "base/*.dat" -d data/ -l enUS -p fenris
$CASCConsole -o -m Pattern -e "Base/meta/*" -d data/ -l enUS -p fenris
$CASCConsole -o -m Pattern -e "enUS_Text/meta/*" -d data/ -l enUS -p fenris
$CASCConsole -o -m Pattern -e "enUS_Speech/meta/*" -d data/ -l enUS -p fenris
mv data/base/* data/Base/
rm data/base/ -rf
mv data/Base/ data/base/
git checkout data/
rm json/base/meta -rf
rm json/enUS_Text/meta -rf
rm json/enUS_Speech/meta -rf
node parse.js data/
