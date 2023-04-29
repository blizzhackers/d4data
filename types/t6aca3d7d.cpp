/**
 * Definition: t6aca3d7d
 * Hash: 6aca3d7d
 */

#include "t6aca3d7d.h"

void t6aca3d7d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_a488aa6, base, ptr);
  readData(&snoSkill, base, ptr);
  readData(&wpLocation, base, ptr);
  readData(&unk_bcab71e, base, ptr);
  readData(&bForce, base, ptr);
}
