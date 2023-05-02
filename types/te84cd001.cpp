/**
 * Definition: te84cd001
 * Hash: e84cd001
 */

#include "te84cd001.h"

void te84cd001::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flTime, base, current);
  current = ptr + 0x4;
  readData(&qRot, base, current);
  ptr += 0x14;
}
