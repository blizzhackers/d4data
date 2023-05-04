/**
 * Definition: AnimPermutation
 * Hash: 50fc055d
 */

#include "AnimPermutation.h"

void AnimPermutation::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uID, base, current);
  current = ptr + 0x4;
  readData(&dwFlags, base, current);
  current = ptr + 0x8;
  readData(&flFrameRate, base, current);
  current = ptr + 0xc;
  readData(&flCompression, base, current);
  current = ptr + 0x10;
  readData(&dwBlendTime, base, current);
  current = ptr + 0x14;
  readData(&unk_fe5755e, base, current);
  current = ptr + 0x18;
  readData(&unk_48e16cf, base, current);
  current = ptr + 0x1c;
  readData(&dwWeight, base, current);
  current = ptr + 0x20;
  readData(&unk_f2bdc14, base, current);
  current = ptr + 0x28;
  readData(&nBoneCount, base, current);
  current = ptr + 0x30;
  readData(&ptPayloadData, base, current);
  current = ptr + 0x40;
  readData(&tPhaseName, base, current);
  current = ptr + 0x44;
  readData(&unk_57e56e2, base, current);
  current = ptr + 0x48;
  readData(&unk_3d9dbd, base, current);
  current = ptr + 0x88;
  readData(&unk_df9a366, base, current);
  current = ptr + 0x98;
  readData(&unk_f0fe405, base, current);
  current = ptr + 0xa8;
  readData(&unk_c61b9d1, base, current);
  current = ptr + 0xac;
  readData(&unk_6e16fde, base, current);
  current = ptr + 0xbc;
  readData(&unk_75e1ebe, base, current);
  current = ptr + 0xc4;
  readData(&unk_f14b63c, base, current);
  current = ptr + 0xcc;
  readData(&unk_ddce6df, base, current);
  current = ptr + 0xd0;
  readData(&unk_f269e88, base, current);
  current = ptr + 0xd4;
  readData(&unk_96cb676, base, current);
  current = ptr + 0xd8;
  readData(&unk_bb41f8, base, current);
  current = ptr + 0xdc;
  readData(&unk_4f89e54, base, current);
  current = ptr + 0xe0;
  readData(&unk_40c83b5, base, current);
  current = ptr + 0xe4;
  readData(&unk_41ae864, base, current);
  current = ptr + 0xe8;
  readData(&unk_f219e46, base, current);
  current = ptr + 0xec;
  readData(&unk_acf4ed5, base, current);
  current = ptr + 0xf0;
  readData(&unk_779d247, base, current);
  current = ptr + 0xf4;
  readData(&unk_e774a13, base, current);
  current = ptr + 0xf8;
  readData(&nKeyframeCount, base, current);
  current = ptr + 0xfc;
  readData(&unk_3068b27, base, current);
  current = ptr + 0x100;
  readData(&snoEffectGroup, base, current);
  current = ptr + 0x104;
  readData(&unk_2e355dd, base, current);
  current = ptr + 0x108;
  readData(&unk_536659a, base, current);
  current = ptr + 0x10c;
  readData(&unk_b4c58a6, base, current);
  current = ptr + 0x110;
  readData(&unk_4b39bee, base, current);
  current = ptr + 0x120;
  readData(&wvAvgVel, base, current);
  current = ptr + 0x12c;
  readData(&unk_57d4879, base, current);
  current = ptr + 0x148;
  readData(&tHardpointLink, base, current);
  current = ptr + 0x150;
  readData(&unk_bd4a157, base, current);
  current = ptr + 0x154;
  readData(&unk_a3acec8, base, current);
  current = ptr + 0x158;
  readData(&pnAnimToStructure, base, current);
  ptr += 0x160;
}
