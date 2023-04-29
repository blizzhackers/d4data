/**
 * Definition: t1769c269
 * Hash: 1769c269
 */

#pragma once

#include "../types.h"
#include "ClanLabel.h"
#include "IconScale.h"
#include "t1259dca8.h"
#include "t5f766a3.h"
#include "t6f9c1887.h"
#include "t762bcac4.h"
#include "taa55cd98.h"
#include "tb9817bff.h"
#include "tb987c332.h"
#include "te94af135.h"
#include "tedab1b66.h"
#include "tfc41276e.h"

#pragma push(pack, 1)

struct t1769c269 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<ClanLabel> arLabels;
  DT_VARIABLEARRAY<t762bcac4> arBannerShapes;
  DT_VARIABLEARRAY<t762bcac4> unk_dcd9083;
  DT_VARIABLEARRAY<tedab1b66> unk_c1b3e76;
  DT_VARIABLEARRAY<t762bcac4> unk_5055c2d;
  DT_VARIABLEARRAY<tb987c332> unk_aed7782;
  DT_VARIABLEARRAY<tb9817bff> arIcons;
  DT_VARIABLEARRAY<te94af135> arColors;
  DT_VARIABLEARRAY<tfc41276e> unk_fcfa894;
  DT_VARIABLEARRAY<t6f9c1887> unk_28158ed;
  DT_VARIABLEARRAY<t5f766a3> unk_a8d4641;
  taa55cd98 unk_38a6145;
  t1259dca8 unk_109949c;
  IconScale tIconScale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
