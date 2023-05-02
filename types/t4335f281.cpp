/**
 * Definition: t4335f281
 * Hash: 4335f281
 */

#include "t4335f281.h"

void t4335f281::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoEffectGroup, base, current);
  current = ptr + 0x4;
  readData(&unk_7eb10c0, base, current);
  current = ptr + 0xc;
  readData(&unk_9ffef5e, base, current);
  current = ptr + 0x14;
  readData(&unk_82f1fc7, base, current);
  ptr += 0x1c;
}
