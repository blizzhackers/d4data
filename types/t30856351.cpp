/**
 * Definition: t30856351
 * Hash: 30856351
 */

#include "t30856351.h"

void t30856351::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&m_data, base, current);
  ptr += 0x10;
}
