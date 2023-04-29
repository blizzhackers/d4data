/**
 * Definition: AnimPermutation
 * Hash: 50fc055d
 */

#include "AnimPermutation.h"

void AnimPermutation::read(const char* base, char* &ptr) {
  readData(&uID, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&flFrameRate, base, ptr);
  readData(&flCompression, base, ptr);
  readData(&dwBlendTime, base, ptr);
  readData(&unk_fe5755e, base, ptr);
  readData(&unk_48e16cf, base, ptr);
  readData(&dwWeight, base, ptr);
  readData(&unk_f2bdc14, base, ptr);
  readData(&nBoneCount, base, ptr);
  readData(&unk_1689768, base, ptr);
  readData(&tPhaseName, base, ptr);
  readData(&unk_57e56e2, base, ptr);
  readData(&unk_3d9dbd, base, ptr);
  readData(&unk_df9a366, base, ptr);
  readData(&unk_f0fe405, base, ptr);
  readData(&unk_c61b9d1, base, ptr);
  readData(&unk_6e16fde, base, ptr);
  readData(&unk_75e1ebe, base, ptr);
  readData(&unk_f14b63c, base, ptr);
  readData(&unk_ddce6df, base, ptr);
  readData(&unk_f269e88, base, ptr);
  readData(&unk_96cb676, base, ptr);
  readData(&unk_bb41f8, base, ptr);
  readData(&unk_4f89e54, base, ptr);
  readData(&unk_40c83b5, base, ptr);
  readData(&unk_41ae864, base, ptr);
  readData(&unk_f219e46, base, ptr);
  readData(&unk_acf4ed5, base, ptr);
  readData(&unk_779d247, base, ptr);
  readData(&unk_e774a13, base, ptr);
  readData(&nKeyframeCount, base, ptr);
  readData(&unk_3068b27, base, ptr);
  readData(&snoEffectGroup, base, ptr);
  readData(&unk_2e355dd, base, ptr);
  readData(&unk_536659a, base, ptr);
  readData(&unk_b4c58a6, base, ptr);
  readData(&unk_4b39bee, base, ptr);
  readData(&wvAvgVel, base, ptr);
  readData(&unk_57d4879, base, ptr);
  readData(&tHardpointLink, base, ptr);
  readData(&unk_bd4a157, base, ptr);
  readData(&unk_a3acec8, base, ptr);
  readData(&pnAnimToStructure, base, ptr);
}
