/**
 * Definition: t6aca3d7d
 * Hash: 6aca3d7d
 */

#include "t6aca3d7d.h"

void t6aca3d7d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_a488aa6, base, current);
  current = ptr + 0x18;
  readData(&snoSkill, base, current);
  current = ptr + 0x1c;
  readData(&wpLocation, base, current);
  current = ptr + 0x28;
  readData(&unk_bcab71e, base, current);
  current = ptr + 0x2c;
  readData(&bForce, base, current);
  ptr += 0x30;
}
