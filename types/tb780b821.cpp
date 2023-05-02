/**
 * Definition: tb780b821
 * Hash: b780b821
 */

#include "tb780b821.h"

void tb780b821::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szParamName, base, current);
  current = ptr + 0x50;
  readData(&unk_6a4e41b, base, current);
  ptr += 0xa0;
}
