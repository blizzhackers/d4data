/**
 * Definition: DisplayMode
 * Hash: 2a394bbb
 */

#include "DisplayMode.h"

void DisplayMode::read(const char* base, char* &ptr) {
  readData(&dwFlags, base, ptr);
  readData(&dwWindowMode, base, ptr);
  readData(&nWinLeft, base, ptr);
  readData(&nWinTop, base, ptr);
  readData(&dwUIOptWidth, base, ptr);
  readData(&dwUIOptHeight, base, ptr);
  readData(&dwWidth, base, ptr);
  readData(&dwHeight, base, ptr);
  readData(&nRefreshRate, base, ptr);
  readData(&unk_5691443, base, ptr);
  readData(&unk_a9bc210, base, ptr);
  readData(&dwMSAALevel, base, ptr);
}
