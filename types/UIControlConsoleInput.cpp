/**
 * Definition: UIControlConsoleInput
 * Hash: b8237382
 */

#include "UIControlConsoleInput.h"

void UIControlConsoleInput::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_8536b47, base, current);
  ptr += 0x10;
}
