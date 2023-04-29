/**
 * Definition: UIDialogDefinition
 * Hash: ba2ee837
 */

#include "UIDialogDefinition.h"

void UIDialogDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_d01dfb6, base, ptr);
  readData(&unk_73efac3, base, ptr);
  readData(&ptStyles, base, ptr);
}
