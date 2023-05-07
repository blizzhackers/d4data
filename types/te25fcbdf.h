/**
 * Definition: te25fcbdf
 * Hash: e25fcbdf
 */

#pragma once

#include "../types.h"
#include "t3c0bdd72.h"
#include "tbc07d3c7.h"
#include "te6b22340.h"

#pragma push(pack, 1)

struct te25fcbdf : public ComplexRead {
  DT_VARIABLEARRAY<te6b22340> unk_e246d5a;
  t3c0bdd72 tCornerPieces;
  DT_VARIABLEARRAY<tbc07d3c7> unk_7b78b21;
  DT_VARIABLEARRAY<tbc07d3c7> unk_3bd1636;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
