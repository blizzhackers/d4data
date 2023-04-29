/**
 * Definition: t53c963b9
 * Hash: 53c963b9
 */

#include "t53c963b9.h"

void t53c963b9::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&unk_a54c2e0, base, ptr);
}
