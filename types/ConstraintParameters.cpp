/**
 * Definition: ConstraintParameters
 * Hash: e45cfe59
 */

#include "ConstraintParameters.h"

void ConstraintParameters::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwHash, base, current);
  current = ptr + 0x4;
  readData(&dwHashPadding, base, current);
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&eType, base, current);
  current = ptr + 0x10;
  readData(&nBone1, base, current);
  current = ptr + 0x14;
  readData(&nBone2, base, current);
  current = ptr + 0x18;
  readData(&localFrame1, base, current);
  current = ptr + 0x34;
  readData(&localFrame2, base, current);
  current = ptr + 0x50;
  readData(&flRevoluteAngleLow, base, current);
  current = ptr + 0x54;
  readData(&flRevoluteAngleHigh, base, current);
  current = ptr + 0x58;
  readData(&flRagdollConeAngle, base, current);
  current = ptr + 0x5c;
  readData(&flRagdollTwistLow, base, current);
  current = ptr + 0x60;
  readData(&flRagdollTwistHigh, base, current);
  current = ptr + 0x64;
  readData(&unk_9d701d6, base, current);
  current = ptr + 0x68;
  readData(&flFriction, base, current);
  current = ptr + 0x6c;
  readData(&flCompliance, base, current);
  current = ptr + 0x70;
  readData(&flAngularFrequencyHz, base, current);
  current = ptr + 0x74;
  readData(&flAngularDampingRatio, base, current);
  current = ptr + 0x78;
  readData(&flLinearFrequencyHz, base, current);
  current = ptr + 0x7c;
  readData(&flLinearDampingRatio, base, current);
  current = ptr + 0x80;
  readData(&unk_66d7e12, base, current);
  current = ptr + 0x84;
  readData(&flDuration, base, current);
  current = ptr + 0x88;
  readData(&unk_cfbfec2, base, current);
  current = ptr + 0x8c;
  readData(&unk_90c920e, base, current);
  current = ptr + 0x94;
  readData(&unk_dda1950, base, current);
  current = ptr + 0x98;
  readData(&unk_b560f81, base, current);
  current = ptr + 0xa8;
  readData(&unk_3641a59, base, current);
  current = ptr + 0xac;
  readData(&unk_5cad7b9, base, current);
  ptr += 0xb0;
}
