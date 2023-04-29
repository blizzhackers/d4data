/**
 * Definition: t8d2297e4
 * Hash: 8d2297e4
 */

#include "t8d2297e4.h"

void t8d2297e4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_4ec0ab2, base, ptr);
  readData(&unk_ffbac0, base, ptr);
  readData(&unk_ea1a6c6, base, ptr);
  readData(&unk_29196f5, base, ptr);
  readData(&unk_ce00a34, base, ptr);
  readData(&unk_4f6f7ab, base, ptr);
  readData(&unk_299b139, base, ptr);
  readData(&unk_4dd0653, base, ptr);
  readData(&unk_71d6df3, base, ptr);
  readData(&unk_c3897b4, base, ptr);
  readData(&unk_730d00f, base, ptr);
  readData(&unk_4792ef5, base, ptr);
  readData(&unk_354b223, base, ptr);
  readData(&unk_1dde522, base, ptr);
  readData(&unk_44109a8, base, ptr);
  readData(&nLastAllocatedRewardId, base, ptr);
}
