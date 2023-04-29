/**
 * Definition: tf7ffb49f
 * Hash: f7ffb49f
 */

#include "tf7ffb49f.h"

void tf7ffb49f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&snoMonsterFamily, base, ptr);
  readData(&unk_e42b9be, base, ptr);
  readData(&szArchetype, base, ptr);
}
