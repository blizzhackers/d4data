@echo off
cd /D "%~dp0"

cl.exe checksum.cpp /O2 /std:c++17 /EHsc
cl.exe field_checksum.cpp /O2 /std:c++17 /EHsc
cl.exe gbid_checksum.cpp /O2 /std:c++17 /EHsc
cl.exe collisions.cpp /O2 /std:c++17 /EHsc
