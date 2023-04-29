/**
 * Definition: tbe515d2a
 * Hash: be515d2a
 */

#include "tbe515d2a.h"

void tbe515d2a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
  readData(&snoStoryboard, base, ptr);
  readData(&unk_5f75855, base, ptr);
  readData(&unk_8c27446, base, ptr);
  readData(&unk_d07ad36, base, ptr);
  readData(&unk_92765af, base, ptr);
}
