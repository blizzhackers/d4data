/**
 * Definition: FontDefinition
 * Hash: d962ec80
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct FontDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eHintingMode;
  DT_ENUM<DT_INT> eHintingStyle;
  DT_FIXEDARRAY<DT_INT, 3> unk_da11db;
  DT_FLOAT unk_316a8bf;
  DT_FLOAT flAdvanceScalar;
  DT_FLOAT unk_994b88a;
  DT_SNO<SnoGroup::Font> unk_d5350c2;
  DT_SNO<SnoGroup::Font> unk_d0cc8d7;
  DT_SNO<SnoGroup::Font> unk_7def5b8;
  DT_SNO<SnoGroup::Font> unk_7310d17;
  DT_UINT unk_428af64;
  DT_FLOAT unk_9771bb;
  DT_FLOAT unk_4ca851;
  DT_FLOAT unk_820c304;
  DT_FLOAT unk_b5b5e50;
  DT_INT64 ptPostData;
  DT_VARIABLEARRAY<DT_BYTE> unk_2cd1580;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
