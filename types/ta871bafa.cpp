/**
 * Definition: ta871bafa
 * Hash: a871bafa
 */

#include "ta871bafa.h"

void ta871bafa::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_77fbbf4, base, ptr);
  readData(&unk_29b00b2, base, ptr);
  readData(&unk_158fc1a, base, ptr);
  readData(&unk_b823428, base, ptr);
}
