/**
 * Definition: SpeakerDefinition
 * Hash: 77784d74
 */

#include "SpeakerDefinition.h"

void SpeakerDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_ca1a658, base, ptr);
  readData(&unk_8c41fbd, base, ptr);
}
