/**
 * Definition: FloatingAmountMessage
 * Hash: 9c8bc46d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct FloatingAmountMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  SharedServerWorldPlace wpPlace;
  DT_INT64 uAmount;
  DT_ENUM<DT_INT> eType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
