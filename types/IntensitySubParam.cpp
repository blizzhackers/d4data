/**
 * Definition: IntensitySubParam
 * Hash: dca4dec2
 */

#include "IntensitySubParam.h"

void IntensitySubParam::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x8;
  readData(&unk_465327d, base, current);
  ptr += 0x40;
}
