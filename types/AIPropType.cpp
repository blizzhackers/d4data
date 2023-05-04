/**
 * Definition: AIPropType
 * Hash: 65341e8d
 */

#include "AIPropType.h"

void AIPropType::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x108;
  readData(&unk_766f08, base, current);
  ptr += 0x118;
}
