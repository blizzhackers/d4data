/**
 * Definition: t3d4fd272
 * Hash: 3d4fd272
 */

#include "t3d4fd272.h"

void t3d4fd272::read(const char* base, char* &ptr) {
  readData(&szBoneName, base, ptr);
  readData(&unk_36bc3de, base, ptr);
  readData(&flDuration, base, ptr);
  readData(&flRotationSpeed, base, ptr);
  readData(&unk_ed952a9, base, ptr);
  readData(&unk_92ce5f2, base, ptr);
  readData(&unk_10363a5, base, ptr);
  readData(&unk_afaabbe, base, ptr);
}
