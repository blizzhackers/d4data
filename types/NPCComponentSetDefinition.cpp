/**
 * Definition: NPCComponentSetDefinition
 * Hash: 59359749
 */

#include "NPCComponentSetDefinition.h"

void NPCComponentSetDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&arAppearances, base, current);
  current = ptr + 0x18;
  readData(&arSkinColors, base, current);
  current = ptr + 0x28;
  readData(&arHairColors, base, current);
  current = ptr + 0x38;
  readData(&arEquipmentDyes, base, current);
  current = ptr + 0x48;
  readData(&unk_e8ad810, base, current);
  current = ptr + 0x58;
  readData(&unk_be478b4, base, current);
  current = ptr + 0x68;
  readData(&unk_7cdd390, base, current);
  current = ptr + 0xa8;
  readData(&unk_8bee334, base, current);
  current = ptr + 0xe8;
  readData(&unk_2e94cee, base, current);
  current = ptr + 0xf8;
  readData(&unk_395e53, base, current);
  current = ptr + 0x108;
  readData(&unk_3810f4, base, current);
  current = ptr + 0x118;
  readData(&unk_80d753b, base, current);
  current = ptr + 0x11c;
  readData(&unk_1ae0e98, base, current);
  ptr += 0x120;
}
