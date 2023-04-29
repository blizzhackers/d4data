/**
 * Definition: t6cf70a0e
 * Hash: 6cf70a0e
 */

#include "t6cf70a0e.h"

void t6cf70a0e::read(const char* base, char* &ptr) {
  readData(&wpPosition, base, ptr);
  readData(&uEntranceGUID, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&unk_38c174, base, ptr);
  readData(&unk_ba8fd29, base, ptr);
  readData(&unk_e5c224a, base, ptr);
  readData(&hMinimapIcon, base, ptr);
}
