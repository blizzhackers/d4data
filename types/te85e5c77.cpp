/**
 * Definition: te85e5c77
 * Hash: e85e5c77
 */

#include "te85e5c77.h"

void te85e5c77::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idQuest, base, ptr);
  readData(&unk_14e1214, base, ptr);
}
