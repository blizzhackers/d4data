/**
 * Definition: td4338bac
 * Hash: d4338bac
 */

#include "td4338bac.h"

void td4338bac::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&vPos, base, ptr);
  readData(&qRot, base, ptr);
  readData(&vVel, base, ptr);
  readData(&unk_a25a877, base, ptr);
  readData(&uMoveFlags, base, ptr);
  readData(&unk_2a6bbab, base, ptr);
  readData(&flSpeedMult, base, ptr);
}
