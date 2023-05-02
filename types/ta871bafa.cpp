/**
 * Definition: ta871bafa
 * Hash: a871bafa
 */

#include "ta871bafa.h"

void ta871bafa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_77fbbf4, base, current);
  current = ptr + 0x18;
  readData(&unk_29b00b2, base, current);
  current = ptr + 0x28;
  readData(&unk_158fc1a, base, current);
  current = ptr + 0x2c;
  readData(&unk_b823428, base, current);
  ptr += 0x40;
}
