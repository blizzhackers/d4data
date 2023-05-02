/**
 * Definition: TranslationKey
 * Hash: fc095f18
 */

#include "TranslationKey.h"

void TranslationKey::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nFrame, base, current);
  current = ptr + 0x4;
  readData(&wp, base, current);
  ptr += 0x10;
}
