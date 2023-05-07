/**
 * Definition: RenderPass
 * Hash: ca59c137
 */

#pragma once

#include "../types.h"
#include "RenderParams.h"
#include "ShaderPermutation.h"
#include "t30511dbc.h"
#include "t8e0085.h"
#include "td7ee8f26.h"
#include "tea252ba2.h"
#include "teb98da06.h"
#include "tf58f01c3.h"

#pragma push(pack, 1)

struct RenderPass : public ComplexRead {
  DT_ENUM<DT_INT> eRenderLayer;
  DT_ENUM<DT_INT> unk_39c46d9;
  RenderParams tRenderParams;
  DT_VARIABLEARRAY<t8e0085> unk_6276112;
  DT_UINT dwFlags;
  DT_UINT unk_262684c;
  DT_ENUM<DT_INT> unk_c23801f;
  DT_INT64 ptPostprocessed;
  DT_VARIABLEARRAY<DT_UINT> unk_295833;
  DT_VARIABLEARRAY<ShaderPermutation> ptPerms;
  DT_VARIABLEARRAY<teb98da06> unk_e39f53a;
  DT_VARIABLEARRAY<tf58f01c3> unk_247b377;
  DT_VARIABLEARRAY<td7ee8f26> unk_1484b5a;
  DT_VARIABLEARRAY<tea252ba2> unk_864909d;
  DT_VARIABLEARRAY<t30511dbc> unk_9068982;
  DT_TAGMAP<DT_INT> unk_282b17c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
