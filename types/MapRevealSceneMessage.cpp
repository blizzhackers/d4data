/**
 * Definition: MapRevealSceneMessage
 * Hash: b2129170
 */

#include "MapRevealSceneMessage.h"

void MapRevealSceneMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoScene, base, ptr);
  readData(&aabb, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&bRevealed, base, ptr);
  readData(&unk_8a2f554, base, ptr);
  readData(&unk_a881f4, base, ptr);
  readData(&unk_6646a2, base, ptr);
  readData(&snoLevelArea, base, ptr);
}
