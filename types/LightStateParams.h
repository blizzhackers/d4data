/**
 * Definition: LightStateParams
 * Hash: 3f128f1d
 */

#pragma once

#include "../types.h"
#include "VectorPath.h"
#include "t560ae4cf.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct LightStateParams : public ComplexRead {
  tcbfdd2ea pathRadius;
  tcbfdd2ea unk_9e9e1c6;
  tcbfdd2ea unk_d2a3cb0;
  tcbfdd2ea unk_1ee68c6;
  tcbfdd2ea unk_500fe1e;
  tcbfdd2ea unk_5c0c2ed;
  tcbfdd2ea pathHotspot;
  tcbfdd2ea pathFalloff;
  t560ae4cf pathColor;
  tcbfdd2ea pathIntensity;
  DT_FLOAT unk_6634e3c;
  DT_FLOAT unk_114300f;
  tcbfdd2ea unk_5803b69;
  tcbfdd2ea unk_f7a3d1a;
  VectorPath unk_4d46106;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
