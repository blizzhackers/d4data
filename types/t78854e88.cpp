/**
 * Definition: t78854e88
 * Hash: 78854e88
 */

#include "t78854e88.h"

void t78854e88::read(const char* base, char* &ptr) {
  readData(&snoMusic, base, ptr);
  readData(&snoAmbient, base, ptr);
  readData(&snoReverb, base, ptr);
  readData(&snoWeather, base, ptr);
}
