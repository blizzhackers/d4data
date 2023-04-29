/**
 * Definition: FlippyMessage
 * Hash: 8f1bec79
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct FlippyMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annLauncher;
  DT_SNO<SnoGroup::Particle> snoFlippyParticle;
  DT_SNO<SnoGroup::Actor> snoActorLoot;
  DT_VECTOR3D wpSource;
  DT_VECTOR3D wpDest;
  DT_INT unk_18f36c0;
  DT_ENUM<DT_INT> unk_c00b36a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
