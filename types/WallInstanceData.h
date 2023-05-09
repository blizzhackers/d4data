/**
 * Definition: WallInstanceData
 * Hash: e25fcbdf
 */

#pragma once

#include "../types.h"
#include "WallCornerPieces.h"
#include "tbc07d3c7.h"
#include "te6b22340.h"

#pragma push(pack, 1)

struct WallInstanceData : public ComplexRead {
  DT_VARIABLEARRAY<te6b22340> unk_e246d5a;
  WallCornerPieces tCornerPieces;
  DT_VARIABLEARRAY<tbc07d3c7> unk_7b78b21;
  DT_VARIABLEARRAY<tbc07d3c7> unk_3bd1636;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
