/**
 * Definition: t1109bb04
 * Hash: 1109bb04
 */

#include "t1109bb04.h"

void t1109bb04::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_461add4, base, current);
  current = ptr + 0x8;
  readData(&unk_a5974b1, base, current);
  current = ptr + 0x18;
  readData(&unk_cd5f1f, base, current);
  ptr += 0x28;
}
