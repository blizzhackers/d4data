/**
 * Definition: t2f3c7c9a
 * Hash: 2f3c7c9a
 */

#include "t2f3c7c9a.h"

void t2f3c7c9a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoSkillPower, base, ptr);
  readData(&unk_cb51d8e, base, ptr);
  readData(&unk_5099eca, base, ptr);
}
