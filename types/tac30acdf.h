/**
 * Definition: tac30acdf
 * Hash: ac30acdf
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tac30acdf : public ComplexRead {
  DT_INT64 m_aVertices;
  DT_INT64 unk_522b0f;
  DT_INT64 unk_1c9f1d0;
  DT_INT64 unk_39bf0fc;
  DT_INT64 unk_23a39c9;
  DT_INT64 m_aCapsules;
  DT_INT64 m_aPlanes;
  DT_INT64 unk_15437b6;
  DT_INT64 unk_45fa486;
  DT_FIXEDARRAY<DT_BYTE, 32> m_name;
  DT_INT m_vertexCount;
  DT_INT m_faceCount;
  DT_INT unk_d4fc6fe;
  DT_INT unk_357cf65;
  DT_INT unk_e4594b1;
  DT_INT unk_4c2d410;
  DT_INT unk_5f25c6;
  DT_INT m_boneCount;
  DT_INT unk_b7a310;
  DT_INT unk_19d5862;
  DT_INT m_planeCount;
  DT_FLOAT m_area;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
