/**
 * Definition: ta2b0fc96
 * Hash: a2b0fc96
 */

#include "ta2b0fc96.h"

void ta2b0fc96::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_ebf9bb4, base, current);
  current = ptr + 0x40;
  readData(&unk_9e7b180, base, current);
  current = ptr + 0x44;
  readData(&unk_e1da18d, base, current);
  current = ptr + 0x48;
  readData(&tMarkerHandle, base, current);
  current = ptr + 0x50;
  readData(&gbidActorGroup, base, current);
  current = ptr + 0x54;
  readData(&unk_5b5276a, base, current);
  current = ptr + 0x58;
  readData(&unk_f5a5252, base, current);
  current = ptr + 0x98;
  readData(&snoReference, base, current);
  current = ptr + 0xa0;
  readData(&unk_86254e0, base, current);
  current = ptr + 0xa4;
  readData(&unk_a33b274, base, current);
  ptr += 0xa8;
}
