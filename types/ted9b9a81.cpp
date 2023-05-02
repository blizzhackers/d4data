/**
 * Definition: ted9b9a81
 * Hash: ed9b9a81
 */

#include "ted9b9a81.h"

void ted9b9a81::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&szLabel, base, current);
  current = ptr + 0x90;
  readData(&unk_590b8b, base, current);
  current = ptr + 0x94;
  readData(&fHidden, base, current);
  ptr += 0x98;
}
