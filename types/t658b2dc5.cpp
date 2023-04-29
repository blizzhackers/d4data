/**
 * Definition: t658b2dc5
 * Hash: 658b2dc5
 */

#include "t658b2dc5.h"

void t658b2dc5::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwTimeStamp, base, ptr);
}
