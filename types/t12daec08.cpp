/**
 * Definition: t12daec08
 * Hash: 12daec08
 */

#include "t12daec08.h"

void t12daec08::read(const char* base, char* &ptr) {
  readData(&flExplosionFactor, base, ptr);
  readData(&flFrequency, base, ptr);
  readData(&unk_3278f1, base, ptr);
  readData(&unk_d7a231e, base, ptr);
  readData(&unk_e7ab959, base, ptr);
  readData(&unk_77adebf, base, ptr);
  readData(&unk_4fe19d7, base, ptr);
  readData(&snoAmbientSound, base, ptr);
  readData(&unk_620b5c3, base, ptr);
  readData(&unk_bf229f9, base, ptr);
}
