/**
 * Definition: tf10f5cf2
 * Hash: f10f5cf2
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct tf10f5cf2 : public ComplexRead {
  ta78f399f tHeader;
  DT_SNO<SnoGroup::TrackedReward> unk_3993993;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
