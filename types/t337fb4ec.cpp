/**
 * Definition: t337fb4ec
 * Hash: 337fb4ec
 */

#include "t337fb4ec.h"

void t337fb4ec::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
