/**
 * Definition: PlatformAccount
 * Hash: 1b611d12
 */

#include "PlatformAccount.h"

void PlatformAccount::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&m_id, base, current);
  current = ptr + 0x8;
  readData(&m_platform, base, current);
  ptr += 0x10;
}
