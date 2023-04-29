/**
 * Definition: t144b834d
 * Hash: 144b834d
 */

#include "t144b834d.h"

void t144b834d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_3097c7c, base, ptr);
  readData(&snoMonster, base, ptr);
  readData(&snoSkill, base, ptr);
  readData(&uCount, base, ptr);
}
