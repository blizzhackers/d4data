/**
 * Definition: t791899bb
 * Hash: 791899bb
 */

#include "t791899bb.h"

void t791899bb::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tPhaseName, base, ptr);
  readData(&unk_fcb7313, base, ptr);
  readData(&unk_d0d932b, base, ptr);
  readData(&unk_9a8200e, base, ptr);
}
