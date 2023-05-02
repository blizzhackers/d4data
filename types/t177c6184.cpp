/**
 * Definition: t177c6184
 * Hash: 177c6184
 */

#include "t177c6184.h"

void t177c6184::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annPlayer, base, current);
  current = ptr + 0x18;
  readData(&unk_76098e5, base, current);
  current = ptr + 0x1c;
  readData(&unk_fa1aeb2, base, current);
  ptr += 0x24;
}
