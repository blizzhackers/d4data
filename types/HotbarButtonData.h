/**
 * Definition: HotbarButtonData
 * Hash: a7913f56
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct HotbarButtonData : public ComplexRead {
  DT_SNO<SnoGroup::Power> unk_4ba1909;
  DT_SNO<SnoGroup::Item> unk_ebcb8cb;
  DT_ACD_NETWORK_NAME m_annItem;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
