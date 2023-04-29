/**
 * Definition: t7dbfe3b
 * Hash: 7dbfe3b
 */

#include "t7dbfe3b.h"

void t7dbfe3b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&dwID, base, ptr);
  readData(&eNodeType, base, ptr);
  readData(&eAnimLayer, base, ptr);
  readData(&ptChildren, base, ptr);
  readData(&eBlendParam, base, ptr);
  readData(&unk_4241c63, base, ptr);
  readData(&unk_5733828, base, ptr);
  readData(&unk_51e2dd, base, ptr);
  readData(&unk_fd3931f, base, ptr);
  readData(&unk_9a6f370, base, ptr);
  readData(&unk_e857c51, base, ptr);
  readData(&unk_dd1cd6f, base, ptr);
  readData(&nSyncGroupIndex, base, ptr);
  readData(&unk_d6d7e1b, base, ptr);
}
