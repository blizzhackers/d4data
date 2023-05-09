/**
 * Definition: AIPathData
 * Hash: 53a5f131
 */

#pragma once

#include "../types.h"
#include "AICellData.h"
#include "t30856351.h"
#include "t5f1859b4.h"

#pragma push(pack, 1)

struct AIPathData : public ComplexRead {
  DT_VARIABLEARRAY<AICellData> unk_29375a6;
  DT_VARIABLEARRAY<t30856351> unk_4eb2373;
  DT_VARIABLEARRAY<t5f1859b4> unk_5d4c076;
  DT_INT64 unk_14f08f0;
  DT_INT unk_7a5d20a;
  DT_FLOAT m_cellWidth;
  DT_FLOAT unk_ede9ae5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
