/**
 * Definition: t18fbc228
 * Hash: 18fbc228
 */

#include "t18fbc228.h"

void t18fbc228::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&dwObjectID, base, ptr);
  readData(&unk_bd1644f, base, ptr);
  readData(&aThreshold, base, ptr);
  readData(&unk_d74c75c, base, ptr);
  readData(&unk_77ca12a, base, ptr);
  readData(&unk_23237e1, base, ptr);
  readData(&unk_f1b6afc, base, ptr);
}
