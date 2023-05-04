/**
 * Definition: tccb90a07
 * Hash: ccb90a07
 */

#include "tccb90a07.h"

void tccb90a07::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&unk_26b74cf, base, current);
  current = ptr + 0x8;
  readData(&tBaseData, base, current);
  current = ptr + 0x18;
  readData(&tSlots, base, current);
  ptr += 0x20;
}
