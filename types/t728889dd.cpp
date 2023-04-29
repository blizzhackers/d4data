/**
 * Definition: t728889dd
 * Hash: 728889dd
 */

#include "t728889dd.h"

void t728889dd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&eMsgPassMethod, base, ptr);
  readData(&dwMsgKey, base, ptr);
}
