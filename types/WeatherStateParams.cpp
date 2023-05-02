/**
 * Definition: WeatherStateParams
 * Hash: 83887d5
 */

#include "WeatherStateParams.h"

void WeatherStateParams::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d6ca49a, base, current);
  ptr += 0x10;
}
