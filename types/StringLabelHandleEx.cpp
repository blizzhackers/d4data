/**
 * Definition: StringLabelHandleEx
 * Hash: 2b0285c0
 */

#include "StringLabelHandleEx.h"

void StringLabelHandleEx::read(const char* base, char* &ptr) {
  readData(&snoStringList, base, ptr);
  readData(&szLabel, base, ptr);
}
