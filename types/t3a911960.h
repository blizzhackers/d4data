/**
 * Definition: t3a911960
 * Hash: 3a911960
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3a911960 : public ComplexRead {
  DT_INT64 unk_c888ba2;
  DT_INT64 unk_c7a1a19;
  DT_INT64 unk_1655a99;
  DT_INT64 unk_beb2dc0;
  DT_INT64 unk_55f9a53;
  DT_INT64 unk_9164a48;
  DT_INT64 levels;
  DT_INT64 unk_acb7bbe;
  DT_INT64 unk_7cb2889;
  DT_INT64 unk_10ff14c;
  DT_INT64 unk_bb3ab10;
  DT_INT64 unk_b9196fb;
  DT_INT64 unk_999e338;
  DT_INT64 unk_bd72f29;
  DT_INT64 triangles;
  DT_INT64 unk_64b9c64;
  DT_INT64 unk_8f009fa;
  DT_INT64 unk_d55a167;
  DT_INT64 unk_e5fff43;
  DT_INT64 unk_4816b6f;
  DT_INT64 unk_b6736eb;
  DT_INT64 unk_7a84b88;
  DT_INT64 unk_ffe06ee;
  DT_INT64 unk_474bf2f;
  DT_INT64 unk_4ea6992;
  DT_INT64 unk_4fdc600;
  DT_INT64 unk_334188a;
  DT_FIXEDARRAY<DT_BYTE, 32> name;
  DT_FLOAT density;
  DT_WORD vertexCount;
  DT_WORD unk_95c242c;
  DT_WORD kinematicCount;
  DT_WORD triangleCount;
  DT_WORD unk_1f1d125;
  DT_WORD unk_588faa1;
  DT_WORD unk_f4d15be;
  DT_WORD unk_93e1424;
  DT_WORD constraintCount;
  DT_WORD unk_9460e91;
  DT_WORD unk_5c605e;
  DT_WORD unk_c48fa8d;
  DT_WORD unk_fef3f35;
  DT_WORD unk_30047f6;
  DT_WORD planeCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
