/**
 * Definition: tb7b10239
 * Hash: b7b10239
 */

#include "tb7b10239.h"

void tb7b10239::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_a488aa6, base, current);
  current = ptr + 0x18;
  readData(&unk_3ec603d, base, current);
  ptr += 0x1c;
}
