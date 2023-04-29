/**
 * Definition: tc8d78ce7
 * Hash: c8d78ce7
 */

#include "tc8d78ce7.h"

void tc8d78ce7::read(const char* base, char* &ptr) {
  readData(&nWidth, base, ptr);
  readData(&nHeight, base, ptr);
  readData(&nDepth, base, ptr);
  readData(&dwPitch, base, ptr);
  readData(&dwSlicePitch, base, ptr);
  readData(&unk_a952693, base, ptr);
  readData(&wpOrigin, base, ptr);
  readData(&unk_4b236f4, base, ptr);
  readData(&unk_aa0958e, base, ptr);
  readData(&unk_aa09583, base, ptr);
  readData(&unk_aa0957e, base, ptr);
  readData(&unk_dd3cf4b, base, ptr);
  readData(&unk_dd3cf40, base, ptr);
  readData(&unk_dd3cf3b, base, ptr);
}
