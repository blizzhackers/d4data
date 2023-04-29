/**
 * Definition: t7a482be4
 * Hash: 7a482be4
 */

#include "t7a482be4.h"

void t7a482be4::read(const char* base, char* &ptr) {
  readData(&snoAppearance, base, ptr);
  readData(&szLookName, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&unk_ce65d4b, base, ptr);
  readData(&unk_396ef7c, base, ptr);
  readData(&ptInstances, base, ptr);
  readData(&unk_7934bc2, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_b0425e7, base, ptr);
}
