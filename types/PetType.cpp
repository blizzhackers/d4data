/**
 * Definition: PetType
 * Hash: 22f3fab
 */

#include "PetType.h"

void PetType::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_887ea65, base, ptr);
  readData(&unk_17d5315, base, ptr);
  readData(&unk_a9f95f3, base, ptr);
  readData(&ptTPitchDown, base, ptr);
}
