/**
 * Definition: t1121a259
 * Hash: 1121a259
 */

#include "t1121a259.h"

void t1121a259::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoTreasureClass, base, current);
  current = ptr + 0x4;
  readData(&unk_2a0e071, base, current);
  current = ptr + 0x8;
  readData(&unk_e86679d, base, current);
  ptr += 0xc;
}
