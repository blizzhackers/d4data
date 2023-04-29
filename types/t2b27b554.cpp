/**
 * Definition: t2b27b554
 * Hash: 2b27b554
 */

#include "t2b27b554.h"

void t2b27b554::read(const char* base, char* &ptr) {
  readData(&dwUnlockLevel, base, ptr);
  readData(&tPVPGameIsOverDefinition, base, ptr);
  readData(&unk_b7d2154, base, ptr);
  readData(&unk_8bd010, base, ptr);
}
