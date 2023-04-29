/**
 * Definition: SNOFileHeader
 * Hash: 694e46b9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SNOFileHeader : public ComplexRead {
  DT_UINT dwSignature;
  DT_UINT unk_7eba88;
  DT_UINT dwDummy;
  DT_UINT dwXMLHash;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
