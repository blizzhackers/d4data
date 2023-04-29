/**
 * Definition: tc4c18214
 * Hash: c4c18214
 */

#include "tc4c18214.h"

void tc4c18214::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&szCheat, base, ptr);
  readData(&unk_d57d005, base, ptr);
}
