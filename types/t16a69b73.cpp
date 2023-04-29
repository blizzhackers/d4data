/**
 * Definition: t16a69b73
 * Hash: 16a69b73
 */

#include "t16a69b73.h"

void t16a69b73::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&tSNOName, base, ptr);
  readData(&unk_68d2b86, base, ptr);
}
