#ifdef _WIN64

#include <Windows.h>
#include <cstdio>
#include <fcntl.h>
#include <io.h>
#include <string>
#include <sstream>
#include <vector>
#include <Psapi.h>
#include <inttypes.h>

#pragma comment(lib, "version.lib")
#pragma pack(push,1)

std::vector<DWORD> getBuildVersion(std::string szFileName) {
    DWORD  verHandle = 0;
    UINT   size = 0;
    LPBYTE lpBuffer = NULL;
    DWORD  verSize = GetFileVersionInfoSizeA(szFileName.c_str(), &verHandle);
    std::vector<DWORD> ret;

    if (verSize != NULL) {
        LPSTR verData = new char[verSize];

        if (GetFileVersionInfoA(szFileName.c_str(), 0, verSize, verData)) {
            if (VerQueryValueA(verData, "\\", (VOID FAR * FAR*) & lpBuffer, &size)) {
                if (size) {
                    VS_FIXEDFILEINFO* verInfo = (VS_FIXEDFILEINFO*)lpBuffer;
                    if (verInfo->dwSignature == 0xfeef04bd) {
                        ret.push_back(verInfo->dwFileVersionMS);
                        ret.push_back(verInfo->dwFileVersionLS);

                        return ret;
                    }
                }
            }
        }
        delete[] verData;
    }

    return {};
}

// 48 8B 1D ?? ?? ?? ?? 33 ?? 4C 8D 35 ?? ?? ?? ??
uint64_t findTypePointer(unsigned char* data, DWORD dataSize) {
    uint64_t offset = 0;

    for (ULONGLONG c = 0; c + 28 < dataSize; c++) {
        if (
            data[c + 0] == 0x48 &&
            data[c + 1] == 0x8B &&
            data[c + 2] == 0x1D &&
            data[c + 7] == 0x33 &&
            data[c + 9] == 0x4C &&
            data[c + 10] == 0x8D &&
            data[c + 11] == 0x35
        ) {
            if (offset == 0) {
                offset = c;
            }
            else {
                fprintf(stderr, "Ambiguous function definition.\n");
                return 0;
            }
        }
    }

    if (offset == 0) {
        fprintf(stderr, "Unable to find function definition.\n");

        return 0;
    }

    return offset;
}

uint64_t findGroupPointer(unsigned char* data, DWORD dataSize) {
    uint64_t offset = 0;

    for (ULONGLONG c = 0; c + 28 < dataSize; c++) {
        if (
            data[c + 0] == 0x41 &&
            data[c + 1] == 0xB8 &&
            // data[c + 2] == 0x68 &&
            // data[c + 3] == 0x04 &&
            data[c + 4] == 0x00 &&
            data[c + 5] == 0x00 &&
            data[c + 6] == 0xE8 &&
            data[c + 11] == 0x33 &&
            data[c + 12] == 0xFF &&
            data[c + 13] == 0x48 &&
            data[c + 14] == 0x8D &&
            data[c + 15] == 0x1D
            ) {
            if (offset == 0) {
                offset = c;
            }
            else {
                fprintf(stderr, "Ambiguous function definition.\n");
                return 0;
            }
        }
    }

    if (offset == 0) {
        fprintf(stderr, "Unable to find function definition.\n");
        return 0;
    }

    return offset;
}

uint64_t findAttributePointer(unsigned char* data, DWORD dataSize) {
    uint64_t offset = 0;

    for (ULONGLONG c = 0; c + 28 < dataSize; c++) {
        if (
            data[c + 0] == 0x45 &&
            data[c + 1] == 0x33 &&
            data[c + 2] == 0xd2 &&
            data[c + 3] == 0x4c &&
            data[c + 4] == 0x8d &&
            data[c + 5] == 0x0d &&
            // Attribute start address
            data[c + 10] == 0x4c &&
            data[c + 11] == 0x8d &&
            data[c + 12] == 0x1d
            // Attribute end address
            ) {
            if (offset == 0) {
                offset = c;
            }
            else {
                fprintf(stderr, "Ambiguous function definition.\n");
                return 0;
            }
        }
    }

    if (offset == 0) {
        fprintf(stderr, "Unable to find function definition.\n");
        return 0;
    }

    return offset;
}

