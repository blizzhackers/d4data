/**
 * Definition: tab8347fa
 * Hash: ab8347fa
 */

#include "tab8347fa.h"

void tab8347fa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&snoObserver, base, current);
  current = ptr + 0x8;
  readData(&eRenderContext, base, current);
  current = ptr + 0xc;
  readData(&bRotationEnabled, base, current);
  current = ptr + 0x10;
  readData(&unk_e5fad63, base, current);
  current = ptr + 0x14;
  readData(&unk_315b2df, base, current);
  ptr += 0x18;
}
