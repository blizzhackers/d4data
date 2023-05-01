/**
 * Definition: t255c7330
 * Hash: 255c7330
 */

#include "t255c7330.h"

void t255c7330::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eType, base, ptr);
  readData(&snoAsset, base, ptr);
  readData(&eTeam, base, ptr);
  readData(&vRMessage, base, ptr);
  readData(&unk_77b6d3, base, ptr);
}
