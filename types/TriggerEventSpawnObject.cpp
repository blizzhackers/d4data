/**
 * Definition: TriggerEventSpawnObject
 * Hash: a121d296
 */

#include "TriggerEventSpawnObject.h"

void TriggerEventSpawnObject::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tConditions, base, current);
  current = ptr + 0x3c;
  readData(&fGenerated, base, current);
  current = ptr + 0x40;
  readData(&unk_6cba752, base, current);
  current = ptr + 0x44;
  readData(&unk_e560b0b, base, current);
  current = ptr + 0x48;
  readData(&dwID, base, current);
  current = ptr + 0x4c;
  readData(&snoname, base, current);
  current = ptr + 0x54;
  readData(&tHardpointLinks, base, current);
  current = ptr + 0x64;
  readData(&dwTriggerFlags, base, current);
  current = ptr + 0x68;
  readData(&unk_a936bd9, base, current);
  current = ptr + 0x6c;
  readData(&unk_24f5a5c, base, current);
  current = ptr + 0x70;
  readData(&tLookLink, base, current);
  current = ptr + 0x74;
  readData(&unk_48fd494, base, current);
  current = ptr + 0x78;
  readData(&unk_6b8bffc, base, current);
  current = ptr + 0x7c;
  readData(&dwSegmentsStep, base, current);
  current = ptr + 0x80;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0x84;
  readData(&flScale, base, current);
  current = ptr + 0x88;
  readData(&dwSeed, base, current);
  current = ptr + 0x8c;
  readData(&unk_b0f4eeb, base, current);
  current = ptr + 0x90;
  readData(&vecScalar, base, current);
  current = ptr + 0x98;
  readData(&transform, base, current);
  current = ptr + 0xb4;
  readData(&unk_315ce85, base, current);
  current = ptr + 0xbc;
  readData(&unk_c7fa18a, base, current);
  current = ptr + 0xc4;
  readData(&unk_760871b, base, current);
  current = ptr + 0xc8;
  readData(&dwSpawnedActorLife, base, current);
  current = ptr + 0xcc;
  readData(&unk_245c537, base, current);
  current = ptr + 0xf8;
  readData(&unk_a03b96b, base, current);
  ptr += 0x108;
}
