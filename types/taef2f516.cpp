/**
 * Definition: taef2f516
 * Hash: aef2f516
 */

#include "taef2f516.h"

void taef2f516::read(const char* base, char* &ptr) {
  readData(&nFrameStart, base, ptr);
  readData(&nFrameEnd, base, ptr);
  readData(&unk_a45e6bd, base, ptr);
  readData(&unk_36bc3de, base, ptr);
  readData(&unk_fd491ef, base, ptr);
  readData(&unk_737a63, base, ptr);
  readData(&unk_e3bef92, base, ptr);
  readData(&unk_8dadb11, base, ptr);
  readData(&flZoom, base, ptr);
}
