/**
 * Definition: taced015b
 * Hash: aced015b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct taced015b : public ComplexRead {
  DT_VECTOR3D vGravity;
  DT_FLOAT unk_efb7a0f;
  DT_VECTOR3D unk_cc27d12;
  DT_FLOAT unk_92fd45;
  DT_VECTOR4D ptInvTransform;
  DT_WORD boneIndex;
  DT_INT nIterations;
  DT_FLOAT unk_88a73dd;
  DT_FLOAT unk_3313228;
  DT_FLOAT flStretchingStiffness;
  DT_FLOAT flHorizontalStiffness;
  DT_FLOAT unk_2c91cda;
  DT_FLOAT flBendingStiffness;
  DT_FLOAT flExplosionFactor;
  DT_FLOAT unk_384c4a5;
  DT_FLOAT flImpulseFactor;
  DT_FLOAT flWindFactor;
  DT_FLOAT unk_e4950cf;
  DT_FLOAT unk_c3c1f00;
  DT_FLOAT unk_a7a8c51;
  DT_FLOAT unk_dc192ce;
  DT_FLOAT unk_a876598;
  DT_FLOAT unk_8d8e19c;
  DT_FLOAT unk_f0ffa30;
  DT_FLOAT unk_914f7cd;
  DT_FLOAT unk_b5ff484;
  DT_FLOAT unk_55daa16;
  DT_FLOAT unk_602c192;
  DT_FLOAT flDensity;
  DT_FLOAT unk_797e898;
  DT_INT fFlatten;
  DT_INT unk_1e00090;
  DT_INT fIsStatic;
  DT_INT unk_cb063a7;
  DT_INT unk_73a63cf;
  DT_ENUM<DT_INT> unk_9c39320;
  DT_ENUM<DT_INT> unk_8b34e8f;
  DT_FLOAT unk_c65462b;
  DT_FLOAT unk_c65462c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
