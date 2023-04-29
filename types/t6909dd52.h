/**
 * Definition: t6909dd52
 * Hash: 6909dd52
 */

#pragma once

#include "../types.h"
#include "t7ff0fb14.h"
#include "t8d06aec1.h"
#include "ta5c62f55.h"
#include "tac30acdf.h"
#include "tb76a31b5.h"
#include "tc2ce8583.h"
#include "te1f41032.h"

#pragma push(pack, 1)

struct t6909dd52 : public ComplexRead {
  tac30acdf unk_3c1684f;
  DT_VARIABLEARRAY<tc2ce8583> ptVertices;
  DT_VARIABLEARRAY<t7ff0fb14> ptFaces;
  DT_VARIABLEARRAY<ta5c62f55> ptDistanceConstraints;
  DT_VARIABLEARRAY<t8d06aec1> ptBendingConstraints;
  DT_VARIABLEARRAY<DT_WORD> unk_28c4640;
  DT_VARIABLEARRAY<te1f41032> ptCapsules;
  DT_VARIABLEARRAY<tb76a31b5> ptPlanes;
  DT_VARIABLEARRAY<DT_WORD> unk_a51816d;
  DT_VARIABLEARRAY<DT_WORD> unk_4b1b0fd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
