/**
 * Definition: BountyIcons
 * Hash: e4a9aedd
 */

#include "BountyIcons.h"

void BountyIcons::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&hIconNormal, base, current);
  current = ptr + 0x4;
  readData(&unk_c5ca709, base, current);
  current = ptr + 0x8;
  readData(&hNotificationIcon, base, current);
  ptr += 0xc;
}
