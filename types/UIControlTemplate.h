/**
 * Definition: UIControlTemplate
 * Hash: 2641ffbb
 */

#pragma once

#include "../types.h"
#include "UIControlStyle.h"
#include "UIControlTemplate.h"
#include "t1c5ecda5.h"

#pragma push(pack, 1)

struct UIControlTemplate : public ComplexRead {
  DT_CSTRING szName;
  DT_POLYMORPHIC_VARIABLEARRAY ptInlineStyle;
  DT_VARIABLEARRAY<UIControlTemplate> arChildren;
  DT_VARIABLEARRAY<t1c5ecda5> unk_1cb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
