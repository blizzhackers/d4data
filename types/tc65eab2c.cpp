/**
 * Definition: tc65eab2c
 * Hash: c65eab2c
 */

#include "tc65eab2c.h"

void tc65eab2c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoMarkerSet, base, current);
  current = ptr + 0x4;
  readData(&szMarkerName, base, current);
  current = ptr + 0x8;
  readData(&unk_770f3b7, base, current);
  current = ptr + 0xc;
  readData(&snoActor, base, current);
  current = ptr + 0x10;
  readData(&eActorType, base, current);
  current = ptr + 0x14;
  readData(&eGizmoType, base, current);
  current = ptr + 0x18;
  readData(&snoWorld, base, current);
  current = ptr + 0x1c;
  readData(&tWorldTransform, base, current);
  current = ptr + 0x38;
  readData(&unk_677237e, base, current);
  current = ptr + 0x3c;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x40;
  readData(&snoFogOfWar, base, current);
  current = ptr + 0x48;
  readData(&unk_c9913ac, base, current);
  current = ptr + 0x58;
  readData(&ptData, base, current);
  ptr += 0x70;
}
