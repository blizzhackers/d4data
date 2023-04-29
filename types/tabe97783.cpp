/**
 * Definition: tabe97783
 * Hash: abe97783
 */

#include "tabe97783.h"

void tabe97783::read(const char* base, char* &ptr) {
  readData(&eType, base, ptr);
  readData(&unk_7c1bedb, base, ptr);
  readData(&vCenterPos, base, ptr);
  readData(&flRadius, base, ptr);
  readData(&bValid, base, ptr);
  readData(&unk_16e2f51, base, ptr);
}
