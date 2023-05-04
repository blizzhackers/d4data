/**
 * Definition: SummonActorEntry
 * Hash: b239c0ca
 */

#include "SummonActorEntry.h"

void SummonActorEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwWeight, base, current);
  current = ptr + 0x4;
  readData(&snoSummonActor, base, current);
  current = ptr + 0x8;
  readData(&unk_c47e1e0, base, current);
  current = ptr + 0x10;
  readData(&unk_100c8cd, base, current);
  current = ptr + 0x14;
  readData(&snoCondition, base, current);
  ptr += 0x18;
}
