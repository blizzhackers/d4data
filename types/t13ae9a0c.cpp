/**
 * Definition: t13ae9a0c
 * Hash: 13ae9a0c
 */

#include "t13ae9a0c.h"

void t13ae9a0c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_85269a4, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&unk_54489ef, base, ptr);
}
