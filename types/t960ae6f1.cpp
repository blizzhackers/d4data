/**
 * Definition: t960ae6f1
 * Hash: 960ae6f1
 */

#include "t960ae6f1.h"

void t960ae6f1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_e4fae63, base, current);
  current = ptr + 0x18;
  readData(&bSuccess, base, current);
  ptr += 0x1c;
}
