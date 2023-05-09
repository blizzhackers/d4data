/**
 * Definition: NPCServiceData
 * Hash: c6ceb20c
 */

#include "NPCServiceData.h"

void NPCServiceData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eServiceType, base, current);
  current = ptr + 0x4;
  readData(&eVendorType, base, current);
  current = ptr + 0x8;
  readData(&eCrafterType, base, current);
  current = ptr + 0xc;
  readData(&unk_e28f315, base, current);
  current = ptr + 0x10;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x14;
  readData(&unk_433f3cc, base, current);
  current = ptr + 0x18;
  readData(&unk_6a0f71a, base, current);
  current = ptr + 0x1c;
  readData(&unk_f41fecc, base, current);
  current = ptr + 0x20;
  readData(&unk_d8a298f, base, current);
  ptr += 0x24;
}
