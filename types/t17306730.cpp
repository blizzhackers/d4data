/**
 * Definition: t17306730
 * Hash: 17306730
 */

#include "t17306730.h"

void t17306730::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&szToolTip, base, ptr);
  readData(&snoAIBehavior, base, ptr);
  readData(&unk_cbd4b2c, base, ptr);
}
