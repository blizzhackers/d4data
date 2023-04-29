/**
 * Definition: tad4d33a9
 * Hash: ad4d33a9
 */

#include "tad4d33a9.h"

void tad4d33a9::read(const char* base, char* &ptr) {
  readData(&nWidth, base, ptr);
  readData(&nHeight, base, ptr);
  readData(&nDepth, base, ptr);
  readData(&unk_a952693, base, ptr);
  readData(&wpOrigin, base, ptr);
  readData(&unk_aa0958e, base, ptr);
  readData(&unk_aa09583, base, ptr);
  readData(&unk_aa0957e, base, ptr);
  readData(&unk_dd3cf4b, base, ptr);
  readData(&unk_dd3cf40, base, ptr);
  readData(&unk_dd3cf3b, base, ptr);
}
