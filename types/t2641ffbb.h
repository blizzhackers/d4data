/**
 * Definition: t2641ffbb
 * Hash: 2641ffbb
 */

#pragma once

#include "../types.h"
#include "UIControlStyle.h"
#include "t1c5ecda5.h"
#include "t2641ffbb.h"

#pragma push(pack, 1)

struct t2641ffbb : public ComplexRead {
  DT_CSTRING szName;
  DT_POLYMORPHIC_VARIABLEARRAY ptInlineStyle;
  DT_VARIABLEARRAY<t2641ffbb> arChildren;
  DT_VARIABLEARRAY<t1c5ecda5> unk_1cb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
