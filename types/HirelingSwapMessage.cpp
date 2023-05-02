/**
 * Definition: HirelingSwapMessage
 * Hash: 4fe52792
 */

#include "HirelingSwapMessage.h"

void HirelingSwapMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eNewClass, base, current);
  ptr += 0x14;
}
