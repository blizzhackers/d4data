/**
 * Definition: tcc354444
 * Hash: cc354444
 */

#include "tcc354444.h"

void tcc354444::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x28;
  readData(&ptArrayNodes, base, current);
  ptr += 0x38;
}
