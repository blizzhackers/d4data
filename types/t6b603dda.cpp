/**
 * Definition: t6b603dda
 * Hash: 6b603dda
 */

#include "t6b603dda.h"

void t6b603dda::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_1a41b9f, base, current);
  current = ptr + 0x10;
  readData(&dwKey, base, current);
  current = ptr + 0x18;
  readData(&unk_8e5f439, base, current);
  current = ptr + 0x28;
  readData(&unk_d4d5dbb, base, current);
  current = ptr + 0x38;
  readData(&ptResourceSlot, base, current);
  current = ptr + 0x48;
  readData(&unk_6f6dbab, base, current);
  ptr += 0x58;
}
