/**
 * Definition: t13006658
 * Hash: 13006658
 */

#include "t13006658.h"

void t13006658::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_8ab7180, base, ptr);
}
