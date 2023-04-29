/**
 * Definition: te1f41032
 * Hash: e1f41032
 */

#pragma once

#include "../types.h"
#include "t5f527528.h"

#pragma push(pack, 1)

struct te1f41032 : public ComplexRead {
  t5f527528 m_localTransform;
  t5f527528 m_transform1;
  t5f527528 m_transform2;
  DT_VECTOR4D m_scale;
  DT_VECTOR4D m_invScale;
  DT_VECTOR4D unk_fe69d65;
  DT_VECTOR4D m_params;
  DT_WORD m_type;
  DT_WORD m_boneIndex;
  DT_FIXEDARRAY<DT_WORD, 6> m_padding;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
