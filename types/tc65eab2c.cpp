/**
 * Definition: tc65eab2c
 * Hash: c65eab2c
 */

#include "tc65eab2c.h"

void tc65eab2c::read(const char* base, char* &ptr) {
  readData(&snoMarkerSet, base, ptr);
  readData(&szMarkerName, base, ptr);
  readData(&unk_770f3b7, base, ptr);
  readData(&snoActor, base, ptr);
  readData(&eActorType, base, ptr);
  readData(&eGizmoType, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&unk_eec6058, base, ptr);
  readData(&unk_677237e, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&unk_7b7ab4b, base, ptr);
  readData(&unk_c9913ac, base, ptr);
  readData(&ptData, base, ptr);
}
