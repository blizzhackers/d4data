/**
 * Definition: SurfaceDefinition
 * Hash: e6116fb2
 */

#include "SurfaceDefinition.h"

void SurfaceDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_5ed6d0f, base, current);
  current = ptr + 0xc;
  readData(&unk_c79c39c, base, current);
  current = ptr + 0x10;
  readData(&unk_c20fecf, base, current);
  current = ptr + 0x14;
  readData(&hStructure, base, current);
  current = ptr + 0x18;
  readData(&unk_4a68208, base, current);
  current = ptr + 0x1c;
  readData(&unk_45ad51c, base, current);
  current = ptr + 0x20;
  readData(&unk_24404f, base, current);
  current = ptr + 0x24;
  readData(&unk_405f72f, base, current);
  current = ptr + 0x28;
  readData(&unk_3972ad, base, current);
  current = ptr + 0x2c;
  readData(&unk_1f8c560, base, current);
  current = ptr + 0x30;
  readData(&unk_d57a372, base, current);
  current = ptr + 0x34;
  readData(&unk_4b222fd, base, current);
  current = ptr + 0x38;
  readData(&unk_4a8480e, base, current);
  current = ptr + 0x3c;
  readData(&fGrass, base, current);
  ptr += 0x40;
}
