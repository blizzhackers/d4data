/**
 * Definition: AttackerEnemiesParam
 * Hash: 38007346
 */

#include "AttackerEnemiesParam.h"

void AttackerEnemiesParam::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eScalarFunction, base, current);
  current = ptr + 0x4;
  readData(&unk_bde3eaf, base, current);
  current = ptr + 0x8;
  readData(&uID, base, current);
  current = ptr + 0xc;
  readData(&uNameHash, base, current);
  current = ptr + 0x10;
  readData(&fBypass, base, current);
  ptr += 0x14;
}
