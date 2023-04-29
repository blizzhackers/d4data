/**
 * Definition: MovieDefinition
 * Hash: d991fb29
 */

#include "MovieDefinition.h"

void MovieDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&snoAudioTrack, base, ptr);
  readData(&unk_83bdc8f, base, ptr);
  readData(&unk_944e28b, base, ptr);
  readData(&unk_19d005e, base, ptr);
  readData(&unk_1426000, base, ptr);
}
