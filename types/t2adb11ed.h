/**
 * Definition: t2adb11ed
 * Hash: 2adb11ed
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2adb11ed : public ComplexRead {
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
  DT_SNO<SnoGroup::Speaker> snoSpeaker;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
