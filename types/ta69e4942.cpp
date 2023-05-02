/**
 * Definition: ta69e4942
 * Hash: a69e4942
 */

#include "ta69e4942.h"

void ta69e4942::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  current = ptr + 0x30;
  readData(&unk_224db6f, base, current);
  current = ptr + 0x34;
  readData(&unk_781a1ac, base, current);
  ptr += 0x38;
}
