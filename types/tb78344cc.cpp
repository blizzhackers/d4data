/**
 * Definition: tb78344cc
 * Hash: b78344cc
 */

#include "tb78344cc.h"

void tb78344cc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_eddc1bd, base, current);
  current = ptr + 0x14;
  readData(&snoQuest, base, current);
  current = ptr + 0x18;
  readData(&snoWorld, base, current);
  current = ptr + 0x1c;
  readData(&snoSubzone, base, current);
  current = ptr + 0x20;
  readData(&wpLocation, base, current);
  current = ptr + 0x2c;
  readData(&unk_8818621, base, current);
  current = ptr + 0x38;
  readData(&bStartImmediately, base, current);
  current = ptr + 0x3c;
  readData(&unk_fe671fb, base, current);
  ptr += 0x40;
}
