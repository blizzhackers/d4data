/**
 * Definition: UIDialogDefinition
 * Hash: ba2ee837
 */

#pragma once

#include "../types.h"
#include "t2641ffbb.h"
#include "td8a9e2b7.h"

#pragma push(pack, 1)

struct UIDialogDefinition : public ComplexRead {
  t2641ffbb unk_d01dfb6;
  DT_VARIABLEARRAY<t2641ffbb> unk_73efac3;
  DT_VARIABLEARRAY<td8a9e2b7> ptStyles;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
