/**
 * Definition: t388eeedc
 * Hash: 388eeedc
 */

#include "t388eeedc.h"

void t388eeedc::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&gbidHelpCode, base, ptr);
}
