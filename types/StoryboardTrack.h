/**
 * Definition: StoryboardTrack
 * Hash: d27e6dde
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct StoryboardTrack : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
