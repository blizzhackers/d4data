/**
 * Definition: ConstraintParameters
 * Hash: e45cfe59
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "bcQuat.h"

#pragma push(pack, 1)

struct ConstraintParameters : public ComplexRead {
  DT_UINT dwHash;
  DT_UINT dwHashPadding;
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> eType;
  DT_INT nBone1;
  DT_INT nBone2;
  PRTransform localFrame1;
  PRTransform localFrame2;
  DT_FLOAT flRevoluteAngleLow;
  DT_FLOAT flRevoluteAngleHigh;
  DT_FLOAT flRagdollConeAngle;
  DT_FLOAT flRagdollTwistLow;
  DT_FLOAT flRagdollTwistHigh;
  DT_INT unk_9d701d6;
  DT_FLOAT flFriction;
  DT_FLOAT flCompliance;
  DT_FLOAT flAngularFrequencyHz;
  DT_FLOAT flAngularDampingRatio;
  DT_FLOAT flLinearFrequencyHz;
  DT_FLOAT flLinearDampingRatio;
  DT_INT unk_66d7e12;
  DT_FLOAT flDuration;
  DT_FLOAT unk_cfbfec2;
  DT_RANGE<DT_INT> unk_90c920e;
  DT_INT unk_dda1950;
  bcQuat unk_b560f81;
  DT_SNO<SnoGroup::Particle> unk_3641a59;
  DT_FLOAT unk_5cad7b9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
