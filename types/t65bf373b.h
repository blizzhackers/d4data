/**
 * Definition: t65bf373b
 * Hash: 65bf373b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t65bf373b : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nNewLevel;
  DT_INT nMaxLevel;
  DT_SNO<SnoGroup::Item> snoItem;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