int main() {
    char szWindowName[] = "Diablo IV";
    std::string executableName = "\\Diablo IV.exe";
    std::vector<DWORD> buildVersion;
    HWND hWindow;
    DWORD pid = 0;
    HMODULE hMods[1024]{ 0 };
    DWORD dwNeeded;
    HANDLE hProcess = 0;
    MODULEINFO modinfo{ 0 };
    unsigned char* D4Data = nullptr;
    std::string exepath;
    char szProcName[MAX_PATH];
    char szModName[MAX_PATH];

    DWORD dwMode = 0;
    int result = _setmode(_fileno(stdout), _O_BINARY);

    if (result == -1) {
        fprintf(stderr, "Unable to set binary mode.\n");
        return 1;
    }

    hWindow = FindWindowA(NULL, szWindowName);

    if (!hWindow) {
        fprintf(stderr, "Unable to find window.\n");
        return 1;
    }

    if (!GetWindowThreadProcessId(hWindow, &pid)) {
        fprintf(stderr, "Unable to find window process id.\n");
        return 1;
    }

    hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

    if (!hProcess) {
        fprintf(stderr, "Unable to open window process.\n");
        return 1;
    }

    if (!EnumProcessModules(hProcess, hMods, sizeof(hMods), &dwNeeded)) {
        fprintf(stderr, "Unable to enum process modules.\n");
        return 1;
    }

    if (!GetProcessImageFileNameA(hProcess, szProcName, sizeof(szProcName))) {
        fprintf(stderr, "Unable to process image filename.\n");
        return 1;
    }

    for (int i = 0; i < (dwNeeded / sizeof(HMODULE)); i++) {
        if (GetModuleFileNameExA(hProcess, hMods[i], szModName, sizeof(szModName))) {
            std::string modName = szModName;

            if (modName.find(executableName) != std::string::npos) {
                buildVersion = getBuildVersion(modName);
                MODULEINFO tmp;

                if (hMods[i] && GetModuleInformation(hProcess, hMods[i], &tmp, sizeof(tmp))) {
                    modinfo = tmp;
                    exepath = modName;
                    break;
                }
            }
        }
    }

    if (modinfo.SizeOfImage <= 0) {
        fprintf(stderr, "Unable to open window process.\n");
        return 1;
    }

    D4Data = new unsigned char[modinfo.SizeOfImage];
    size_t bytesRead = 0;

    printf("{");
    printf("\"pid\":%d,", pid);
    printf("\"base\":\"%llu\",", (uint64_t)modinfo.lpBaseOfDll);
    printf("\"size\":\"%d\",", modinfo.SizeOfImage);

    ReadProcessMemory(hProcess, modinfo.lpBaseOfDll, D4Data, modinfo.SizeOfImage, &bytesRead);

    printf("\"version\":[%d,%d,%d,%d],", buildVersion[0] >> 16 & 0xffff, buildVersion[0] & 0xffff, buildVersion[1] >> 16 & 0xffff, buildVersion[1] & 0xffff);

    uint64_t typeOffset = findTypePointer(D4Data, modinfo.SizeOfImage);
    uint64_t groupOffset = findGroupPointer(D4Data, modinfo.SizeOfImage);
    uint64_t attributeOffset = findAttributePointer(D4Data, modinfo.SizeOfImage);

    {
        uint32_t* ptrOffset = (uint32_t*)&D4Data[attributeOffset + 6];
        uint32_t attrSize = ((*(uint32_t*)&D4Data[attributeOffset + 13]) + 7 - *ptrOffset);
        attrSize = ((*(uint32_t*)&D4Data[attributeOffset + 13]) + 7 - *ptrOffset);
        uint64_t rip = uint64_t(modinfo.lpBaseOfDll) + attributeOffset + 10;
        uint64_t attrStart = (uint64_t)(rip + *ptrOffset - 0x40);
        PRIu64;
        printf("\"attributeBase\":\"%llu\",", attrStart);
        printf("\"attributeSize\":\"%lu\"", attrSize);
    }

    printf(",");

    {
        uint32_t* ptrOffset = (uint32_t*)&D4Data[typeOffset + 3];
        uint64_t rip = uint64_t(modinfo.lpBaseOfDll) + typeOffset + 7;
        uint64_t typeStart = (uint64_t)(rip + *ptrOffset);

        printf("\"typeBase\":\"%llu\"", typeStart);
    }

    printf(",");

    {
        uint32_t* ptrOffset = (uint32_t*)&D4Data[groupOffset + 16];
        uint32_t* ptrMax = (uint32_t*)&D4Data[groupOffset + 16 + 7];
        uint64_t rip = uint64_t(modinfo.lpBaseOfDll) + groupOffset + 20;
        uint64_t groupStart = rip + *ptrOffset;
        uint32_t arraySize = (*ptrMax - *ptrOffset - 7);

        printf("\"groupBase\":\"%llu\",", groupStart);
        printf("\"groupSize\":\"%lu\"", arraySize);
    }

    printf("}");

    return 0;
}

#endif
