/**
 * Definition: t9d494ccc
 * Hash: 9d494ccc
 */

#include "t9d494ccc.h"

void t9d494ccc::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_1255128, base, ptr);
  readData(&unk_965113, base, ptr);
  readData(&unk_850f3e2, base, ptr);
  readData(&ann, base, ptr);
  readData(&unk_1fc05ef, base, ptr);
  readData(&unk_9e80738, base, ptr);
  readData(&bounds, base, ptr);
  readData(&rgbaColor, base, ptr);
  readData(&unk_8273480, base, ptr);
}
