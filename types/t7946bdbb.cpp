/**
 * Definition: t7946bdbb
 * Hash: 7946bdbb
 */

#include "t7946bdbb.h"

void t7946bdbb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_1edc9f1, base, current);
  current = ptr + 0x20;
  readData(&szQuest, base, current);
  ptr += 0x30;
}
