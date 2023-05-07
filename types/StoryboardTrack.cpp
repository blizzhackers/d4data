/**
 * Definition: StoryboardTrack
 * Hash: d27e6dde
 */

#include "StoryboardTrack.h"

void StoryboardTrack::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
