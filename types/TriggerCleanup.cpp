/**
 * Definition: TriggerCleanup
 * Hash: 78f2ed9c
 */

#include "TriggerCleanup.h"

void TriggerCleanup::read(const char* base, char* &ptr) {
  readData(&unk_80dc73, base, ptr);
  readData(&unk_f216739, base, ptr);
  readData(&unk_8047af2, base, ptr);
  readData(&unk_4690732, base, ptr);
  readData(&unk_2041ce1, base, ptr);
  readData(&unk_c5ce3af, base, ptr);
}
