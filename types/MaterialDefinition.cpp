/**
 * Definition: MaterialDefinition
 * Hash: b96b9098
 */

#include "MaterialDefinition.h"

void MaterialDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0x10;
  readData(&tUberMaterial, base, current);
  current = ptr + 0x48;
  readData(&unk_e22e114, base, current);
  current = ptr + 0x58;
  readData(&snoSurface, base, current);
  current = ptr + 0x5c;
  readData(&unk_a4fd56f, base, current);
  current = ptr + 0x70;
  readData(&unk_c879a37, base, current);
  current = ptr + 0x88;
  readData(&unk_93ea20a, base, current);
  current = ptr + 0x90;
  readData(&unk_f43ef5b, base, current);
  current = ptr + 0xc8;
  readData(&unk_95fa9b8, base, current);
  current = ptr + 0x100;
  readData(&unk_ce6fe3b, base, current);
  current = ptr + 0x104;
  readData(&unk_245935, base, current);
  current = ptr + 0x108;
  readData(&unk_6d58226, base, current);
  current = ptr + 0x10c;
  readData(&flDuration, base, current);
  current = ptr + 0x110;
  readData(&tOutroDuration, base, current);
  current = ptr + 0x114;
  readData(&unk_a08119e, base, current);
  current = ptr + 0x118;
  readData(&unk_5b1ce37, base, current);
  current = ptr + 0x11c;
  readData(&flStiffness, base, current);
  current = ptr + 0x120;
  readData(&unk_c92c676, base, current);
  current = ptr + 0x124;
  readData(&unk_2a29881, base, current);
  ptr += 0x148;
}
