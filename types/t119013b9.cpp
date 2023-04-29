/**
 * Definition: t119013b9
 * Hash: 119013b9
 */

#include "t119013b9.h"

void t119013b9::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d8d2509, base, ptr);
  readData(&unk_b677151, base, ptr);
  readData(&unk_633271a, base, ptr);
  readData(&flSystemDuration, base, ptr);
  readData(&unk_2f42898, base, ptr);
  readData(&unk_9ca448c, base, ptr);
  readData(&arIndices, base, ptr);
  readData(&unk_b130897, base, ptr);
  readData(&unk_f481a51, base, ptr);
  readData(&unk_97ed4ea, base, ptr);
  readData(&unk_15864c9, base, ptr);
  readData(&arLines, base, ptr);
}
