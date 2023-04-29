/**
 * Definition: t119013b9
 * Hash: 119013b9
 */

#pragma once

#include "../types.h"
#include "t11949807.h"
#include "t4a900441.h"
#include "t4b2817b7.h"
#include "t4bade1b0.h"
#include "t85063c83.h"

#pragma push(pack, 1)

struct t119013b9 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_INT unk_d8d2509;
  DT_INT unk_b677151;
  DT_SNO<SnoGroup::Material> unk_633271a;
  DT_FLOAT flSystemDuration;
  t4a900441 unk_2f42898;
  DT_VARIABLEARRAY<t4bade1b0> unk_9ca448c;
  DT_VARIABLEARRAY<DT_WORD> arIndices;
  DT_INT unk_b130897;
  DT_INT unk_f481a51;
  DT_VARIABLEARRAY<t4b2817b7> unk_97ed4ea;
  DT_VARIABLEARRAY<t85063c83> unk_15864c9;
  DT_VARIABLEARRAY<t11949807> arLines;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
