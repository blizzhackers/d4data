/**
 * Definition: ShaderMapDefinition
 * Hash: d04bbdfe
 */

#pragma once

#include "../types.h"
#include "te80241b7.h"

#pragma push(pack, 1)

struct ShaderMapDefinition : public ComplexRead {
  DT_SNO<SnoGroup::Shader> unk_b8d46b;
  DT_SNO<SnoGroup::Shader> unk_71e61d;
  DT_SNO<SnoGroup::Shader> unk_24ebc07;
  DT_SNO<SnoGroup::Shader> unk_34304af;
  DT_VARIABLEARRAY<te80241b7> unk_c83f99d;
  DT_TAGMAP<DT_INT> unk_54bea5a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
