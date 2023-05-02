/**
 * Definition: TrailDefinition
 * Hash: 2503d585
 */

#include "TrailDefinition.h"

void TrailDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwTrailDefFlags, base, current);
  current = ptr + 0xc;
  readData(&unk_ad02fed, base, current);
  current = ptr + 0x10;
  readData(&fTextureRepeatCount, base, current);
  current = ptr + 0x14;
  readData(&unk_faa043c, base, current);
  current = ptr + 0x18;
  readData(&unk_d9e290a, base, current);
  current = ptr + 0x1c;
  readData(&unk_f9b11df, base, current);
  current = ptr + 0x24;
  readData(&unk_5080063, base, current);
  current = ptr + 0x2c;
  readData(&unk_cc2f90c, base, current);
  current = ptr + 0x34;
  readData(&tSystemDurationScalar, base, current);
  current = ptr + 0x54;
  readData(&unk_87a5aac, base, current);
  current = ptr + 0x74;
  readData(&unk_56f9ba8, base, current);
  current = ptr + 0x94;
  readData(&flOutroDuration, base, current);
  current = ptr + 0x98;
  readData(&pathColorOverTime, base, current);
  current = ptr + 0xd0;
  readData(&pathColorOverLength, base, current);
  current = ptr + 0x108;
  readData(&pathAlpha, base, current);
  current = ptr + 0x140;
  readData(&pathAlphaOverLength, base, current);
  current = ptr + 0x178;
  readData(&unk_ab00250, base, current);
  current = ptr + 0x1b0;
  readData(&unk_3c8d383, base, current);
  current = ptr + 0x1e8;
  readData(&unk_bf2b399, base, current);
  current = ptr + 0x220;
  readData(&unk_abcab5e, base, current);
  current = ptr + 0x258;
  readData(&unk_9a3f811, base, current);
  current = ptr + 0x290;
  readData(&unk_3a6dc3c, base, current);
  current = ptr + 0x2c8;
  readData(&unk_5ddd86f, base, current);
  current = ptr + 0x300;
  readData(&unk_1078e20, base, current);
  current = ptr + 0x338;
  readData(&unk_e329353, base, current);
  current = ptr + 0x370;
  readData(&unk_a14a82f, base, current);
  current = ptr + 0x3a8;
  readData(&unk_eee6d22, base, current);
  current = ptr + 0x3e0;
  readData(&unk_d957f72, base, current);
  current = ptr + 0x418;
  readData(&unk_6022125, base, current);
  current = ptr + 0x450;
  readData(&unk_e8edd27, base, current);
  current = ptr + 0x488;
  readData(&nTrailType, base, current);
  current = ptr + 0x48c;
  readData(&unk_1c8bb4c, base, current);
  current = ptr + 0x490;
  readData(&snoMaterial, base, current);
  current = ptr + 0x494;
  readData(&unk_a9d103, base, current);
  current = ptr + 0x498;
  readData(&unk_c0b6075, base, current);
  current = ptr + 0x4a0;
  readData(&unk_a968362, base, current);
  current = ptr + 0x4a8;
  readData(&unk_293081, base, current);
  current = ptr + 0x4b0;
  readData(&unk_e5a86e1, base, current);
  current = ptr + 0x4e8;
  readData(&unk_3e1462e, base, current);
  current = ptr + 0x520;
  readData(&dwMaxSystems, base, current);
  ptr += 0x528;
}
