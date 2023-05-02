/**
 * Definition: tff870ab6
 * Hash: ff870ab6
 */

#include "tff870ab6.h"

void tff870ab6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&snoPower, base, current);
  current = ptr + 0x108;
  readData(&snoBuff, base, current);
  current = ptr + 0x10c;
  readData(&unk_891f4a8, base, current);
  current = ptr + 0x110;
  readData(&unk_82ec588, base, current);
  current = ptr + 0x114;
  readData(&unk_52d3115, base, current);
  current = ptr + 0x118;
  readData(&unk_579f22d, base, current);
  current = ptr + 0x128;
  readData(&unk_a60ef1c, base, current);
  ptr += 0x130;
}
