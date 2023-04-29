/**
 * Definition: te6b22340
 * Hash: e6b22340
 */

#include "te6b22340.h"

void te6b22340::read(const char* base, char* &ptr) {
  readData(&unk_ea28b4c, base, ptr);
  readData(&unk_f2499b0, base, ptr);
  readData(&unk_755f012, base, ptr);
  readData(&tHorizontalOffset, base, ptr);
  readData(&tScale, base, ptr);
  readData(&tYaw, base, ptr);
  readData(&unk_609e23d, base, ptr);
  readData(&unk_d8fcfe4, base, ptr);
  readData(&unk_435bdfd, base, ptr);
  readData(&unk_f2dbd17, base, ptr);
  readData(&tVerticalOffset, base, ptr);
  readData(&unk_2a8c4b6, base, ptr);
}
