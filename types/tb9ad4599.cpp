/**
 * Definition: tb9ad4599
 * Hash: b9ad4599
 */

#include "tb9ad4599.h"

void tb9ad4599::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tPhaseName, base, current);
  current = ptr + 0x18;
  readData(&unk_fcb7313, base, current);
  current = ptr + 0x30;
  readData(&unk_d0d932b, base, current);
  current = ptr + 0x34;
  readData(&unk_9a8200e, base, current);
  ptr += 0x38;
}
