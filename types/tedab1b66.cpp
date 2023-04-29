/**
 * Definition: tedab1b66
 * Hash: edab1b66
 */

#include "tedab1b66.h"

void tedab1b66::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&hLabel, base, ptr);
  readData(&snoNormal, base, ptr);
  readData(&unk_829b337, base, ptr);
  readData(&unk_25e61ae, base, ptr);
  readData(&hIcon, base, ptr);
}
