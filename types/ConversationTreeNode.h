/**
 * Definition: ConversationTreeNode
 * Hash: c1d407b1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ConversationTreeNode : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_UINT unk_cf3ce;
  DT_UINT unk_bbc67ad;
  DT_UINT unk_3ef8e38;
  DT_INT64 ptNextNode;
  DT_UINT dwFlags;
  DT_CSTRING szComment;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
