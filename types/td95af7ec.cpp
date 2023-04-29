/**
 * Definition: td95af7ec
 * Hash: d95af7ec
 */

#include "td95af7ec.h"

void td95af7ec::read(const char* base, char* &ptr) {
  readData(&eVBFormat, base, ptr);
  readData(&unk_e91fb07, base, ptr);
  readData(&unk_62bfa18, base, ptr);
  readData(&unk_aea647a, base, ptr);
  readData(&wEid, base, ptr);
  readData(&unk_35f022, base, ptr);
  readData(&wAid, base, ptr);
  readData(&baid, base, ptr);
  readData(&unk_4c43adc, base, ptr);
}
