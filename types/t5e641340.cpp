/**
 * Definition: t5e641340
 * Hash: 5e641340
 */

#include "t5e641340.h"

void t5e641340::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c874a5e, base, current);
  current = ptr + 0x28;
  readData(&unk_289ce5b, base, current);
  current = ptr + 0x50;
  readData(&unk_4c6f9cb, base, current);
  current = ptr + 0x78;
  readData(&unk_35f98b0, base, current);
  current = ptr + 0xa0;
  readData(&unk_9b6930e, base, current);
  current = ptr + 0xc8;
  readData(&unk_adb2ad0, base, current);
  current = ptr + 0xcc;
  readData(&unk_2982e8d, base, current);
  current = ptr + 0xd0;
  readData(&unk_3167e4b, base, current);
  current = ptr + 0xd4;
  readData(&fRollSpeed, base, current);
  current = ptr + 0xd8;
  readData(&unk_a31c055, base, current);
  current = ptr + 0xdc;
  readData(&unk_d58a0e0, base, current);
  ptr += 0xe0;
}
