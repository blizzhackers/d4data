/**
 * Definition: tb76a31b5
 * Hash: b76a31b5
 */

#pragma once

#include "../types.h"
#include "t5f527528.h"

#pragma push(pack, 1)

struct tb76a31b5 : public ComplexRead {
  t5f527528 m_transform1;
  t5f527528 m_transform2;
  t5f527528 m_localFrame;
  DT_VECTOR4D m_normal;
  DT_FLOAT unk_2252ea1;
  DT_FLOAT m_friction;
  DT_WORD m_boneIndex;
  DT_FIXEDARRAY<DT_WORD, 3> m_padding;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
