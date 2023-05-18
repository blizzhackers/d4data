/**
 * Definition: UIStoryboard2Style
 * Hash: be515d2a
 */

#include "UIStoryboard2Style.h"

void UIStoryboard2Style::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&hParentStyle, base, current);
  current = ptr + 0x18;
  readData(&unk_441f783, base, current);
  current = ptr + 0x20;
  readData(&unk_b835d15, base, current);
  current = ptr + 0x30;
  readData(&snoStoryboard, base, current);
  current = ptr + 0x34;
  readData(&unk_5f75855, base, current);
  current = ptr + 0x38;
  readData(&unk_8c27446, base, current);
  current = ptr + 0x3c;
  readData(&unk_d07ad36, base, current);
  current = ptr + 0x40;
  readData(&unk_92765af, base, current);
  ptr += 0x50;
}
