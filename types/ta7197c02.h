/**
 * Definition: ta7197c02
 * Hash: a7197c02
 */

#pragma once

#include "../types.h"
#include "t525de28e.h"

#pragma push(pack, 1)

struct ta7197c02 : public ComplexRead {
  DT_INT unk_7e913e4;
  DT_SNO<SnoGroup::Quest> unk_fec1a8e;
  DT_UINT unk_99110e9;
  DT_VARIABLEARRAY<t525de28e> unk_490df55;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
