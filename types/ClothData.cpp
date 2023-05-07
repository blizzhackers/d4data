/**
 * Definition: ClothData
 * Hash: 9eef0cf4
 */

#include "ClothData.h"

void ClothData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_3c1684f, base, current);
  current = ptr + 0x120;
  readData(&unk_1466466, base, current);
  current = ptr + 0x130;
  readData(&unk_8bdea5d, base, current);
  current = ptr + 0x140;
  readData(&unk_f3049dd, base, current);
  current = ptr + 0x150;
  readData(&ptBlendWeights, base, current);
  current = ptr + 0x160;
  readData(&unk_6b5f617, base, current);
  current = ptr + 0x170;
  readData(&unk_55a1a8c, base, current);
  current = ptr + 0x180;
  readData(&ptLevels, base, current);
  current = ptr + 0x190;
  readData(&unk_1236f02, base, current);
  current = ptr + 0x1a0;
  readData(&ptParentIndices, base, current);
  current = ptr + 0x1b0;
  readData(&unk_ca70b10, base, current);
  current = ptr + 0x1c0;
  readData(&unk_74ac4d4, base, current);
  current = ptr + 0x1d0;
  readData(&ptWeights, base, current);
  current = ptr + 0x1e0;
  readData(&unk_75e7dfc, base, current);
  current = ptr + 0x1f0;
  readData(&unk_a51816d, base, current);
  current = ptr + 0x200;
  readData(&ptTriangles, base, current);
  current = ptr + 0x210;
  readData(&unk_ca38fa8, base, current);
  current = ptr + 0x220;
  readData(&unk_f47fd3e, base, current);
  current = ptr + 0x230;
  readData(&unk_8ecbb2b, base, current);
  current = ptr + 0x240;
  readData(&unk_9f71907, base, current);
  current = ptr + 0x250;
  readData(&unk_93f4433, base, current);
  current = ptr + 0x260;
  readData(&unk_250faf, base, current);
  current = ptr + 0x270;
  readData(&unk_4213ccc, base, current);
  current = ptr + 0x280;
  readData(&unk_4bbdfb2, base, current);
  current = ptr + 0x290;
  readData(&unk_b88f73, base, current);
  current = ptr + 0x2a0;
  readData(&unk_2b558d6, base, current);
  current = ptr + 0x2b0;
  readData(&unk_94dfc4, base, current);
  current = ptr + 0x2c0;
  readData(&unk_ff07ce, base, current);
  ptr += 0x2d0;
}
