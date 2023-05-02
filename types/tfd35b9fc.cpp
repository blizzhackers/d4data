/**
 * Definition: tfd35b9fc
 * Hash: fd35b9fc
 */

#include "tfd35b9fc.h"

void tfd35b9fc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&idGameAccount, base, current);
  current = ptr + 0x1c;
  readData(&unk_81ffda3, base, current);
  current = ptr + 0x20;
  readData(&nPlayerClass, base, current);
  current = ptr + 0x24;
  readData(&bIsMale, base, current);
  current = ptr + 0x28;
  readData(&nLevel, base, current);
  current = ptr + 0x2c;
  readData(&snoLevelArea, base, current);
  ptr += 0x30;
}
