/**
 * Definition: UIEffect
 * Hash: d9a620b
 */

#include "UIEffect.h"

void UIEffect::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoEffectGroup, base, current);
  current = ptr + 0x8;
  readData(&unk_25f3563, base, current);
  current = ptr + 0x18;
  readData(&eScaleMethod, base, current);
  current = ptr + 0x1c;
  readData(&vecScale, base, current);
  ptr += 0x28;
}
