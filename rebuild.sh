#!/usr/bin/env bash
rm data/* -rf
curl https://d4armory.io/api/keys | node TactKey.js
CASCConsole -o -m Pattern -e "base/*.dat" -d data/ -l enUS -p fenris
CASCConsole -o -m Pattern -e "Base/meta/*" -d data/ -l enUS -p fenris
CASCConsole -o -m Pattern -e "enUS_Text/meta/*" -d data/ -l enUS -p fenris
mv data/base/* data/Base/
rm data/base/ -rf
mv data/Base/ data/base/
git checkout data/
rm json/base/meta -rf
rm json/enUS_Text/meta -rf
node parse.js data/
