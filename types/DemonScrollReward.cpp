/**
 * Definition: DemonScrollReward
 * Hash: d060d1c7
 */

#include "DemonScrollReward.h"

void DemonScrollReward::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arItems, base, current);
  ptr += 0x6c;
}
