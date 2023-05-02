/**
 * Definition: WorldDefinition
 * Hash: a5d8191
 */

#include "WorldDefinition.h"

void WorldDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&ptServerData, base, current);
  current = ptr + 0x18;
  readData(&unk_8ca2d45, base, current);
  current = ptr + 0x1c;
  readData(&unk_a952693, base, current);
  current = ptr + 0x20;
  readData(&tEnvironment, base, current);
  current = ptr + 0x8c;
  readData(&flDeformationScale, base, current);
  current = ptr + 0x90;
  readData(&uFlags, base, current);
  current = ptr + 0x94;
  readData(&unk_4194d72, base, current);
  current = ptr + 0x98;
  readData(&unk_3ce229b, base, current);
  current = ptr + 0xa0;
  readData(&unk_27befa0, base, current);
  current = ptr + 0xb0;
  readData(&unk_587b37c, base, current);
  current = ptr + 0xb8;
  readData(&unk_675bda3, base, current);
  current = ptr + 0xc8;
  readData(&unk_678ad38, base, current);
  current = ptr + 0xcc;
  readData(&unk_720f501, base, current);
  current = ptr + 0xd0;
  readData(&unk_cc56e3e, base, current);
  current = ptr + 0xf8;
  readData(&unk_5733630, base, current);
  current = ptr + 0x120;
  readData(&unk_59a2b11, base, current);
  current = ptr + 0x128;
  readData(&unk_d9c79d2, base, current);
  ptr += 0x190;
}
