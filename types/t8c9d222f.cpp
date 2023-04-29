/**
 * Definition: t8c9d222f
 * Hash: 8c9d222f
 */

#include "t8c9d222f.h"

void t8c9d222f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&snoUI, base, ptr);
}
