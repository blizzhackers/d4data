/**
 * Definition: tad6dea01
 * Hash: ad6dea01
 */

#include "tad6dea01.h"

void tad6dea01::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_283d1ad, base, ptr);
  readData(&tPayload, base, ptr);
}
