/**
 * Definition: SurfaceDefinition
 * Hash: e6116fb2
 */

#include "SurfaceDefinition.h"

void SurfaceDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_5ed6d0f, base, ptr);
  readData(&unk_c79c39c, base, ptr);
  readData(&unk_c20fecf, base, ptr);
  readData(&hStructure, base, ptr);
  readData(&unk_4a68208, base, ptr);
  readData(&unk_45ad51c, base, ptr);
  readData(&unk_24404f, base, ptr);
  readData(&unk_405f72f, base, ptr);
  readData(&unk_3972ad, base, ptr);
  readData(&unk_1f8c560, base, ptr);
  readData(&unk_d57a372, base, ptr);
  readData(&unk_4b222fd, base, ptr);
  readData(&unk_4a8480e, base, ptr);
  readData(&fGrass, base, ptr);
}
