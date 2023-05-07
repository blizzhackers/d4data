/**
 * Definition: TutorialScreen
 * Hash: 14195114
 */

#include "TutorialScreen.h"

void TutorialScreen::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&hImage, base, current);
  current = ptr + 0x8;
  readData(&snoMovie, base, current);
  ptr += 0xc;
}
