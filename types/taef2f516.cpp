/**
 * Definition: taef2f516
 * Hash: aef2f516
 */

#include "taef2f516.h"

void taef2f516::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nFrameStart, base, current);
  current = ptr + 0x4;
  readData(&nFrameEnd, base, current);
  current = ptr + 0x8;
  readData(&unk_a45e6bd, base, current);
  current = ptr + 0xc;
  readData(&unk_36bc3de, base, current);
  current = ptr + 0x10;
  readData(&unk_fd491ef, base, current);
  current = ptr + 0x14;
  readData(&unk_737a63, base, current);
  current = ptr + 0x18;
  readData(&unk_e3bef92, base, current);
  current = ptr + 0x1c;
  readData(&unk_8dadb11, base, current);
  current = ptr + 0x28;
  readData(&flZoom, base, current);
  ptr += 0x2c;
}
