/**
 * Definition: TexAnim
 * Hash: 3655f9d6
 */

#include "TexAnim.h"

void TexAnim::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_828d6cf, base, ptr);
  readData(&unk_a7dff70, base, ptr);
}
