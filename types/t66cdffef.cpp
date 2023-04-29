/**
 * Definition: t66cdffef
 * Hash: 66cdffef
 */

#include "t66cdffef.h"

void t66cdffef::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&idEffectGroup, base, ptr);
  readData(&fLoop, base, ptr);
}
