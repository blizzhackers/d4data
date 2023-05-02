/**
 * Definition: DisplayMode
 * Hash: 2a394bbb
 */

#include "DisplayMode.h"

void DisplayMode::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwFlags, base, current);
  current = ptr + 0x4;
  readData(&dwWindowMode, base, current);
  current = ptr + 0x8;
  readData(&nWinLeft, base, current);
  current = ptr + 0xc;
  readData(&nWinTop, base, current);
  current = ptr + 0x10;
  readData(&dwUIOptWidth, base, current);
  current = ptr + 0x14;
  readData(&dwUIOptHeight, base, current);
  current = ptr + 0x18;
  readData(&dwWidth, base, current);
  current = ptr + 0x1c;
  readData(&dwHeight, base, current);
  current = ptr + 0x20;
  readData(&nRefreshRate, base, current);
  current = ptr + 0x24;
  readData(&unk_5691443, base, current);
  current = ptr + 0x28;
  readData(&unk_a9bc210, base, current);
  current = ptr + 0x2c;
  readData(&dwMSAALevel, base, current);
  ptr += 0x30;
}
