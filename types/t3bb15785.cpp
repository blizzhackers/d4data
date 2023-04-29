/**
 * Definition: t3bb15785
 * Hash: 3bb15785
 */

#include "t3bb15785.h"

void t3bb15785::read(const char* base, char* &ptr) {
  readData(&snoLayer, base, ptr);
  readData(&tSettings, base, ptr);
}
