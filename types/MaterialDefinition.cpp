/**
 * Definition: MaterialDefinition
 * Hash: b96b9098
 */

#include "MaterialDefinition.h"

void MaterialDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&tUberMaterial, base, ptr);
  readData(&unk_e22e114, base, ptr);
  readData(&snoSurface, base, ptr);
  readData(&unk_a4fd56f, base, ptr);
  readData(&unk_c879a37, base, ptr);
  readData(&unk_93ea20a, base, ptr);
  readData(&unk_f43ef5b, base, ptr);
  readData(&unk_95fa9b8, base, ptr);
  readData(&unk_ce6fe3b, base, ptr);
  readData(&unk_245935, base, ptr);
  readData(&unk_6d58226, base, ptr);
  readData(&flDuration, base, ptr);
  readData(&tOutroDuration, base, ptr);
  readData(&unk_a08119e, base, ptr);
  readData(&unk_5b1ce37, base, ptr);
  readData(&flStiffness, base, ptr);
  readData(&unk_c92c676, base, ptr);
  readData(&unk_2a29881, base, ptr);
}
