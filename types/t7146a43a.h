/**
 * Definition: t7146a43a
 * Hash: 7146a43a
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t7146a43a : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FLOAT unk_601d5c7;
  DT_UINT unk_1bdcc9f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
