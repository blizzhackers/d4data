/**
 * Definition: t809d027e
 * Hash: 809d027e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t809d027e : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_UINT unk_cf3ce;
  DT_UINT unk_bbc67ad;
  DT_UINT unk_3ef8e38;
  DT_INT64 ptNextNode;
  DT_UINT dwFlags;
  DT_CSTRING szComment;
  DT_POLYMORPHIC_VARIABLEARRAY arChildNodes;
  DT_SNO<SnoGroup::Condition> snoCondition;
  DT_INT unk_d8bf9e4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
