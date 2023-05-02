/**
 * Definition: t993e31cf
 * Hash: 993e31cf
 */

#include "t993e31cf.h"

void t993e31cf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_461add4, base, current);
  current = ptr + 0x4;
  readData(&eFootstepType, base, current);
  ptr += 0x8;
}
