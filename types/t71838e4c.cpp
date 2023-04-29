/**
 * Definition: t71838e4c
 * Hash: 71838e4c
 */

#include "t71838e4c.h"

void t71838e4c::read(const char* base, char* &ptr) {
  readData(&eBase, base, ptr);
  readData(&flHue, base, ptr);
  readData(&flSaturation, base, ptr);
  readData(&flValue, base, ptr);
  readData(&unk_186de87, base, ptr);
  readData(&unk_509016f, base, ptr);
  readData(&szLabel, base, ptr);
}
