/**
 * Definition: SubzoneDefinition
 * Hash: c4469c6f
 */

#include "SubzoneDefinition.h"

void SubzoneDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_691c97c, base, ptr);
  readData(&uEntranceGUID, base, ptr);
  readData(&arLevelAreas, base, ptr);
  readData(&eType, base, ptr);
  readData(&unk_110432b, base, ptr);
  readData(&snoTerritory, base, ptr);
  readData(&unk_d447cfd, base, ptr);
  readData(&unk_f34c43f, base, ptr);
  readData(&snoActorGroups, base, ptr);
  readData(&ptPostprocessed, base, ptr);
  readData(&unk_9a1125c, base, ptr);
  readData(&unk_d75e3a6, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_35fc338, base, ptr);
  readData(&unk_6f7f585, base, ptr);
  readData(&unk_496a122, base, ptr);
}
