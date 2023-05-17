/**
 * Definition: MovieDefinition
 * Hash: d991fb29
 */

#include "MovieDefinition.h"

void MovieDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&snoAudioTrack, base, current);
  current = ptr + 0xc;
  readData(&snoSubtitles, base, current);
  current = ptr + 0x10;
  readData(&unk_944e28b, base, current);
  current = ptr + 0x14;
  readData(&unk_19d005e, base, current);
  current = ptr + 0x18;
  readData(&unk_1426000, base, current);
  ptr += 0x1c;
}
