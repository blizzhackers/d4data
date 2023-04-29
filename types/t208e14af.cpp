/**
 * Definition: t208e14af
 * Hash: 208e14af
 */

#include "t208e14af.h"

void t208e14af::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nType, base, ptr);
  readData(&arParams, base, ptr);
  readData(&unk_7edc2dd, base, ptr);
}
