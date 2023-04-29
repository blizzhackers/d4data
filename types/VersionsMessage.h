/**
 * Definition: VersionsMessage
 * Hash: 4de0473e
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct VersionsMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT uProtocolHash;
  DT_CHARARRAY<32> szBuildVer;
  DT_INT64 unk_b14990a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
