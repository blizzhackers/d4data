/**
 * Definition: teda64360
 * Hash: eda64360
 */

#include "teda64360.h"

void teda64360::read(const char* base, char* &ptr) {
  readData(&dwID, base, ptr);
  readData(&unk_28ca84b, base, ptr);
  readData(&unk_538cbc1, base, ptr);
  readData(&unk_6752f3b, base, ptr);
}
