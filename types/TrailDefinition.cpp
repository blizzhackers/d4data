/**
 * Definition: TrailDefinition
 * Hash: 2503d585
 */

#include "TrailDefinition.h"

void TrailDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwTrailDefFlags, base, ptr);
  readData(&unk_ad02fed, base, ptr);
  readData(&fTextureRepeatCount, base, ptr);
  readData(&unk_faa043c, base, ptr);
  readData(&unk_d9e290a, base, ptr);
  readData(&unk_f9b11df, base, ptr);
  readData(&unk_5080063, base, ptr);
  readData(&unk_cc2f90c, base, ptr);
  readData(&tSystemDurationScalar, base, ptr);
  readData(&unk_87a5aac, base, ptr);
  readData(&unk_56f9ba8, base, ptr);
  readData(&flOutroDuration, base, ptr);
  readData(&pathColorOverTime, base, ptr);
  readData(&pathColorOverLength, base, ptr);
  readData(&pathAlpha, base, ptr);
  readData(&pathAlphaOverLength, base, ptr);
  readData(&unk_ab00250, base, ptr);
  readData(&unk_3c8d383, base, ptr);
  readData(&unk_bf2b399, base, ptr);
  readData(&unk_abcab5e, base, ptr);
  readData(&unk_9a3f811, base, ptr);
  readData(&unk_3a6dc3c, base, ptr);
  readData(&unk_5ddd86f, base, ptr);
  readData(&unk_1078e20, base, ptr);
  readData(&unk_e329353, base, ptr);
  readData(&unk_a14a82f, base, ptr);
  readData(&unk_eee6d22, base, ptr);
  readData(&unk_d957f72, base, ptr);
  readData(&unk_6022125, base, ptr);
  readData(&unk_e8edd27, base, ptr);
  readData(&nTrailType, base, ptr);
  readData(&unk_1c8bb4c, base, ptr);
  readData(&snoMaterial, base, ptr);
  readData(&unk_a9d103, base, ptr);
  readData(&unk_c0b6075, base, ptr);
  readData(&unk_a968362, base, ptr);
  readData(&unk_293081, base, ptr);
  readData(&unk_e5a86e1, base, ptr);
  readData(&unk_3e1462e, base, ptr);
  readData(&dwMaxSystems, base, ptr);
}
