/**
 * Definition: tc2bc153b
 * Hash: c2bc153b
 */

#include "tc2bc153b.h"

void tc2bc153b::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwTypes, base, ptr);
  readData(&ePlayerClass, base, ptr);
  readData(&eDamageTypeOverride, base, ptr);
  readData(&bIsPrimary, base, ptr);
  readData(&unk_1baedbe, base, ptr);
  readData(&unk_e9ab5ed, base, ptr);
}
