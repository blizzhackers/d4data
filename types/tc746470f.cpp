/**
 * Definition: tc746470f
 * Hash: c746470f
 */

#include "tc746470f.h"

void tc746470f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szBoneName, base, current);
  current = ptr + 0x4;
  readData(&unk_dc25f93, base, current);
  current = ptr + 0x8;
  readData(&unk_a5eb35, base, current);
  current = ptr + 0xc;
  readData(&unk_36bc3de, base, current);
  current = ptr + 0x10;
  readData(&flDuration, base, current);
  ptr += 0x14;
}
