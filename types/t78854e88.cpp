/**
 * Definition: t78854e88
 * Hash: 78854e88
 */

#include "t78854e88.h"

void t78854e88::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoMusic, base, current);
  current = ptr + 0x4;
  readData(&snoAmbient, base, current);
  current = ptr + 0x8;
  readData(&snoReverb, base, current);
  current = ptr + 0xc;
  readData(&snoWeather, base, current);
  ptr += 0x10;
}
