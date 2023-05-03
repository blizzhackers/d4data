/**
 * Definition: t646eae5
 * Hash: 646eae5
 */

#include "t646eae5.h"

void t646eae5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&aFOV, base, current);
  current = ptr + 0x14;
  readData(&unk_b046307, base, current);
  current = ptr + 0x18;
  readData(&unk_cc38bbe, base, current);
  current = ptr + 0x1c;
  readData(&unk_101b2fc, base, current);
  current = ptr + 0x20;
  readData(&unk_6749d34, base, current);
  current = ptr + 0x24;
  readData(&unk_839bfef, base, current);
  current = ptr + 0x28;
  readData(&flNearPlane, base, current);
  current = ptr + 0x2c;
  readData(&flFarPlane, base, current);
  ptr += 0x30;
}
