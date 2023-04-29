/**
 * Definition: ScriptEventDescription
 * Hash: deb446db
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScriptEventDescription : public ComplexRead {
  DT_ENUM<DT_INT> eEventType;
  DT_INT64 szDescription;
  DT_INT64 szGrammar;
  DT_FIXEDARRAY<DT_ENUM<DT_INT>, 4> arParamTypes;
  DT_FIXEDARRAY<DT_INT64, 4> szParamNames;
  DT_FIXEDARRAY<DT_INT64, 4> szFuncParamNames;
  DT_FIXEDARRAY<DT_INT64, 4> szParamDescriptions;
  DT_FIXEDARRAY<DT_ENUM<DT_INT>, 4> unk_aab17b3;
  DT_FIXEDARRAY<DT_ENUM<DT_INT>, 4> unk_7ef4b8b;
  DT_FIXEDARRAY<DT_ENUM<DT_INT>, 4> unk_336d153;
  DT_FIXEDARRAY<DT_ENUM<DT_INT>, 4> unk_41cdd20;
  DT_UINT dwFlags;
  DT_INT64 unk_165bc75;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
