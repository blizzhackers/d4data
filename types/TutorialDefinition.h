/**
 * Definition: TutorialDefinition
 * Hash: 15d6711d
 */

#pragma once

#include "../types.h"
#include "TutorialScreen.h"

#pragma push(pack, 1)

struct TutorialDefinition : public ComplexRead {
  DT_UINT dwNextID;
  DT_ENUM<DT_INT> eType;
  DT_UINT dwFlags;
  DT_VARIABLEARRAY<TutorialScreen> unk_5da8477;
  DT_ENUM<DT_INT> unk_cc2b674;
  DT_FLOAT unk_e34e19d;
  DT_ENUM<DT_INT> eAlignHorizontal;
  DT_ENUM<DT_INT> eAlignVertical;
  DT_BCVEC2I vecOffset;
  DT_CSTRING unk_442c269;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
