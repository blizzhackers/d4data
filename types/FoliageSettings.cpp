/**
 * Definition: FoliageSettings
 * Hash: 12daec08
 */

#include "FoliageSettings.h"

void FoliageSettings::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flExplosionFactor, base, current);
  current = ptr + 0x4;
  readData(&flFrequency, base, current);
  current = ptr + 0x8;
  readData(&unk_3278f1, base, current);
  current = ptr + 0xc;
  readData(&unk_d7a231e, base, current);
  current = ptr + 0x10;
  readData(&flRadiusRatio, base, current);
  current = ptr + 0x14;
  readData(&unk_77adebf, base, current);
  current = ptr + 0x18;
  readData(&unk_4fe19d7, base, current);
  current = ptr + 0x1c;
  readData(&snoAmbientSound, base, current);
  current = ptr + 0x20;
  readData(&unk_620b5c3, base, current);
  current = ptr + 0x24;
  readData(&unk_bf229f9, base, current);
  ptr += 0x28;
}
