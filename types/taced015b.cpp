/**
 * Definition: taced015b
 * Hash: aced015b
 */

#include "taced015b.h"

void taced015b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&vGravity, base, current);
  current = ptr + 0xc;
  readData(&unk_efb7a0f, base, current);
  current = ptr + 0x10;
  readData(&unk_cc27d12, base, current);
  current = ptr + 0x1c;
  readData(&unk_92fd45, base, current);
  current = ptr + 0x20;
  readData(&ptInvTransform, base, current);
  current = ptr + 0x30;
  readData(&boneIndex, base, current);
  current = ptr + 0x34;
  readData(&nIterations, base, current);
  current = ptr + 0x38;
  readData(&unk_88a73dd, base, current);
  current = ptr + 0x3c;
  readData(&unk_3313228, base, current);
  current = ptr + 0x40;
  readData(&flStretchingStiffness, base, current);
  current = ptr + 0x44;
  readData(&flHorizontalStiffness, base, current);
  current = ptr + 0x48;
  readData(&unk_2c91cda, base, current);
  current = ptr + 0x4c;
  readData(&flBendingStiffness, base, current);
  current = ptr + 0x50;
  readData(&flExplosionFactor, base, current);
  current = ptr + 0x54;
  readData(&unk_384c4a5, base, current);
  current = ptr + 0x58;
  readData(&flImpulseFactor, base, current);
  current = ptr + 0x5c;
  readData(&flWindFactor, base, current);
  current = ptr + 0x60;
  readData(&unk_e4950cf, base, current);
  current = ptr + 0x64;
  readData(&unk_c3c1f00, base, current);
  current = ptr + 0x68;
  readData(&unk_a7a8c51, base, current);
  current = ptr + 0x6c;
  readData(&unk_dc192ce, base, current);
  current = ptr + 0x70;
  readData(&unk_a876598, base, current);
  current = ptr + 0x74;
  readData(&unk_8d8e19c, base, current);
  current = ptr + 0x78;
  readData(&unk_f0ffa30, base, current);
  current = ptr + 0x7c;
  readData(&unk_914f7cd, base, current);
  current = ptr + 0x80;
  readData(&unk_b5ff484, base, current);
  current = ptr + 0x84;
  readData(&unk_55daa16, base, current);
  current = ptr + 0x88;
  readData(&unk_602c192, base, current);
  current = ptr + 0x8c;
  readData(&flDensity, base, current);
  current = ptr + 0x90;
  readData(&unk_797e898, base, current);
  current = ptr + 0x94;
  readData(&fFlatten, base, current);
  current = ptr + 0x98;
  readData(&unk_1e00090, base, current);
  current = ptr + 0x9c;
  readData(&fIsStatic, base, current);
  current = ptr + 0xa0;
  readData(&unk_cb063a7, base, current);
  current = ptr + 0xa4;
  readData(&unk_73a63cf, base, current);
  current = ptr + 0xa8;
  readData(&unk_9c39320, base, current);
  current = ptr + 0xac;
  readData(&unk_8b34e8f, base, current);
  current = ptr + 0xb0;
  readData(&unk_c65462b, base, current);
  current = ptr + 0xb4;
  readData(&unk_c65462c, base, current);
  ptr += 0xb8;
}
