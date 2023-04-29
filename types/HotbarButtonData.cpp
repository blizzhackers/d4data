/**
 * Definition: HotbarButtonData
 * Hash: a7913f56
 */

#include "HotbarButtonData.h"

void HotbarButtonData::read(const char* base, char* &ptr) {
  readData(&unk_4ba1909, base, ptr);
  readData(&unk_ebcb8cb, base, ptr);
  readData(&m_annItem, base, ptr);
}
