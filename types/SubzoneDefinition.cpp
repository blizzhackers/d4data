/**
 * Definition: SubzoneDefinition
 * Hash: c4469c6f
 */

#include "SubzoneDefinition.h"

void SubzoneDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_691c97c, base, current);
  current = ptr + 0xc;
  readData(&uEntranceGUID, base, current);
  current = ptr + 0x10;
  readData(&arLevelAreas, base, current);
  current = ptr + 0x20;
  readData(&eType, base, current);
  current = ptr + 0x24;
  readData(&unk_110432b, base, current);
  current = ptr + 0x28;
  readData(&snoTerritory, base, current);
  current = ptr + 0x2c;
  readData(&unk_d447cfd, base, current);
  current = ptr + 0x30;
  readData(&unk_f34c43f, base, current);
  current = ptr + 0x34;
  readData(&snoActorGroups, base, current);
  current = ptr + 0x38;
  readData(&ptPostprocessed, base, current);
  current = ptr + 0x40;
  readData(&unk_9a1125c, base, current);
  current = ptr + 0x50;
  readData(&unk_d75e3a6, base, current);
  current = ptr + 0x60;
  readData(&dwFlags, base, current);
  current = ptr + 0x64;
  readData(&unk_35fc338, base, current);
  current = ptr + 0x68;
  readData(&unk_6f7f585, base, current);
  current = ptr + 0xa8;
  readData(&unk_496a122, base, current);
  ptr += 0xb8;
}
