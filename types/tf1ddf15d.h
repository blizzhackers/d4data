/**
 * Definition: tf1ddf15d
 * Hash: f1ddf15d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "TraceMessage.h"

#pragma push(pack, 1)

struct tf1ddf15d : public ComplexRead {
  RequiredMessageHeader tHeader;
  TraceMessage unk_4c6a043;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
