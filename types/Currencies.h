/**
 * Definition: Currencies
 * Hash: bbfb1fd3
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"
#include "ta8549fba.h"

#pragma push(pack, 1)

struct Currencies : public ComplexRead {
  ta78f399f tHeader;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_INT unk_490dc23;
  DT_INT unk_5adf42e;
  DT_CSTRING unk_14e1476;
  DT_GBID<0x3a> gbidCategory;
  DT_VARIABLEARRAY<ta8549fba> arItems;
  DT_SNO<SnoGroup::Tutorial> unk_a7aad4d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
