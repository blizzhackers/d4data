/**
 * Definition: DemonScrollReward
 * Hash: d060d1c7
 */

#include "DemonScrollReward.h"

void DemonScrollReward::read(const char* base, char* &ptr) {
  readData(&arItems, base, ptr);
}
