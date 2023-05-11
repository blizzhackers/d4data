/**
 * Definition: t363d95fb
 * Hash: 363d95fb
 */

#include "t363d95fb.h"

void t363d95fb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&gbidSubzoneModifierTag, base, current);
  current = ptr + 0x14;
  readData(&snoSubzone, base, current);
  current = ptr + 0x18;
  readData(&dwStartTime, base, current);
  current = ptr + 0x20;
  readData(&dwEndTime, base, current);
  current = ptr + 0x28;
  readData(&snoQuest, base, current);
  current = ptr + 0x2c;
  readData(&wpLocation, base, current);
  current = ptr + 0x38;
  readData(&unk_433bf34, base, current);
  current = ptr + 0x3c;
  readData(&unk_7f9128a, base, current);
  ptr += 0x40;
}
