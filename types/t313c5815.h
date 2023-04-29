/**
 * Definition: t313c5815
 * Hash: 313c5815
 */

#pragma once

#include "../types.h"
#include "t53844691.h"
#include "td6dab54d.h"

#pragma push(pack, 1)

struct t313c5815 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<td6dab54d> unk_ce10c35;
  DT_VARIABLEARRAY<DT_BYTE> unk_43081cf;
  DT_VARIABLEARRAY<t53844691> unk_cd7797a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
