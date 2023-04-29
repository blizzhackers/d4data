/**
 * Definition: tac4e7ea7
 * Hash: ac4e7ea7
 */

#include "tac4e7ea7.h"

void tac4e7ea7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
  readData(&unk_c8d49ac, base, ptr);
}
