/**
 * Definition: MapRevealSceneMessage
 * Hash: b2129170
 */

#include "MapRevealSceneMessage.h"

void MapRevealSceneMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoScene, base, current);
  current = ptr + 0x14;
  readData(&aabb, base, current);
  current = ptr + 0x2c;
  readData(&idSWorld, base, current);
  current = ptr + 0x34;
  readData(&bRevealed, base, current);
  current = ptr + 0x38;
  readData(&unk_8a2f554, base, current);
  current = ptr + 0x3c;
  readData(&unk_a881f4, base, current);
  current = ptr + 0x40;
  readData(&unk_6646a2, base, current);
  current = ptr + 0x54;
  readData(&snoLevelArea, base, current);
  ptr += 0x5c;
}
