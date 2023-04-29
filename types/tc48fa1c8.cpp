/**
 * Definition: tc48fa1c8
 * Hash: c48fa1c8
 */

#include "tc48fa1c8.h"

void tc48fa1c8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_cf3ce, base, ptr);
  readData(&unk_bbc67ad, base, ptr);
  readData(&unk_3ef8e38, base, ptr);
  readData(&ptNextNode, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&szComment, base, ptr);
  readData(&arChildNodes, base, ptr);
  readData(&snoCondition, base, ptr);
  readData(&unk_d8bf9e4, base, ptr);
  readData(&dwWeight, base, ptr);
}
