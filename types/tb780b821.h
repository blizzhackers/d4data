/**
 * Definition: tb780b821
 * Hash: b780b821
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb780b821 : public ComplexRead {
  DT_CHARARRAY<80> szParamName;
  DT_CHARARRAY<80> unk_6a4e41b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
