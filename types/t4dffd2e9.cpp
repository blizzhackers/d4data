/**
 * Definition: t4dffd2e9
 * Hash: 4dffd2e9
 */

#include "t4dffd2e9.h"

void t4dffd2e9::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eCategory, base, ptr);
}
