/**
 * Definition: ExplosionDefinition
 * Hash: ef2ef3aa
 */

#include "ExplosionDefinition.h"

void ExplosionDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&eType, base, ptr);
  readData(&wvDirection, base, ptr);
  readData(&unk_d03716d, base, ptr);
  readData(&pathRadius, base, ptr);
  readData(&unk_bebfab2, base, ptr);
  readData(&unk_6a15ca2, base, ptr);
  readData(&flCutoffRadius, base, ptr);
  readData(&unk_edb8832, base, ptr);
  readData(&unk_56d7ce2, base, ptr);
  readData(&flDuration, base, ptr);
  readData(&flChance, base, ptr);
  readData(&flFrequency, base, ptr);
  readData(&unk_6b38232, base, ptr);
  readData(&unk_6b38134, base, ptr);
  readData(&unk_c5b3851, base, ptr);
}
