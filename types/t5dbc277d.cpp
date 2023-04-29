/**
 * Definition: t5dbc277d
 * Hash: 5dbc277d
 */

#include "t5dbc277d.h"

void t5dbc277d::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&snoMale, base, ptr);
  readData(&snoFemale, base, ptr);
}
