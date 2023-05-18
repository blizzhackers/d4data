/**
 * Definition: UIListBoxStyle
 * Hash: 8a5932f4
 */

#include "UIListBoxStyle.h"

void UIListBoxStyle::read(const char* base, char* &ptr) {
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
  readData(&tConsoleInput, base, current);
  current = ptr + 0x40;
  readData(&unk_b4f614c, base, current);
  current = ptr + 0x50;
  readData(&unk_4cce0b6, base, current);
  current = ptr + 0x60;
  readData(&tFont, base, current);
  current = ptr + 0x70;
  readData(&unk_59693f9, base, current);
  ptr += 0x80;
}
