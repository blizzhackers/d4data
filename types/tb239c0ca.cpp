/**
 * Definition: tb239c0ca
 * Hash: b239c0ca
 */

#include "tb239c0ca.h"

void tb239c0ca::read(const char* base, char* &ptr) {
  readData(&dwWeight, base, ptr);
  readData(&snoSummonActor, base, ptr);
  readData(&unk_c47e1e0, base, ptr);
  readData(&unk_100c8cd, base, ptr);
  readData(&snoCondition, base, ptr);
}
