/**
 * Definition: t514e1e36
 * Hash: 514e1e36
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t514e1e36 : public ComplexRead {
  DT_SNO<SnoGroup::Physics> snoPhysics;
  DT_SNO<SnoGroup::Physics> unk_49cf485;
  DT_ENUM<DT_INT> eMaterial;
  DT_FLOAT flExplosionFactor;
  DT_FLOAT flWindFactor;
  DT_FLOAT flPartialRagdollResponsiveness;
  DT_UINT unk_fdc1015;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
