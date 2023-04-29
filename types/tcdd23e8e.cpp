/**
 * Definition: tcdd23e8e
 * Hash: cdd23e8e
 */

#include "tcdd23e8e.h"

void tcdd23e8e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoSubzone, base, ptr);
}
