/**
 * Definition: t41ad8904
 * Hash: 41ad8904
 */

#include "t41ad8904.h"

void t41ad8904::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_d3be7ce, base, ptr);
}
