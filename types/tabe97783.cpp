/**
 * Definition: tabe97783
 * Hash: abe97783
 */

#include "tabe97783.h"

void tabe97783::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x8;
  readData(&unk_7c1bedb, base, current);
  current = ptr + 0x18;
  readData(&vCenterPos, base, current);
  current = ptr + 0x20;
  readData(&flRadius, base, current);
  current = ptr + 0x24;
  readData(&bValid, base, current);
  current = ptr + 0x28;
  readData(&unk_16e2f51, base, current);
  ptr += 0x30;
}
