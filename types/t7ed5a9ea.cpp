/**
 * Definition: t7ed5a9ea
 * Hash: 7ed5a9ea
 */

#include "t7ed5a9ea.h"

void t7ed5a9ea::read(const char* base, char* &ptr) {
  readData(&tMarkerHandle, base, ptr);
  readData(&snoWorldState, base, ptr);
  readData(&nValue, base, ptr);
  readData(&snoScene, base, ptr);
}
