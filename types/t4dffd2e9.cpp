/**
 * Definition: t4dffd2e9
 * Hash: 4dffd2e9
 */

#include "t4dffd2e9.h"

void t4dffd2e9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&eCategory, base, current);
  ptr += 0x108;
}
