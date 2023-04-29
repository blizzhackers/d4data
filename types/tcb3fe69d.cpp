/**
 * Definition: tcb3fe69d
 * Hash: cb3fe69d
 */

#include "tcb3fe69d.h"

void tcb3fe69d::read(const char* base, char* &ptr) {
  readData(&fAlphaBlendEnable, base, ptr);
  readData(&eBlendOp, base, ptr);
  readData(&eSrcBlendFactor, base, ptr);
  readData(&eDestBlendFactor, base, ptr);
  readData(&unk_102510d, base, ptr);
  readData(&unk_d04248f, base, ptr);
  readData(&unk_d05eb97, base, ptr);
  readData(&unk_4011abf, base, ptr);
  readData(&unk_9920e8a, base, ptr);
  readData(&unk_f1d0b5f, base, ptr);
  readData(&unk_a5c387a, base, ptr);
  readData(&unk_968db19, base, ptr);
}
