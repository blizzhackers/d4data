/**
 * Definition: tab8347fa
 * Hash: ab8347fa
 */

#include "tab8347fa.h"

void tab8347fa::read(const char* base, char* &ptr) {
  readData(&snoActor, base, ptr);
  readData(&snoObserver, base, ptr);
  readData(&eRenderContext, base, ptr);
  readData(&bRotationEnabled, base, ptr);
  readData(&unk_e5fad63, base, ptr);
  readData(&unk_315b2df, base, ptr);
}
