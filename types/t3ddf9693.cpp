/**
 * Definition: t3ddf9693
 * Hash: 3ddf9693
 */

#include "t3ddf9693.h"

void t3ddf9693::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&szLookName, base, current);
  current = ptr + 0x8;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0xc;
  readData(&unk_189be9b, base, current);
  current = ptr + 0x10;
  readData(&unk_94a2b91, base, current);
  current = ptr + 0x14;
  readData(&unk_d094b9a, base, current);
  current = ptr + 0x18;
  readData(&flWeight, base, current);
  current = ptr + 0x1c;
  readData(&unk_9396f37, base, current);
  current = ptr + 0x20;
  readData(&unk_f116b76, base, current);
  current = ptr + 0x24;
  readData(&unk_da5b372, base, current);
  current = ptr + 0x28;
  readData(&unk_8dea4d9, base, current);
  current = ptr + 0x2c;
  readData(&nFadeGroup, base, current);
  ptr += 0x30;
}
