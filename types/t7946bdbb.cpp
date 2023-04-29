/**
 * Definition: t7946bdbb
 * Hash: 7946bdbb
 */

#include "t7946bdbb.h"

void t7946bdbb::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_1edc9f1, base, ptr);
  readData(&szQuest, base, ptr);
}
