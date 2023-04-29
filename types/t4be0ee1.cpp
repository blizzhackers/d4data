/**
 * Definition: t4be0ee1
 * Hash: 4be0ee1
 */

#include "t4be0ee1.h"

void t4be0ee1::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annTarget, base, ptr);
  readData(&annAttacker, base, ptr);
  readData(&unk_5692531, base, ptr);
  readData(&unk_5d619c6, base, ptr);
  readData(&unk_2b88f71, base, ptr);
  readData(&unk_b1ae0e8, base, ptr);
  readData(&snoEffectGroup, base, ptr);
}
