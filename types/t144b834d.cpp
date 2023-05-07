/**
 * Definition: t144b834d
 * Hash: 144b834d
 */

#include "t144b834d.h"

void t144b834d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szGroupType, base, current);
  current = ptr + 0x20;
  readData(&snoMonster, base, current);
  current = ptr + 0x24;
  readData(&snoSkill, base, current);
  current = ptr + 0x28;
  readData(&uCount, base, current);
  ptr += 0x2c;
}
