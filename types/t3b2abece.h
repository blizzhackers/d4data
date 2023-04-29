/**
 * Definition: t3b2abece
 * Hash: 3b2abece
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3b2abece : public ComplexRead {
  DT_UINT dwType;
  DT_FLOAT flTime;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::StoryBoard> snoStoryboard;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
