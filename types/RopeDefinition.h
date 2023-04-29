/**
 * Definition: RopeDefinition
 * Hash: 31ddbbff
 */

#pragma once

#include "../types.h"
#include "InterpolationScalar.h"
#include "MsgTriggeredEvent.h"
#include "VectorPath.h"
#include "t560ae4cf.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct RopeDefinition : public ComplexRead {
  DT_UINT dwRopeFlags;
  DT_INT nWidth;
  DT_INT unk_d5039e2;
  DT_FLOAT unk_5be6305;
  DT_FLOAT flLength;
  DT_FLOAT flMass;
  DT_FLOAT flMassTaperFactor;
  DT_FLOAT flMassEnd;
  DT_FLOAT fTextureRepeatCount;
  DT_ENUM<DT_INT> unk_7a4a8e6;
  DT_INT unk_faa043c;
  DT_FLOAT unk_daaa964;
  DT_FLOAT flStiffness;
  tcbfdd2ea unk_e590d3c;
  tcbfdd2ea unk_24547d4;
  DT_SNO<SnoGroup::Material> snoMaterial;
  DT_SNO<SnoGroup::Physics> snoPhysics;
  DT_FLOAT flWindFactor;
  DT_RANGE<DT_INT> unk_cc2f90c;
  InterpolationScalar tSystemDurationScalar;
  DT_FLOAT flOutroDuration;
  t560ae4cf pathColorOverTime;
  t560ae4cf pathColorOverLength;
  tcbfdd2ea pathAlpha;
  tcbfdd2ea pathAlphaOverLength;
  tcbfdd2ea unk_ab00250;
  tcbfdd2ea unk_3c8d383;
  tcbfdd2ea unk_d96e4e6;
  tcbfdd2ea unk_bf2b399;
  tcbfdd2ea unk_abcab5e;
  tcbfdd2ea unk_9a3f811;
  tcbfdd2ea unk_3a6dc3c;
  tcbfdd2ea unk_5ddd86f;
  tcbfdd2ea pathWidthOverTime;
  tcbfdd2ea pathWidthOverLength;
  tcbfdd2ea pathSourcePointWorldUpMotion;
  tcbfdd2ea pathSourcePointAlongRopeMotion;
  tcbfdd2ea pathSourcePointPerpendicularMotion;
  tcbfdd2ea unk_fd2b7ac;
  tcbfdd2ea pathDestPointWorldUpMotion;
  tcbfdd2ea pathDestPointAlongRopeMotion;
  tcbfdd2ea pathDestPointPerpendicularMotion;
  tcbfdd2ea pathSeparation;
  tcbfdd2ea pathXAmpOverLength;
  tcbfdd2ea pathYAmpOverLength;
  tcbfdd2ea hUI_Dye;
  tcbfdd2ea unk_3e97148;
  tcbfdd2ea pathFreqOverTime;
  tcbfdd2ea pathPhaseSpeedOverTime;
  DT_RANGE<DT_INT> unk_e85eb5;
  DT_RANGE<DT_INT> unk_f7381a2;
  DT_RANGE<DT_INT> unk_bc10ec1;
  tcbfdd2ea unk_6a3b8c1;
  tcbfdd2ea unk_a74800e;
  DT_RANGE<DT_INT> unk_a85b95c;
  DT_RANGE<DT_INT> unk_910dc49;
  DT_RANGE<DT_INT> unk_fa52de8;
  tcbfdd2ea unk_c44c7c8;
  tcbfdd2ea unk_4a82155;
  DT_INT unk_340e1fe;
  DT_RANGE<DT_INT> unk_93baab;
  tcbfdd2ea unk_9979296;
  VectorPath unk_5a2a13a;
  VectorPath unk_1d019ab;
  DT_VARIABLEARRAY<MsgTriggeredEvent> ptMsgTriggeredEvents;
  DT_UINT dwMaxSystems;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
