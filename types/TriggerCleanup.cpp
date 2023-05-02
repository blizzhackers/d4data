/**
 * Definition: TriggerCleanup
 * Hash: 78f2ed9c
 */

#include "TriggerCleanup.h"

void TriggerCleanup::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_80dc73, base, current);
  current = ptr + 0x4;
  readData(&unk_f216739, base, current);
  current = ptr + 0x8;
  readData(&unk_8047af2, base, current);
  current = ptr + 0xc;
  readData(&unk_4690732, base, current);
  current = ptr + 0x10;
  readData(&unk_2041ce1, base, current);
  current = ptr + 0x14;
  readData(&unk_c5ce3af, base, current);
  ptr += 0x18;
}
