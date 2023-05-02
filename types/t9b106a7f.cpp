/**
 * Definition: t9b106a7f
 * Hash: 9b106a7f
 */

#include "t9b106a7f.h"

void t9b106a7f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_461add4, base, current);
  current = ptr + 0x8;
  readData(&unk_281e410, base, current);
  current = ptr + 0x18;
  readData(&unk_a5974b1, base, current);
  current = ptr + 0x28;
  readData(&unk_cd5f1f, base, current);
  ptr += 0x38;
}
