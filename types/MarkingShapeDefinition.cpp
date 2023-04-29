/**
 * Definition: MarkingShapeDefinition
 * Hash: 94e6db83
 */

#include "MarkingShapeDefinition.h"

void MarkingShapeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eClassRestriction, base, ptr);
  readData(&unk_3dcf566, base, ptr);
  readData(&unk_fbabaf4, base, ptr);
  readData(&unk_5bc5f2b, base, ptr);
  readData(&unk_5ba696a, base, ptr);
  readData(&snoDefaultColor, base, ptr);
}
