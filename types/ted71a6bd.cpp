/**
 * Definition: ted71a6bd
 * Hash: ed71a6bd
 */

#include "ted71a6bd.h"

void ted71a6bd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_94ef354, base, current);
  current = ptr + 0xe8;
  readData(&unk_17b3d69, base, current);
  current = ptr + 0x1c0;
  readData(&unk_40a7880, base, current);
  current = ptr + 0x298;
  readData(&unk_5b9ef28, base, current);
  current = ptr + 0x370;
  readData(&unk_70c33, base, current);
  current = ptr + 0x448;
  readData(&unk_aab21d0, base, current);
  current = ptr + 0x520;
  readData(&unk_7cf3237, base, current);
  current = ptr + 0x5f8;
  readData(&unk_5d1c931, base, current);
  current = ptr + 0x6f8;
  readData(&arPortalTypes, base, current);
  current = ptr + 0x708;
  readData(&unk_b42ac97, base, current);
  current = ptr + 0x70c;
  readData(&unk_f3c5748, base, current);
  current = ptr + 0x710;
  readData(&unk_2b9b577, base, current);
  current = ptr + 0x714;
  readData(&unk_706c5c5, base, current);
  ptr += 0x718;
}
