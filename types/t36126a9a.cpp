/**
 * Definition: t36126a9a
 * Hash: 36126a9a
 */

#include "t36126a9a.h"

void t36126a9a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&fDisableNonFriendlyOperation, base, ptr);
  readData(&fWalkToCenter, base, ptr);
  readData(&unk_2387505, base, ptr);
  readData(&fUseStringListName, base, ptr);
  readData(&unk_444cd69, base, ptr);
  readData(&flOperationRadius, base, ptr);
  readData(&unk_d0b1df5, base, ptr);
  readData(&unk_76fbf14, base, ptr);
  readData(&unk_83183d4, base, ptr);
  readData(&unk_2767229, base, ptr);
  readData(&unk_f184557, base, ptr);
  readData(&unk_6d9ebe1, base, ptr);
  readData(&unk_5456245, base, ptr);
  readData(&unk_af5815a, base, ptr);
  readData(&unk_18353a0, base, ptr);
  readData(&unk_11a3492, base, ptr);
  readData(&unk_3e0941e, base, ptr);
  readData(&unk_cd17f15, base, ptr);
  readData(&unk_bfad8a9, base, ptr);
  readData(&unk_1552d4d, base, ptr);
  readData(&unk_2cf2865, base, ptr);
  readData(&unk_fe76809, base, ptr);
  readData(&unk_359810e, base, ptr);
  readData(&nCooldown, base, ptr);
  readData(&unk_d45ed2d, base, ptr);
  readData(&unk_f6b20b7, base, ptr);
  readData(&unk_54513b8, base, ptr);
  readData(&unk_fd1f378, base, ptr);
  readData(&unk_487c14, base, ptr);
  readData(&unk_87f2609, base, ptr);
  readData(&unk_158eb4f, base, ptr);
  readData(&unk_ab58cd3, base, ptr);
  readData(&unk_91a3966, base, ptr);
  readData(&unk_25312e5, base, ptr);
  readData(&unk_4be4371, base, ptr);
  readData(&snoTreasureClass, base, ptr);
  readData(&unk_b14a8d7, base, ptr);
  readData(&unk_d9f9ff8, base, ptr);
  readData(&unk_94400f2, base, ptr);
  readData(&unk_2d56a75, base, ptr);
  readData(&unk_51b0c11, base, ptr);
  readData(&unk_6b4a81d, base, ptr);
  readData(&dwPad, base, ptr);
}
