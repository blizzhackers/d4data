/**
 * Definition: t75ca18d0
 * Hash: 75ca18d0
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"

#pragma push(pack, 1)

struct t75ca18d0 : public ComplexRead {
  UIControlHandle hTemplate;
  DT_INT bActive;
  DT_INT unk_f45aa9c;
  DT_INT unk_17cfa96;
  DT_CSTRING szOnInit;
  DT_CSTRING szOnOpen;
  DT_CSTRING szOnClose;
  DT_CSTRING szOnDispose;
  DT_CSTRING szOnUpdate;
  DT_CSTRING szOnSelChange;
  DT_CSTRING unk_173059;
  DT_SNO<SnoGroup::Sound> snoOnOpenSound;
  DT_SNO<SnoGroup::Sound> unk_33fa5cf;
  DT_SNO<SnoGroup::Sound> snoOnCloseSound;
  DT_CSTRING unk_8ab8d6;
  DT_CSTRING unk_2509b49;
  DT_CSTRING unk_a2ead70;
  DT_CSTRING unk_868283;
  DT_INT unk_785d371;
  DT_INT unk_192fb51;
  DT_INT unk_5251749;
  DT_CSTRING unk_1cfa0b8;
  DT_CSTRING unk_1cfa0b9;
  DT_ENUM<DT_INT> unk_513b522;
  DT_INT unk_f0a3845;
  DT_INT unk_40ae369;
  DT_INT unk_7d6fa47;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
