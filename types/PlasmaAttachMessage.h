/**
 * Definition: PlasmaAttachMessage
 * Hash: 3c4ca2b8
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlasmaAttachMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annPlasma;
  DT_ACD_NETWORK_NAME annAttachTo;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
