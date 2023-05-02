/**
 * Definition: t803e808c
 * Hash: 803e808c
 */

#include "t803e808c.h"

void t803e808c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_9104406, base, current);
  current = ptr + 0x54;
  readData(&unk_6ef22d, base, current);
  current = ptr + 0x118;
  readData(&unk_b8ec161, base, current);
  current = ptr + 0x15c;
  readData(&snoWorld, base, current);
  ptr += 0x160;
}
