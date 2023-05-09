/**
 * Definition: EmitterDataBase
 * Hash: e05729ef
 */

#include "EmitterDataBase.h"

void EmitterDataBase::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
