/**
 * Definition: t7a482be4
 * Hash: 7a482be4
 */

#include "t7a482be4.h"

void t7a482be4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoAppearance, base, current);
  current = ptr + 0x4;
  readData(&szLookName, base, current);
  current = ptr + 0x8;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0xc;
  readData(&unk_ce65d4b, base, current);
  current = ptr + 0x10;
  readData(&eInstanceType, base, current);
  current = ptr + 0x18;
  readData(&ptInstances, base, current);
  current = ptr + 0x28;
  readData(&unk_7934bc2, base, current);
  current = ptr + 0x30;
  readData(&dwFlags, base, current);
  current = ptr + 0x38;
  readData(&unk_b0425e7, base, current);
  ptr += 0x48;
}
