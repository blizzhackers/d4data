/**
 * Definition: Animation2DDefinition
 * Hash: e7f3107f
 */

#include "Animation2DDefinition.h"

void Animation2DDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&tFrameAnim, base, ptr);
  readData(&snoSound, base, ptr);
  readData(&ptFrames, base, ptr);
}
