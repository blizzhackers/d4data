/**
 * Definition: tab8347fa
 * Hash: ab8347fa
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tab8347fa : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_SNO<SnoGroup::Observer> snoObserver;
  DT_ENUM<DT_INT> eRenderContext;
  DT_INT bRotationEnabled;
  DT_INT unk_e5fad63;
  DT_INT unk_315b2df;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
