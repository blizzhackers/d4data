/**
 * Definition: UberMaterial
 * Hash: 167967fd
 */

#include "UberMaterial.h"

void UberMaterial::read(const char* base, char* &ptr) {
  readData(&snoShaderMap, base, ptr);
  readData(&unk_78ed128, base, ptr);
  readData(&mat, base, ptr);
  readData(&ptMatTexList, base, ptr);
  readData(&unk_b0425e7, base, ptr);
  readData(&nTexAnimStateCount, base, ptr);
  readData(&unk_8702594, base, ptr);
}
