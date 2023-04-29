/**
 * Definition: MarkerSetDefinition
 * Hash: f3f8f857
 */

#pragma once

#include "../types.h"
#include "Marker.h"
#include "t6ee9427a.h"
#include "t70e5b8b6.h"
#include "t79fa66b0.h"
#include "t9e555889.h"
#include "tc8d78ce7.h"

#pragma push(pack, 1)

struct MarkerSetDefinition : public ComplexRead {
  DT_VARIABLEARRAY<Marker> tMarkerSet;
  DT_UINT dwMarkerSetFlags;
  DT_GBID<0x4> nLabel;
  DT_SNO<SnoGroup::Condition> unk_677237e;
  DT_VARIABLEARRAY<t70e5b8b6> unk_6d7f2e9;
  DT_INT64 unk_db67c2c;
  DT_VARIABLEARRAY<t79fa66b0> ptChunks;
  DT_VARIABLEARRAY<t9e555889> unk_a3613db;
  DT_VARIABLEARRAY<t6ee9427a> unk_6458d11;
  tc8d78ce7 unk_2bbd1d;
  DT_VARIABLEARRAY<DT_BYTE> unk_69b6741;
  DT_INT unk_2f217b0;
  DT_INT64 unk_d0a9662;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
