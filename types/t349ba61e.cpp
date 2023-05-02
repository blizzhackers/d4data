/**
 * Definition: t349ba61e
 * Hash: 349ba61e
 */

#include "t349ba61e.h"

void t349ba61e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&unk_b88123b, base, current);
  current = ptr + 0x45;
  readData(&unk_f1dc826, base, current);
  ptr += 0x78;
}
