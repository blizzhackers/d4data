/**
 * Definition: t646eae5
 * Hash: 646eae5
 */

#include "t646eae5.h"

void t646eae5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_36650c, base, ptr);
  readData(&unk_b046307, base, ptr);
  readData(&unk_cc38bbe, base, ptr);
  readData(&unk_101b2fc, base, ptr);
  readData(&unk_6749d34, base, ptr);
  readData(&unk_839bfef, base, ptr);
  readData(&flNearPlane, base, ptr);
  readData(&flFarPlane, base, ptr);
}
