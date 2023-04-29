/**
 * Definition: t1824fd95
 * Hash: 1824fd95
 */

#include "t1824fd95.h"

void t1824fd95::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_6f68ae7, base, ptr);
}
