/**
 * Definition: HirelingSwapMessage
 * Hash: 4fe52792
 */

#include "HirelingSwapMessage.h"

void HirelingSwapMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eNewClass, base, ptr);
}
