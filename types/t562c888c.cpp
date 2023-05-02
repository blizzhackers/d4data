/**
 * Definition: t562c888c
 * Hash: 562c888c
 */

#include "t562c888c.h"

void t562c888c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_238a70d, base, current);
  current = ptr + 0x10;
  readData(&szSelectionCursor, base, current);
  ptr += 0x20;
}
