/**
 * Definition: UIEffect
 * Hash: d9a620b
 */

#include "UIEffect.h"

void UIEffect::read(const char* base, char* &ptr) {
  readData(&snoEffectGroup, base, ptr);
  readData(&unk_25f3563, base, ptr);
  readData(&unk_5d19bee, base, ptr);
  readData(&vecScale, base, ptr);
}
