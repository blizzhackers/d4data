/**
 * Definition: SpeakerDefinition
 * Hash: 77784d74
 */

#include "SpeakerDefinition.h"

void SpeakerDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_ca1a658, base, current);
  current = ptr + 0x10;
  readData(&unk_8c41fbd, base, current);
  ptr += 0x20;
}
