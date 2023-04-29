/**
 * Definition: ted71a6bd
 * Hash: ed71a6bd
 */

#include "ted71a6bd.h"

void ted71a6bd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_94ef354, base, ptr);
  readData(&unk_17b3d69, base, ptr);
  readData(&unk_40a7880, base, ptr);
  readData(&unk_5b9ef28, base, ptr);
  readData(&unk_70c33, base, ptr);
  readData(&unk_aab21d0, base, ptr);
  readData(&unk_7cf3237, base, ptr);
  readData(&unk_5d1c931, base, ptr);
  readData(&unk_721003a, base, ptr);
  readData(&unk_b42ac97, base, ptr);
  readData(&unk_f3c5748, base, ptr);
  readData(&unk_2b9b577, base, ptr);
  readData(&unk_706c5c5, base, ptr);
}
