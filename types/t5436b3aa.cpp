/**
 * Definition: t5436b3aa
 * Hash: 5436b3aa
 */

#include "t5436b3aa.h"

void t5436b3aa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fVendor, base, current);
  current = ptr + 0x34;
  readData(&fCrafter, base, current);
  current = ptr + 0x48;
  readData(&unk_2922760, base, current);
  current = ptr + 0x4c;
  readData(&unk_8ff5457, base, current);
  current = ptr + 0x50;
  readData(&unk_b0256b7, base, current);
  current = ptr + 0x54;
  readData(&fStash, base, current);
  current = ptr + 0x58;
  readData(&unk_3767c, base, current);
  ptr += 0x5c;
}
