/**
 * Definition: tb9817bff
 * Hash: b9817bff
 */

#include "tb9817bff.h"

void tb9817bff::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&hLabel, base, ptr);
  readData(&snoTexture, base, ptr);
  readData(&unk_cd49a50, base, ptr);
  readData(&hIcon, base, ptr);
}
