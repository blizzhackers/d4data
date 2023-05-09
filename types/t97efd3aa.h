/**
 * Definition: t97efd3aa
 * Hash: 97efd3aa
 */

#pragma once

#include "../types.h"
#include "DeathLookTemplate.h"
#include "DeathMaterialTemplate.h"
#include "DeathTemplate.h"
#include "GizmoTemplate.h"
#include "NpcTemplate.h"
#include "t146588b2.h"
#include "t14c5741.h"
#include "t17306730.h"
#include "t3ae42c67.h"
#include "t8f5adb75.h"
#include "tc1ccb782.h"

#pragma push(pack, 1)

struct t97efd3aa : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  t3ae42c67 unk_ceba35b;
  DT_VARIABLEARRAY<NpcTemplate> unk_e92903;
  DT_VARIABLEARRAY<tc1ccb782> unk_86e0b08;
  DT_VARIABLEARRAY<t146588b2> unk_c803258;
  DT_VARIABLEARRAY<t14c5741> unk_3733127;
  DT_VARIABLEARRAY<t17306730> unk_a47b076;
  DT_VARIABLEARRAY<t8f5adb75> unk_a884bb;
  DT_VARIABLEARRAY<GizmoTemplate> unk_23aedc8;
  DT_VARIABLEARRAY<DeathTemplate> unk_478f948;
  DT_VARIABLEARRAY<DeathLookTemplate> unk_8589d1d;
  DT_VARIABLEARRAY<DeathMaterialTemplate> unk_8959e97;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
