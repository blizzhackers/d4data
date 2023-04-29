/**
 * Definition: WorldDefinition
 * Hash: a5d8191
 */

#include "WorldDefinition.h"

void WorldDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&ptServerData, base, ptr);
  readData(&unk_8ca2d45, base, ptr);
  readData(&unk_a952693, base, ptr);
  readData(&tEnvironment, base, ptr);
  readData(&flDeformationScale, base, ptr);
  readData(&uFlags, base, ptr);
  readData(&unk_4194d72, base, ptr);
  readData(&unk_3ce229b, base, ptr);
  readData(&unk_27befa0, base, ptr);
  readData(&unk_587b37c, base, ptr);
  readData(&unk_675bda3, base, ptr);
  readData(&unk_678ad38, base, ptr);
  readData(&unk_720f501, base, ptr);
  readData(&unk_cc56e3e, base, ptr);
  readData(&unk_5733630, base, ptr);
  readData(&unk_59a2b11, base, ptr);
  readData(&unk_d9c79d2, base, ptr);
}
