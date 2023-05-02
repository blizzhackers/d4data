/**
 * Definition: WeatherDefinition
 * Hash: 2720a839
 */

#include "WeatherDefinition.h"

void WeatherDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&ptPostprocessed, base, current);
  current = ptr + 0x10;
  readData(&unk_1d4db0a, base, current);
  current = ptr + 0x14;
  readData(&unk_45703df, base, current);
  current = ptr + 0x18;
  readData(&unk_5989069, base, current);
  current = ptr + 0x48;
  readData(&tParamsNotRaining, base, current);
  current = ptr + 0x58;
  readData(&tParamsWhenRaining, base, current);
  current = ptr + 0x68;
  readData(&tColorCorrection, base, current);
  current = ptr + 0x78;
  readData(&unk_1c3741b, base, current);
  current = ptr + 0x88;
  readData(&unk_b038972, base, current);
  current = ptr + 0x98;
  readData(&unk_c68eb66, base, current);
  current = ptr + 0xa8;
  readData(&unk_319c94, base, current);
  current = ptr + 0xb8;
  readData(&unk_dc54395, base, current);
  ptr += 0xc8;
}
