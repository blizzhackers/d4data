/**
 * Definition: t392b5d0d
 * Hash: 392b5d0d
 */

#pragma once

#include "../types.h"
#include "tad008e7e.h"
#include "tf5ac91bb.h"

#pragma push(pack, 1)

struct t392b5d0d : public ComplexRead {
  tad008e7e tHeader;
  tf5ac91bb tItemId;
  DT_ACD_NETWORK_NAME ann;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
