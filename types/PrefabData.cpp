/**
 * Definition: PrefabData
 * Hash: edbd9a8a
 */

#include "PrefabData.h"

void PrefabData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwFlags, base, current);
  current = ptr + 0x4;
  readData(&unk_32bf9c6, base, current);
  current = ptr + 0x8;
  readData(&unk_f116b76, base, current);
  current = ptr + 0xc;
  readData(&nFadeGroup, base, current);
  current = ptr + 0x10;
  readData(&unk_d094b9a, base, current);
  current = ptr + 0x14;
  readData(&unk_ce65d4b, base, current);
  current = ptr + 0x18;
  readData(&unk_4bfd602, base, current);
  current = ptr + 0x1c;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0x20;
  readData(&unk_dc9436d, base, current);
  current = ptr + 0x28;
  readData(&unk_b0425e7, base, current);
  ptr += 0x38;
}
