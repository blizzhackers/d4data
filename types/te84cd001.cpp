/**
 * Definition: te84cd001
 * Hash: e84cd001
 */

#include "te84cd001.h"

void te84cd001::read(const char* base, char* &ptr) {
  readData(&flTime, base, ptr);
  readData(&qRot, base, ptr);
}
