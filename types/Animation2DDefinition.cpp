/**
 * Definition: Animation2DDefinition
 * Hash: e7f3107f
 */

#include "Animation2DDefinition.h"

void Animation2DDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&tFrameAnim, base, current);
  current = ptr + 0x2c;
  readData(&snoSound, base, current);
  current = ptr + 0x30;
  readData(&ptFrames, base, current);
  ptr += 0x40;
}
