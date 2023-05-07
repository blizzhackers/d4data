/**
 * Definition: AnimPermutation
 * Hash: 50fc055d
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "PRTransform.h"
#include "t89e36869.h"
#include "t97a49412.h"
#include "t9e8134dc.h"
#include "te050809c.h"
#include "tec5df525.h"

#pragma push(pack, 1)

struct AnimPermutation : public ComplexRead {
  DT_UINT uID;
  DT_UINT dwFlags;
  DT_FLOAT flFrameRate;
  DT_FLOAT flCompression;
  DT_FLOAT dwBlendTime;
  DT_FLOAT unk_fe5755e;
  DT_ENUM<DT_INT> unk_48e16cf;
  DT_UINT dwWeight;
  DT_RANGE<DT_INT> unk_f2bdc14;
  DT_INT nBoneCount;
  DT_VARIABLEARRAY<t89e36869> ptPayloadData;
  DT_UINT tPhaseName;
  DT_ENUM<DT_INT> unk_57e56e2;
  DT_FIXEDARRAY<te050809c, 4> arContactFrames;
  DT_VARIABLEARRAY<tec5df525> unk_df9a366;
  DT_VARIABLEARRAY<t97a49412> unk_f0fe405;
  DT_FLOAT unk_c61b9d1;
  DT_FIXEDARRAY<DT_INT, 4> unk_6e16fde;
  DT_RANGE<DT_INT> unk_75e1ebe;
  DT_RANGE<DT_INT> unk_f14b63c;
  DT_INT unk_ddce6df;
  DT_ENUM<DT_INT> unk_f269e88;
  DT_FLOAT unk_96cb676;
  DT_FLOAT unk_bb41f8;
  DT_FLOAT unk_4f89e54;
  DT_FLOAT unk_40c83b5;
  DT_FLOAT unk_41ae864;
  DT_ENUM<DT_INT> unk_f219e46;
  DT_INT unk_acf4ed5;
  DT_INT unk_779d247;
  DT_BYTE unk_e774a13;
  DT_INT nKeyframeCount;
  DT_UINT unk_3068b27;
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;
  DT_INT unk_2e355dd;
  DT_INT unk_536659a;
  DT_INT unk_b4c58a6;
  DT_VARIABLEARRAY<t9e8134dc> unk_4b39bee;
  DT_VECTOR3D wvAvgVel;
  PRTransform unk_57d4879;
  HardpointLink tHardpointLink;
  DT_FLOAT unk_bd4a157;
  DT_UINT unk_a3acec8;
  DT_INT64 pnAnimToStructure;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
