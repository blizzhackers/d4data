/**
 * Definition: LightInstanceData
 * Hash: b86f8607
 */

#include "LightInstanceData.h"

void LightInstanceData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x4;
  readData(&dwFlags, base, current);
  current = ptr + 0x8;
  readData(&unk_c96f544, base, current);
  current = ptr + 0xc;
  readData(&unk_cf4734d, base, current);
  current = ptr + 0x10;
  readData(&unk_56127ed, base, current);
  current = ptr + 0x18;
  readData(&tMatTexProjected, base, current);
  current = ptr + 0x40;
  readData(&tStateA, base, current);
  current = ptr + 0x320;
  readData(&unk_3dc76e8, base, current);
  current = ptr + 0x328;
  readData(&fFirstTexels, base, current);
  current = ptr + 0x330;
  readData(&unk_b2d1b35, base, current);
  current = ptr + 0x334;
  readData(&unk_da73b5e, base, current);
  current = ptr + 0x33c;
  readData(&unk_159b591, base, current);
  current = ptr + 0x340;
  readData(&unk_cdd937c, base, current);
  current = ptr + 0x344;
  readData(&unk_6b1c15, base, current);
  current = ptr + 0x348;
  readData(&unk_303bee, base, current);
  current = ptr + 0x34c;
  readData(&unk_c4c66d5, base, current);
  current = ptr + 0x350;
  readData(&unk_ff1fcfe, base, current);
  current = ptr + 0x354;
  readData(&nSystemDuration, base, current);
  current = ptr + 0x358;
  readData(&flOutroDuration, base, current);
  current = ptr + 0x35c;
  readData(&tSystemDurationScalar, base, current);
  ptr += 0x380;
}
