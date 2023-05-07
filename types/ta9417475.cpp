/**
 * Definition: ta9417475
 * Hash: a9417475
 */

#include "ta9417475.h"

void ta9417475::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_43efd8c, base, current);
  current = ptr + 0x4;
  readData(&snoQuest, base, current);
  current = ptr + 0x8;
  readData(&dwPhaseUID, base, current);
  current = ptr + 0xc;
  readData(&unk_31547ea, base, current);
  ptr += 0x10;
}
