/**
 * Definition: te47cc1cb
 * Hash: e47cc1cb
 */

#include "te47cc1cb.h"

void te47cc1cb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoTrackedReward, base, current);
  ptr += 0x20;
}
