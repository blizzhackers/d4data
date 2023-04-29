/**
 * Definition: t25158c6
 * Hash: 25158c6
 */

#include "t25158c6.h"

void t25158c6::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoLevelArea, base, ptr);
}
