/**
 * Definition: Anim2DFrame
 * Hash: a4d7e8e6
 */

#include "Anim2DFrame.h"

void Anim2DFrame::read(const char* base, char* &ptr) {
  readData(&hImage, base, ptr);
  readData(&rgbaColor, base, ptr);
}
