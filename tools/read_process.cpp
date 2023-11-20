#ifdef _WIN64

#include <Windows.h>
#include <cstdio>
#include <fcntl.h>
#include <io.h>
#include <string>

int main(int argc, char *argv[]) {
	int result = _setmode(_fileno(stdout), _O_BINARY);

	if (result == -1) {
		fprintf(stderr, "Unable to set binary mode.\n");
		return 1;
	}

	if (argc != 4) {
		fprintf(stderr, "Must specify: pid, address, length\n");
	}

	uint32_t pid = std::strtol(argv[1], NULL, 10);
	uint64_t addr = std::strtoll(argv[2], NULL, 10);
	uint64_t length = std::strtoll(argv[3], NULL, 10);

	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

	if (!hProcess) {
		fprintf(stderr, "Unable to open window process.\n");
		return 1;
	}

	BYTE* data = new BYTE[length];
	uint64_t bytesRead = 0;

	if (ReadProcessMemory(hProcess, (LPCVOID)addr, data, length, &bytesRead)) {
		fwrite(&bytesRead, 1, sizeof(bytesRead), stdout);
		fwrite(data, sizeof(BYTE), bytesRead, stdout);
		return 0;
	}

	fprintf(stderr, "Unable to read process memory.\n");
	return 1;
}

#endif
