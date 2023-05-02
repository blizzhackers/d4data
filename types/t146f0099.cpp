/**
 * Definition: t146f0099
 * Hash: 146f0099
 */

#include "t146f0099.h"

void t146f0099::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_b7c1372, base, current);
  current = ptr + 0x20;
  readData(&unk_5143c1f, base, current);
  current = ptr + 0x40;
  readData(&unk_982fe71, base, current);
  ptr += 0x60;
}
