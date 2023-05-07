/**
 * Definition: tf74028c3
 * Hash: f74028c3
 */

#pragma once

#include "../types.h"
#include "ValidComponent.h"
#include "t9bdeeb8c.h"

#pragma push(pack, 1)

struct tf74028c3 : public ComplexRead {
  t9bdeeb8c unk_a253b80;
  DT_FIXEDARRAY<ValidComponent, 4> ptComponents;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
