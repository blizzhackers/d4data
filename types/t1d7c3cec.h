/**
 * Definition: t1d7c3cec
 * Hash: 1d7c3cec
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1d7c3cec : public ComplexRead {
  DT_SNO<SnoGroup::Shader> snoShader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
