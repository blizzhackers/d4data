/**
 * Definition: td4338bac
 * Hash: d4338bac
 */

#include "td4338bac.h"

void td4338bac::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&vPos, base, current);
  current = ptr + 0x24;
  readData(&qRot, base, current);
  current = ptr + 0x34;
  readData(&vVel, base, current);
  current = ptr + 0x40;
  readData(&unk_a25a877, base, current);
  current = ptr + 0x50;
  readData(&uMoveFlags, base, current);
  current = ptr + 0x58;
  readData(&unk_2a6bbab, base, current);
  current = ptr + 0x60;
  readData(&flSpeedMult, base, current);
  ptr += 0x68;
}
