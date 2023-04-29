/**
 * Definition: ta69e4942
 * Hash: a69e4942
 */

#include "ta69e4942.h"

void ta69e4942::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_224db6f, base, ptr);
  readData(&unk_781a1ac, base, ptr);
}
