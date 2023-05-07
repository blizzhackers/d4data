/**
 * Definition: TrailDefinition
 * Hash: 2503d585
 */

#pragma once

#include "../types.h"
#include "InterpolationScalar.h"
#include "VectorPath.h"
#include "t560ae4cf.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct TrailDefinition : public ComplexRead {
  DT_UINT dwTrailDefFlags;
  DT_FLOAT flBaseWidth;
  DT_FLOAT fTextureRepeatCount;
  DT_INT unk_faa043c;
  DT_INT unk_d9e290a;
  DT_RANGE<DT_INT> unk_f9b11df;
  DT_RANGE<DT_INT> unk_5080063;
  DT_RANGE<DT_INT> unk_cc2f90c;
  InterpolationScalar tSystemDurationScalar;
  InterpolationScalar unk_87a5aac;
  InterpolationScalar unk_56f9ba8;
  DT_FLOAT flOutroDuration;
  t560ae4cf pathColorOverTime;
  t560ae4cf pathColorOverLength;
  tcbfdd2ea pathAlpha;
  tcbfdd2ea pathAlphaOverLength;
  tcbfdd2ea unk_ab00250;
  tcbfdd2ea unk_3c8d383;
  tcbfdd2ea unk_bf2b399;
  tcbfdd2ea unk_abcab5e;
  tcbfdd2ea unk_9a3f811;
  tcbfdd2ea unk_3a6dc3c;
  tcbfdd2ea unk_5ddd86f;
  tcbfdd2ea unk_1078e20;
  tcbfdd2ea unk_e329353;
  VectorPath unk_a14a82f;
  VectorPath unk_eee6d22;
  VectorPath unk_d957f72;
  VectorPath unk_6022125;
  tcbfdd2ea unk_e8edd27;
  DT_ENUM<DT_INT> nTrailType;
  DT_ENUM<DT_INT> unk_1c8bb4c;
  DT_SNO<SnoGroup::Material> snoMaterial;
  DT_ENUM<DT_INT> unk_a9d103;
  DT_RANGE<DT_INT> unk_c0b6075;
  DT_RANGE<DT_INT> unk_a968362;
  DT_RANGE<DT_INT> unk_293081;
  tcbfdd2ea unk_e5a86e1;
  tcbfdd2ea unk_3e1462e;
  DT_UINT dwMaxSystems;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
