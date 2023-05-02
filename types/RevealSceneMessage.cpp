/**
 * Definition: RevealSceneMessage
 * Hash: 96c5e972
 */

#include "RevealSceneMessage.h"

void RevealSceneMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSWorld, base, current);
  current = ptr + 0x18;
  readData(&tSceneSpec, base, current);
  current = ptr + 0x14c;
  readData(&idSScene, base, current);
  current = ptr + 0x154;
  readData(&snoScene, base, current);
  current = ptr + 0x158;
  readData(&unk_4b3e556, base, current);
  current = ptr + 0x15c;
  readData(&transform, base, current);
  current = ptr + 0x178;
  readData(&arAppliedLabels, base, current);
  current = ptr + 0x57c;
  readData(&unk_90d479d, base, current);
  current = ptr + 0x680;
  readData(&unk_bc55436, base, current);
  current = ptr + 0x694;
  readData(&dwSceneFlags, base, current);
  ptr += 0x698;
}
