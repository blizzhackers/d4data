/**
 * Definition: t5dbc277d
 * Hash: 5dbc277d
 */

#include "t5dbc277d.h"

void t5dbc277d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x10;
  readData(&snoMale, base, current);
  current = ptr + 0x14;
  readData(&snoFemale, base, current);
  ptr += 0x18;
}
