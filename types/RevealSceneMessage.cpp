/**
 * Definition: RevealSceneMessage
 * Hash: 96c5e972
 */

#include "RevealSceneMessage.h"

void RevealSceneMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&tSceneSpec, base, ptr);
  readData(&idSScene, base, ptr);
  readData(&snoScene, base, ptr);
  readData(&unk_4b3e556, base, ptr);
  readData(&transform, base, ptr);
  readData(&arAppliedLabels, base, ptr);
  readData(&unk_90d479d, base, ptr);
  readData(&unk_bc55436, base, ptr);
  readData(&dwSceneFlags, base, ptr);
}
