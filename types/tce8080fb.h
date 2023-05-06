/**
 * Definition: tce8080fb
 * Hash: ce8080fb
 */

#pragma once

#include "../types.h"
#include "GizmoConditionData.h"
#include "t104e4efd.h"
#include "t1121a259.h"
#include "t23a7215d.h"
#include "t2d410740.h"
#include "t478eb43b.h"
#include "t4ddd8603.h"
#include "t6f3d2867.h"
#include "t7324c6f7.h"
#include "t7b11e164.h"
#include "t8d3deb43.h"
#include "t8ecad956.h"
#include "ta967fc2.h"
#include "tb2ef091a.h"
#include "tbf0c5b22.h"
#include "tc542fab4.h"
#include "te3f5648a.h"
#include "te6346255.h"

#pragma push(pack, 1)

struct tce8080fb : public ComplexRead {
  DT_VARIABLEARRAY<t8ecad956> unk_20bda58;
  DT_VARIABLEARRAY<t6f3d2867> unk_fb42747;
  DT_VARIABLEARRAY<tbf0c5b22> unk_70d0dc0;
  DT_VARIABLEARRAY<t2d410740> unk_ac84ca4;
  DT_VARIABLEARRAY<t4ddd8603> unk_b64cb67;
  DT_VARIABLEARRAY<tb2ef091a> unk_83131fe;
  DT_VARIABLEARRAY<t1121a259> unk_c82c39b;
  DT_VARIABLEARRAY<te6346255> unk_f48a504;
  DT_VARIABLEARRAY<tc542fab4> unk_cc84436;
  DT_VARIABLEARRAY<t7b11e164> unk_f441be6;
  DT_VARIABLEARRAY<t478eb43b> unk_542a67d;
  DT_POLYMORPHIC_VARIABLEARRAY ptProxData;
  DT_VARIABLEARRAY<t8d3deb43> unk_604a84d;
  DT_VARIABLEARRAY<GizmoConditionData> ptGizmoConditionData;
  DT_VARIABLEARRAY<t23a7215d> unk_b15bdc1;
  DT_VARIABLEARRAY<t7324c6f7> unk_ebfdb39;
  DT_VARIABLEARRAY<t104e4efd> unk_e4c00ff;
  DT_VARIABLEARRAY<ta967fc2> unk_5100a84;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
