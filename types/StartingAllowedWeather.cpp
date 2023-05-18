/**
 * Definition: StartingAllowedWeather
 * Hash: 4e8e96e4
 */

#include "StartingAllowedWeather.h"

void StartingAllowedWeather::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoSubzone, base, current);
  current = ptr + 0x4;
  readData(&unk_efcdea5, base, current);
  ptr += 0x8;
}
