/**
 * Definition: tf10f5cf2
 * Hash: f10f5cf2
 */

#include "tf10f5cf2.h"

void tf10f5cf2::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoTrackedReward, base, ptr);
}
