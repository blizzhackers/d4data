/**
 * Definition: tef480d59
 * Hash: ef480d59
 */

#include "tef480d59.h"

void tef480d59::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&sampleIndex, base, ptr);
}
