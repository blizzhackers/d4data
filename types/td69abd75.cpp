/**
 * Definition: td69abd75
 * Hash: d69abd75
 */

#include "td69abd75.h"

void td69abd75::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwEnd, base, ptr);
  readData(&unk_42cd606, base, ptr);
}
