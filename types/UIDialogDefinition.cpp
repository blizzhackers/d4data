/**
 * Definition: UIDialogDefinition
 * Hash: ba2ee837
 */

#include "UIDialogDefinition.h"

void UIDialogDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_d01dfb6, base, current);
  current = ptr + 0x50;
  readData(&tTemplates, base, current);
  current = ptr + 0x60;
  readData(&ptStyles, base, current);
  ptr += 0x70;
}
