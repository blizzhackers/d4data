/**
 * Definition: ta121d296
 * Hash: a121d296
 */

#include "ta121d296.h"

void ta121d296::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&dwID, base, ptr);
  readData(&snoname, base, ptr);
  readData(&tHardpointLinks, base, ptr);
  readData(&dwTriggerFlags, base, ptr);
  readData(&unk_a936bd9, base, ptr);
  readData(&unk_24f5a5c, base, ptr);
  readData(&tLookLink, base, ptr);
  readData(&unk_48fd494, base, ptr);
  readData(&unk_6b8bffc, base, ptr);
  readData(&unk_61399d, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&flScale, base, ptr);
  readData(&dwSeed, base, ptr);
  readData(&unk_b0f4eeb, base, ptr);
  readData(&vecScalar, base, ptr);
  readData(&transform, base, ptr);
  readData(&unk_315ce85, base, ptr);
  readData(&unk_c7fa18a, base, ptr);
  readData(&unk_760871b, base, ptr);
  readData(&dwSpawnedActorLife, base, ptr);
  readData(&unk_245c537, base, ptr);
  readData(&unk_a03b96b, base, ptr);
}
