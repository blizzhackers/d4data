/**
 * Definition: UberMaterial
 * Hash: 167967fd
 */

#include "UberMaterial.h"

void UberMaterial::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoShaderMap, base, current);
  current = ptr + 0x4;
  readData(&unk_78ed128, base, current);
  current = ptr + 0x8;
  readData(&mat, base, current);
  current = ptr + 0x10;
  readData(&ptMatTexList, base, current);
  current = ptr + 0x20;
  readData(&unk_b0425e7, base, current);
  current = ptr + 0x30;
  readData(&nTexAnimStateCount, base, current);
  current = ptr + 0x34;
  readData(&unk_8702594, base, current);
  ptr += 0x38;
}
