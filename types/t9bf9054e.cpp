/**
 * Definition: t9bf9054e
 * Hash: 9bf9054e
 */

#include "t9bf9054e.h"

void t9bf9054e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x8;
  readData(&tMinRequired, base, current);
  current = ptr + 0x28;
  readData(&unk_3cf7677, base, current);
  current = ptr + 0x48;
  readData(&unk_26286d0, base, current);
  ptr += 0x68;
}
