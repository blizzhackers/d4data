/**
 * Definition: te6f4bbd7
 * Hash: e6f4bbd7
 */

#include "te6f4bbd7.h"

void te6f4bbd7::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eScope, base, ptr);
  readData(&eType, base, ptr);
  readData(&nDefaultValue, base, ptr);
  readData(&unk_9e4e90a, base, ptr);
  readData(&unk_3ca5a82, base, ptr);
  readData(&unk_e616755, base, ptr);
  readData(&unk_c24a257, base, ptr);
  readData(&unk_387f176, base, ptr);
  readData(&unk_5574b39, base, ptr);
  readData(&unk_8cfb605, base, ptr);
  readData(&unk_2bbc72e, base, ptr);
}
