/**
 * Definition: tbdedf2ca
 * Hash: bdedf2ca
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbdedf2ca : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_UINT unk_cf3ce;
  DT_UINT unk_bbc67ad;
  DT_UINT unk_3ef8e38;
  DT_INT64 ptNextNode;
  DT_UINT dwFlags;
  DT_CSTRING szComment;
  DT_SNO<SnoGroup::Conversation> unk_f44b6d4;
  DT_UINT unk_1d53cd7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
