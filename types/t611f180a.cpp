/**
 * Definition: t611f180a
 * Hash: 611f180a
 */

#include "t611f180a.h"

void t611f180a::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoPower, base, ptr);
}
