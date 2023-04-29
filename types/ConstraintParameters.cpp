/**
 * Definition: ConstraintParameters
 * Hash: e45cfe59
 */

#include "ConstraintParameters.h"

void ConstraintParameters::read(const char* base, char* &ptr) {
  readData(&dwHash, base, ptr);
  readData(&dwHashPadding, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&eType, base, ptr);
  readData(&nBone1, base, ptr);
  readData(&nBone2, base, ptr);
  readData(&localFrame1, base, ptr);
  readData(&localFrame2, base, ptr);
  readData(&flRevoluteAngleLow, base, ptr);
  readData(&flRevoluteAngleHigh, base, ptr);
  readData(&flRagdollConeAngle, base, ptr);
  readData(&flRagdollTwistLow, base, ptr);
  readData(&flRagdollTwistHigh, base, ptr);
  readData(&unk_9d701d6, base, ptr);
  readData(&flFriction, base, ptr);
  readData(&flCompliance, base, ptr);
  readData(&flAngularFrequencyHz, base, ptr);
  readData(&flAngularDampingRatio, base, ptr);
  readData(&flLinearFrequencyHz, base, ptr);
  readData(&flLinearDampingRatio, base, ptr);
  readData(&unk_66d7e12, base, ptr);
  readData(&flDuration, base, ptr);
  readData(&unk_cfbfec2, base, ptr);
  readData(&unk_90c920e, base, ptr);
  readData(&unk_dda1950, base, ptr);
  readData(&unk_b560f81, base, ptr);
  readData(&unk_3641a59, base, ptr);
  readData(&unk_5cad7b9, base, ptr);
}
