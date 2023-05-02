/**
 * Definition: te6694729
 * Hash: e6694729
 */

#include "te6694729.h"

void te6694729::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&transform, base, current);
  current = ptr + 0x1c;
  readData(&fWater, base, current);
  current = ptr + 0x20;
  readData(&unk_b3bf971, base, current);
  current = ptr + 0x28;
  readData(&unk_81eccce, base, current);
  current = ptr + 0x48;
  readData(&unk_4e7e318, base, current);
  current = ptr + 0x58;
  readData(&unk_9275540, base, current);
  ptr += 0x68;
}
