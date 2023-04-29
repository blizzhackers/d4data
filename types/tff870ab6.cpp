/**
 * Definition: tff870ab6
 * Hash: ff870ab6
 */

#include "tff870ab6.h"

void tff870ab6::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&snoBuff, base, ptr);
  readData(&unk_891f4a8, base, ptr);
  readData(&unk_82ec588, base, ptr);
  readData(&unk_52d3115, base, ptr);
  readData(&unk_579f22d, base, ptr);
  readData(&unk_a60ef1c, base, ptr);
}
