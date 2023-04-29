/**
 * Definition: tb86f8607
 * Hash: b86f8607
 */

#include "tb86f8607.h"

void tb86f8607::read(const char* base, char* &ptr) {
  readData(&eType, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_c96f544, base, ptr);
  readData(&unk_cf4734d, base, ptr);
  readData(&unk_56127ed, base, ptr);
  readData(&tMatTexProjected, base, ptr);
  readData(&tStateA, base, ptr);
  readData(&unk_3dc76e8, base, ptr);
  readData(&unk_e5f4f23, base, ptr);
  readData(&unk_b2d1b35, base, ptr);
  readData(&unk_da73b5e, base, ptr);
  readData(&unk_159b591, base, ptr);
  readData(&unk_cdd937c, base, ptr);
  readData(&unk_6b1c15, base, ptr);
  readData(&unk_303bee, base, ptr);
  readData(&unk_c4c66d5, base, ptr);
  readData(&unk_ff1fcfe, base, ptr);
  readData(&nSystemDuration, base, ptr);
  readData(&flOutroDuration, base, ptr);
  readData(&tSystemDurationScalar, base, ptr);
}
