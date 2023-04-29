/**
 * Definition: t5436b3aa
 * Hash: 5436b3aa
 */

#include "t5436b3aa.h"

void t5436b3aa::read(const char* base, char* &ptr) {
  readData(&fVendor, base, ptr);
  readData(&fCrafter, base, ptr);
  readData(&unk_2922760, base, ptr);
  readData(&unk_8ff5457, base, ptr);
  readData(&unk_b0256b7, base, ptr);
  readData(&fStash, base, ptr);
  readData(&unk_3767c, base, ptr);
}
