/**
 * Definition: tf7ffb49f
 * Hash: f7ffb49f
 */

#include "tf7ffb49f.h"

void tf7ffb49f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eSubject, base, current);
  current = ptr + 0x1c;
  readData(&snoMonsterFamily, base, current);
  current = ptr + 0x20;
  readData(&unk_e42b9be, base, current);
  current = ptr + 0x24;
  readData(&szArchetype, base, current);
  ptr += 0x28;
}
