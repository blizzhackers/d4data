/**
 * Definition: TexFrame
 * Hash: 171befc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TexFrame : public ComplexRead {
  DT_UINT hImageHandle;
  DT_FLOAT flU0;
  DT_FLOAT flV0;
  DT_FLOAT flU1;
  DT_FLOAT flV1;
  DT_FLOAT unk_8081ff3;
  DT_FLOAT unk_8082014;
  DT_FLOAT unk_8081ff4;
  DT_FLOAT unk_8082015;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
