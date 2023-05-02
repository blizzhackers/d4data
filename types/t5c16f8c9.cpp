/**
 * Definition: t5c16f8c9
 * Hash: 5c16f8c9
 */

#include "t5c16f8c9.h"

void t5c16f8c9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x8;
  readData(&unk_edbef87, base, current);
  current = ptr + 0x28;
  readData(&unk_e8c07c7, base, current);
  current = ptr + 0x38;
  readData(&tSacrifice, base, current);
  current = ptr + 0x40;
  readData(&unk_efc6d7a, base, current);
  current = ptr + 0x50;
  readData(&unk_4901f66, base, current);
  ptr += 0x58;
}
