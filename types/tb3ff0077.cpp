/**
 * Definition: tb3ff0077
 * Hash: b3ff0077
 */

#include "tb3ff0077.h"

void tb3ff0077::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_9058b77, base, ptr);
  readData(&vecPosition, base, ptr);
  readData(&szText, base, ptr);
}
