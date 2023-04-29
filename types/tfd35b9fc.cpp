/**
 * Definition: tfd35b9fc
 * Hash: fd35b9fc
 */

#include "tfd35b9fc.h"

void tfd35b9fc::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&idGameAccount, base, ptr);
  readData(&unk_81ffda3, base, ptr);
  readData(&nPlayerClass, base, ptr);
  readData(&bIsMale, base, ptr);
  readData(&nLevel, base, ptr);
  readData(&snoLevelArea, base, ptr);
}
