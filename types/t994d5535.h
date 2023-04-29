/**
 * Definition: t994d5535
 * Hash: 994d5535
 */

#pragma once

#include "../types.h"
#include "t37c232db.h"

#pragma push(pack, 1)

struct t994d5535 : public ComplexRead {
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
  DT_INT unk_acdb8a3;
  DT_INT unk_ecabee0;
  DT_INT unk_2e54e3c;
  DT_SNO_NAME unk_bcac396;
  DT_FLOAT unk_8fd92f7;
  DT_VARIABLEARRAY<t37c232db> unk_8a48001;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Speaker>> unk_aae0113;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Speaker>> unk_f95422b;
  DT_SNO_NAME unk_8cbb06b;
  DT_SNO_NAME unk_5b42409;
  DT_INT unk_b882e13;
  DT_INT unk_748463e;
  DT_INT unk_76d4bd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
