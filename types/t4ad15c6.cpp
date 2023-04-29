/**
 * Definition: t4ad15c6
 * Hash: 4ad15c6
 */

#include "t4ad15c6.h"

void t4ad15c6::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_f898967, base, ptr);
}
