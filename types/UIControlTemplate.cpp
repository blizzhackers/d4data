/**
 * Definition: UIControlTemplate
 * Hash: 2641ffbb
 */

#include "UIControlTemplate.h"

void UIControlTemplate::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x10;
  readData(&ptInlineStyle, base, current);
  current = ptr + 0x28;
  readData(&arChildren, base, current);
  current = ptr + 0x38;
  readData(&unk_1cb, base, current);
  ptr += 0x48;
}
