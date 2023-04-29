/**
 * Definition: t76fbf09b
 * Hash: 76fbf09b
 */

#include "t76fbf09b.h"

void t76fbf09b::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&unk_f425a28, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&snoReward, base, ptr);
  readData(&unk_f3772b3, base, ptr);
  readData(&unk_576b41d, base, ptr);
  readData(&wpLocation, base, ptr);
}
