/**
 * Definition: VendorInventory
 * Hash: 3ee227bc
 */

#include "VendorInventory.h"

void VendorInventory::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_4e6c129, base, current);
  ptr += 0x10;
}
