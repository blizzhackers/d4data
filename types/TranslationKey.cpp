/**
 * Definition: TranslationKey
 * Hash: fc095f18
 */

#include "TranslationKey.h"

void TranslationKey::read(const char* base, char* &ptr) {
  readData(&nFrame, base, ptr);
  readData(&wp, base, ptr);
}
