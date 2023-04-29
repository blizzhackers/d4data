/**
 * Definition: tb11adc69
 * Hash: b11adc69
 */

#include "tb11adc69.h"

void tb11adc69::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
