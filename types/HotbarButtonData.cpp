/**
 * Definition: HotbarButtonData
 * Hash: a7913f56
 */

#include "HotbarButtonData.h"

void HotbarButtonData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_4ba1909, base, current);
  current = ptr + 0x4;
  readData(&unk_ebcb8cb, base, current);
  current = ptr + 0x8;
  readData(&m_annItem, base, current);
  ptr += 0x10;
}
