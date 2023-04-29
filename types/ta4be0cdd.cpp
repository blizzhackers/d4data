/**
 * Definition: ta4be0cdd
 * Hash: a4be0cdd
 */

#include "ta4be0cdd.h"

void ta4be0cdd::read(const char* base, char* &ptr) {
  readData(&szLabel, base, ptr);
  readData(&snoSpeaker, base, ptr);
  readData(&flDuration, base, ptr);
  readData(&unk_1d3e4c1, base, ptr);
}
