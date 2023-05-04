/**
 * Definition: ta5b84815
 * Hash: a5b84815
 */

#pragma once

#include "../types.h"
#include "t2bdcb856.h"
#include "t4d7ce083.h"
#include "t679c5c9d.h"
#include "tb5a98293.h"
#include "tce8080fb.h"
#include "ted096762.h"

#pragma push(pack, 1)

struct ta5b84815 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_UINT szLookName;
  DT_UINT unk_6c0cb90;
  DT_UINT unk_d897a3;
  DT_ENUM<DT_INT> unk_f116b76;
  DT_INT nFadeGroup;
  DT_ENUM<DT_INT> unk_d094b9a;
  DT_ENUM<DT_INT> unk_529dc44;
  DT_ENUM<DT_INT> eActorType;
  DT_ENUM<DT_INT> eGizmoType;
  DT_ENUM<DT_INT> unk_940ff8e;
  DT_VARIABLEARRAY<tb5a98293> ptServerData;
  DT_VARIABLEARRAY<t679c5c9d> ptMonsterActorData;
  DT_VARIABLEARRAY<tce8080fb> unk_9e1a23d;
  DT_VARIABLEARRAY<t2bdcb856> unk_6a0a118;
  DT_VARIABLEARRAY<ted096762> unk_df84c5d;
  DT_ENUM<DT_INT> unk_ff96acb;
  DT_VARIABLEARRAY<t4d7ce083> unk_b0425e7;
  DT_INT unk_c627b16;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
