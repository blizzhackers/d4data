/**
 * Definition: tc5064aa7
 * Hash: c5064aa7
 */

#include "tc5064aa7.h"

void tc5064aa7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a988803, base, current);
  current = ptr + 0x4;
  readData(&unk_b29fdf6, base, current);
  ptr += 0x8;
}
