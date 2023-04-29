/**
 * Definition: EndOfTickMessage
 * Hash: e909bb9c
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct EndOfTickMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwTickEnding;
  DT_UINT dwTickNext;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
