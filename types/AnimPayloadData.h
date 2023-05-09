/**
 * Definition: AnimPayloadData
 * Hash: 89e36869
 */

#pragma once

#include "../types.h"
#include "BoneName.h"
#include "RotationCurve.h"
#include "ScaleCurve.h"
#include "TranslationCurve.h"
#include "t354ce773.h"

#pragma push(pack, 1)

struct AnimPayloadData : public ComplexRead {
  DT_VARIABLEARRAY<BoneName> ptBoneNames;
  DT_VARIABLEARRAY<DT_FLOAT> unk_a9ead38;
  DT_VARIABLEARRAY<DT_FLOAT> unk_8c9e18f;
  DT_VARIABLEARRAY<DT_VECTOR3D> pwvNonlinearOffset;
  DT_VARIABLEARRAY<DT_VECTOR3D> unk_5cd81c8;
  DT_VARIABLEARRAY<DT_VECTOR3D> unk_fa7ecfb;
  DT_VARIABLEARRAY<DT_FLOAT> unk_28a8e7b;
  DT_VARIABLEARRAY<DT_FLOAT> unk_772730e;
  DT_VARIABLEARRAY<DT_FLOAT> unk_7c60205;
  DT_VARIABLEARRAY<t354ce773> unk_d77f652;
  DT_VARIABLEARRAY<TranslationCurve> ptTranslationCurves;
  DT_VARIABLEARRAY<RotationCurve> ptRotationCurves;
  DT_VARIABLEARRAY<ScaleCurve> ptScaleCurves;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
