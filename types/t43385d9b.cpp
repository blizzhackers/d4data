/**
 * Definition: t43385d9b
 * Hash: 43385d9b
 */

#include "t43385d9b.h"

void t43385d9b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptBoneStructureInfo, base, current);
  ptr += 0x10;
}
