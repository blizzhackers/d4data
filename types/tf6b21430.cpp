/**
 * Definition: tf6b21430
 * Hash: f6b21430
 */

#include "tf6b21430.h"

void tf6b21430::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c63f49e, base, current);
  current = ptr + 0x4;
  readData(&unk_a2d382e, base, current);
  current = ptr + 0x8;
  readData(&tSlowAmount, base, current);
  current = ptr + 0x28;
  readData(&tChillAmount, base, current);
  current = ptr + 0x48;
  readData(&unk_c7e1888, base, current);
  ptr += 0x68;
}
