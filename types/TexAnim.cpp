/**
 * Definition: TexAnim
 * Hash: 3655f9d6
 */

#include "TexAnim.h"

void TexAnim::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_828d6cf, base, current);
  current = ptr + 0x14;
  readData(&unk_a7dff70, base, current);
  ptr += 0x18;
}
