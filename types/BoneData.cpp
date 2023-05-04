/**
 * Definition: BoneData
 * Hash: 515b4f7e
 */

#include "BoneData.h"

void BoneData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a3acec8, base, current);
  current = ptr + 0x4;
  readData(&unk_5db20d6, base, current);
  current = ptr + 0x8;
  readData(&ptBoneStructure, base, current);
  current = ptr + 0x18;
  readData(&unk_f25aed5, base, current);
  current = ptr + 0x1c;
  readData(&unk_ad025d8, base, current);
  current = ptr + 0x20;
  readData(&unk_4118a82, base, current);
  current = ptr + 0x90;
  readData(&unk_73d52a2, base, current);
  current = ptr + 0xa0;
  readData(&tLookAtData, base, current);
  current = ptr + 0xd0;
  readData(&unk_12040e2, base, current);
  current = ptr + 0x110;
  readData(&unk_42b03b4, base, current);
  current = ptr + 0x120;
  readData(&unk_d872b9f, base, current);
  current = ptr + 0x138;
  readData(&ptHardpoints, base, current);
  current = ptr + 0x148;
  readData(&ptLoopConstraints, base, current);
  current = ptr + 0x158;
  readData(&unk_eb48138, base, current);
  current = ptr + 0x168;
  readData(&unk_248cf4, base, current);
  current = ptr + 0x178;
  readData(&unk_b6507e3, base, current);
  current = ptr + 0x188;
  readData(&unk_214010b, base, current);
  current = ptr + 0x198;
  readData(&unk_b98787b, base, current);
  current = ptr + 0x19c;
  readData(&uRagdollDegrade, base, current);
  ptr += 0x1a0;
}
