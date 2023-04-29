/**
 * Definition: PRTransformMessage
 * Hash: 29a95f43
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PRTransformMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  PRTransform tTransform;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
