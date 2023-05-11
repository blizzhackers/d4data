/**
 * Definition: EyeColorDefinition
 * Hash: b065ae4b
 */

#include "EyeColorDefinition.h"

void EyeColorDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_509016f, base, current);
  current = ptr + 0xc;
  readData(&nSortOrder, base, current);
  current = ptr + 0x10;
  readData(&unk_9da2273, base, current);
  current = ptr + 0x24;
  readData(&unk_d38eaf, base, current);
  current = ptr + 0x28;
  readData(&unk_14411e2, base, current);
  current = ptr + 0x2c;
  readData(&unk_e44f1c2, base, current);
  current = ptr + 0x30;
  readData(&unk_fe33d19, base, current);
  current = ptr + 0x34;
  readData(&unk_66d7f27, base, current);
  current = ptr + 0x38;
  readData(&unk_4c3856, base, current);
  current = ptr + 0x3c;
  readData(&unk_ca1b6fd, base, current);
  current = ptr + 0x40;
  readData(&unk_746a073, base, current);
  current = ptr + 0x44;
  readData(&unk_245a457, base, current);
  current = ptr + 0x48;
  readData(&unk_17a90ea, base, current);
  current = ptr + 0x4c;
  readData(&unk_298f417, base, current);
  current = ptr + 0x50;
  readData(&unk_ef6e5d4, base, current);
  current = ptr + 0x54;
  readData(&unk_cde5290, base, current);
  current = ptr + 0x58;
  readData(&unk_38b2725, base, current);
  current = ptr + 0x5c;
  readData(&unk_141142a, base, current);
  current = ptr + 0x60;
  readData(&unk_1c12aa0, base, current);
  current = ptr + 0x64;
  readData(&unk_df7a801, base, current);
  ptr += 0x68;
}
