/**
 * Definition: ChangeAppearanceMessage
 * Hash: 72f0f9bb
 */

#include "ChangeAppearanceMessage.h"

void ChangeAppearanceMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoMarkingShape, base, current);
  current = ptr + 0x14;
  readData(&snoMarkingColor, base, current);
  current = ptr + 0x18;
  readData(&snoJewelry, base, current);
  current = ptr + 0x1c;
  readData(&snoMakeup, base, current);
  ptr += 0x20;
}
