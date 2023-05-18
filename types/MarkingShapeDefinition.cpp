/**
 * Definition: MarkingShapeDefinition
 * Hash: 94e6db83
 */

#include "MarkingShapeDefinition.h"

void MarkingShapeDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&eClassRestriction, base, current);
  current = ptr + 0xc;
  readData(&unk_3dcf566, base, current);
  current = ptr + 0x10;
  readData(&hIconImage, base, current);
  current = ptr + 0x14;
  readData(&snoMaskFace, base, current);
  current = ptr + 0x18;
  readData(&unk_5ba696a, base, current);
  current = ptr + 0x1c;
  readData(&snoDefaultColor, base, current);
  ptr += 0x20;
}
