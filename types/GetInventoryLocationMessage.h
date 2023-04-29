/**
 * Definition: GetInventoryLocationMessage
 * Hash: b8d6792c
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"
#include "tf5ac91bb.h"

#pragma push(pack, 1)

struct GetInventoryLocationMessage : public ComplexRead {
  t72bd65f8 tHeader;
  tf5ac91bb tItemId;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
