/**
 * Definition: t121cf2f6
 * Hash: 121cf2f6
 */

#include "t121cf2f6.h"

void t121cf2f6::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&dwID, base, ptr);
  readData(&tHardpointLink, base, ptr);
}
