/**
 * Definition: t1769c269
 * Hash: 1769c269
 */

#include "t1769c269.h"

void t1769c269::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&arLabels, base, ptr);
  readData(&arBannerShapes, base, ptr);
  readData(&unk_dcd9083, base, ptr);
  readData(&unk_c1b3e76, base, ptr);
  readData(&unk_5055c2d, base, ptr);
  readData(&unk_aed7782, base, ptr);
  readData(&arIcons, base, ptr);
  readData(&arColors, base, ptr);
  readData(&unk_fcfa894, base, ptr);
  readData(&unk_28158ed, base, ptr);
  readData(&unk_a8d4641, base, ptr);
  readData(&unk_38a6145, base, ptr);
  readData(&unk_109949c, base, ptr);
  readData(&tIconScale, base, ptr);
}
