/**
 * Definition: ConversationDefinition
 * Hash: c66617a4
 */

#include "ConversationDefinition.h"

void ConversationDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&eConvType, base, current);
  current = ptr + 0xc;
  readData(&unk_1fd072a, base, current);
  current = ptr + 0x10;
  readData(&unk_951e771, base, current);
  current = ptr + 0x14;
  readData(&unk_aefb1a3, base, current);
  current = ptr + 0x18;
  readData(&flCooldownTime, base, current);
  current = ptr + 0x1c;
  readData(&unk_5031de3, base, current);
  current = ptr + 0x20;
  readData(&unk_3587d15, base, current);
  current = ptr + 0x24;
  readData(&unk_d35e9de, base, current);
  current = ptr + 0x28;
  readData(&unk_8d6f162, base, current);
  current = ptr + 0x2c;
  readData(&unk_ac91f5d, base, current);
  current = ptr + 0x30;
  readData(&unk_e1d8535, base, current);
  current = ptr + 0x34;
  readData(&unk_50dfbdf, base, current);
  current = ptr + 0x38;
  readData(&unk_b32ef27, base, current);
  current = ptr + 0x3c;
  readData(&dwFlags, base, current);
  current = ptr + 0x40;
  readData(&arRootNodes, base, current);
  current = ptr + 0x58;
  readData(&szSetPlayerFlag, base, current);
  current = ptr + 0xd8;
  readData(&unk_bbc67ad, base, current);
  ptr += 0xe0;
}
