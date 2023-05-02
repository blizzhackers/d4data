/**
 * Definition: tf10f5cf2
 * Hash: f10f5cf2
 */

#include "tf10f5cf2.h"

void tf10f5cf2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&snoTrackedReward, base, current);
  ptr += 0x108;
}
