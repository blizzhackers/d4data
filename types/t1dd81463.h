/**
 * Definition: t1dd81463
 * Hash: 1dd81463
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1dd81463 : public ComplexRead {
  DT_CSTRING unk_ef323d8;
  DT_ENUM<DT_INT> unk_ec775f9;
  DT_ENUM<DT_INT> unk_8c498b5;
  DT_ENUM<DT_INT> unk_1028ede;
  DT_CSTRING unk_ccd9967;
  DT_CSTRING unk_a2157e8;
  DT_CSTRING szOnController;
  DT_CSTRING unk_587374f;
  DT_CSTRING unk_42b05a7;
  DT_INT unk_e0c6a45;
  DT_FLOAT unk_9a8825c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
