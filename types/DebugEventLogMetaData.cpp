/**
 * Definition: DebugEventLogMetaData
 * Hash: 9d494ccc
 */

#include "DebugEventLogMetaData.h"

void DebugEventLogMetaData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_1255128, base, current);
  current = ptr + 0x14;
  readData(&unk_965113, base, current);
  current = ptr + 0x18;
  readData(&unk_850f3e2, base, current);
  current = ptr + 0x1c;
  readData(&ann, base, current);
  current = ptr + 0x24;
  readData(&wpStartData, base, current);
  current = ptr + 0x38;
  readData(&unk_9e80738, base, current);
  current = ptr + 0x4c;
  readData(&bounds, base, current);
  current = ptr + 0x58;
  readData(&rgbaColor, base, current);
  current = ptr + 0x5c;
  readData(&unk_8273480, base, current);
  ptr += 0x60;
}
