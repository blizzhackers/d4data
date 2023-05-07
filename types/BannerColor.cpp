/**
 * Definition: BannerColor
 * Hash: e94af135
 */

#include "BannerColor.h"

void BannerColor::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&hLabel, base, current);
  current = ptr + 0xc;
  readData(&rgbaColor, base, current);
  ptr += 0x10;
}
