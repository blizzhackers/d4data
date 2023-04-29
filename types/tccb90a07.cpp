/**
 * Definition: tccb90a07
 * Hash: ccb90a07
 */

#include "tccb90a07.h"

void tccb90a07::read(const char* base, char* &ptr) {
  readData(&snoActor, base, ptr);
  readData(&unk_26b74cf, base, ptr);
  readData(&unk_fb8fc89, base, ptr);
  readData(&tSlots, base, ptr);
}
