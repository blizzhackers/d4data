/**
 * Definition: EyeColorDefinition
 * Hash: b065ae4b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct EyeColorDefinition : public ComplexRead {
  DT_INT nSortOrder;
  DT_FIXEDARRAY<DT_INT, 5> unk_9da2273;
  DT_RGBACOLOR unk_d38eaf;
  DT_RGBACOLOR unk_14411e2;
  DT_FLOAT unk_e44f1c2;
  DT_FLOAT unk_fe33d19;
  DT_FLOAT unk_66d7f27;
  DT_FLOAT unk_4c3856;
  DT_FLOAT unk_ca1b6fd;
  DT_FLOAT unk_746a073;
  DT_FLOAT unk_245a457;
  DT_FLOAT unk_17a90ea;
  DT_FLOAT unk_298f417;
  DT_FLOAT unk_ef6e5d4;
  DT_FLOAT unk_cde5290;
  DT_FLOAT unk_38b2725;
  DT_FLOAT unk_141142a;
  DT_FLOAT unk_1c12aa0;
  DT_SNO<SnoGroup::Texture> unk_df7a801;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
