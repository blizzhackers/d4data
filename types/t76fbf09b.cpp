/**
 * Definition: t76fbf09b
 * Hash: 76fbf09b
 */

#include "t76fbf09b.h"

void t76fbf09b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoQuest, base, current);
  current = ptr + 0x14;
  readData(&bIsWorldEvent, base, current);
  current = ptr + 0x18;
  readData(&snoWorld, base, current);
  current = ptr + 0x1c;
  readData(&snoSubzone, base, current);
  current = ptr + 0x20;
  readData(&snoReward, base, current);
  current = ptr + 0x24;
  readData(&unk_f3772b3, base, current);
  current = ptr + 0x28;
  readData(&unk_576b41d, base, current);
  current = ptr + 0x30;
  readData(&wpLocation, base, current);
  ptr += 0x40;
}
