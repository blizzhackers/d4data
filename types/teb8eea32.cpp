/**
 * Definition: teb8eea32
 * Hash: eb8eea32
 */

#include "teb8eea32.h"

void teb8eea32::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoMonsterFamily, base, ptr);
  readData(&szArchetype, base, ptr);
  readData(&unk_f2a10c4, base, ptr);
  readData(&unk_1d44a06, base, ptr);
}
