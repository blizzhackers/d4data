/**
 * Definition: te47cc1cb
 * Hash: e47cc1cb
 */

#include "te47cc1cb.h"

void te47cc1cb::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoTrackedReward, base, ptr);
}
