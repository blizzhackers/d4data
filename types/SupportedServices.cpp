/**
 * Definition: SupportedServices
 * Hash: 5436b3aa
 */

#include "SupportedServices.h"

void SupportedServices::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fVendor, base, current);
  current = ptr + 0x30;
  readData(&fCrafter, base, current);
  current = ptr + 0x44;
  readData(&unk_2922760, base, current);
  current = ptr + 0x48;
  readData(&unk_8ff5457, base, current);
  current = ptr + 0x4c;
  readData(&unk_b0256b7, base, current);
  current = ptr + 0x50;
  readData(&fStash, base, current);
  current = ptr + 0x54;
  readData(&unk_3767c, base, current);
  ptr += 0x58;
}
