/**
 * Definition: t515b4f7e
 * Hash: 515b4f7e
 */

#pragma once

#include "../types.h"
#include "BoneStructure.h"
#include "ConstraintParameters.h"
#include "Hardpoint.h"
#include "HardpointLink.h"
#include "LookAtData.h"
#include "t4b7fb4ab.h"
#include "tafbcb96e.h"
#include "tdbcb04f3.h"
#include "tdc622f50.h"
#include "tdfc16fd.h"
#include "te1ac09b4.h"
#include "tf5cd87eb.h"
#include "tfbdf1440.h"

#pragma push(pack, 1)

struct t515b4f7e : public ComplexRead {
  DT_UINT unk_a3acec8;
  DT_INT unk_5db20d6;
  DT_VARIABLEARRAY<BoneStructure> ptBoneStructure;
  DT_INT unk_f25aed5;
  DT_INT unk_ad025d8;
  DT_FIXEDARRAY<tdbcb04f3, 7> unk_4118a82;
  DT_VARIABLEARRAY<tf5cd87eb> unk_73d52a2;
  LookAtData tLookAtData;
  tafbcb96e unk_12040e2;
  tfbdf1440 unk_42b03b4;
  t4b7fb4ab unk_d872b9f;
  DT_VARIABLEARRAY<Hardpoint> ptHardpoints;
  DT_VARIABLEARRAY<ConstraintParameters> ptLoopConstraints;
  DT_VARIABLEARRAY<HardpointLink> unk_eb48138;
  DT_VARIABLEARRAY<tdfc16fd> unk_248cf4;
  DT_VARIABLEARRAY<tdc622f50> unk_b6507e3;
  DT_VARIABLEARRAY<te1ac09b4> unk_214010b;
  DT_INT unk_b98787b;
  DT_UINT uRagdollDegrade;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
