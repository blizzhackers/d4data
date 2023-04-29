/**
 * Definition: taced015b
 * Hash: aced015b
 */

#include "taced015b.h"

void taced015b::read(const char* base, char* &ptr) {
  readData(&vGravity, base, ptr);
  readData(&unk_efb7a0f, base, ptr);
  readData(&unk_cc27d12, base, ptr);
  readData(&unk_92fd45, base, ptr);
  readData(&ptInvTransform, base, ptr);
  readData(&boneIndex, base, ptr);
  readData(&nIterations, base, ptr);
  readData(&unk_88a73dd, base, ptr);
  readData(&unk_3313228, base, ptr);
  readData(&flStretchingStiffness, base, ptr);
  readData(&flHorizontalStiffness, base, ptr);
  readData(&unk_2c91cda, base, ptr);
  readData(&flBendingStiffness, base, ptr);
  readData(&flExplosionFactor, base, ptr);
  readData(&unk_384c4a5, base, ptr);
  readData(&flImpulseFactor, base, ptr);
  readData(&flWindFactor, base, ptr);
  readData(&unk_e4950cf, base, ptr);
  readData(&unk_c3c1f00, base, ptr);
  readData(&unk_a7a8c51, base, ptr);
  readData(&unk_dc192ce, base, ptr);
  readData(&unk_a876598, base, ptr);
  readData(&unk_8d8e19c, base, ptr);
  readData(&unk_f0ffa30, base, ptr);
  readData(&unk_914f7cd, base, ptr);
  readData(&unk_b5ff484, base, ptr);
  readData(&ptAttackersPerPlayerThrottlingThreshold, base, ptr);
  readData(&unk_602c192, base, ptr);
  readData(&flDensity, base, ptr);
  readData(&unk_797e898, base, ptr);
  readData(&fFlatten, base, ptr);
  readData(&unk_1e00090, base, ptr);
  readData(&unk_6ca780a, base, ptr);
  readData(&unk_cb063a7, base, ptr);
  readData(&unk_73a63cf, base, ptr);
  readData(&unk_9c39320, base, ptr);
  readData(&unk_8b34e8f, base, ptr);
  readData(&unk_c65462b, base, ptr);
  readData(&unk_c65462c, base, ptr);
}
