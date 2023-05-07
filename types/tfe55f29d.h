/**
 * Definition: tfe55f29d
 * Hash: fe55f29d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct tfe55f29d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annPlayer;
  DT_FLOAT flTetherRadius;
  SharedServerWorldPlace wpTetherPoint;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
