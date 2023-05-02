/**
 * Definition: t4d7ce083
 * Hash: 4d7ce083
 */

#include "t4d7ce083.h"

void t4d7ce083::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_952c928, base, current);
  current = ptr + 0x10;
  readData(&unk_782eb3d, base, current);
  current = ptr + 0x20;
  readData(&unk_e789a65, base, current);
  current = ptr + 0x30;
  readData(&unk_ca8bc7a, base, current);
  ptr += 0x40;
}
