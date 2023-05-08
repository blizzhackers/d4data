/**
 * Definition: UIControlFont
 * Hash: 653f75b6
 */

#include "UIControlFont.h"

void UIControlFont::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_86d67b, base, current);
  ptr += 0x10;
}
