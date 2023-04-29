/**
 * Definition: t46c720bc
 * Hash: 46c720bc
 */

#include "t46c720bc.h"

void t46c720bc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
}
