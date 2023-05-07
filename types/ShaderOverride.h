/**
 * Definition: ShaderOverride
 * Hash: e80241b7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ShaderOverride : public ComplexRead {
  DT_UINT unk_6c0cb90;
  DT_SNO<SnoGroup::Shader> unk_b7593d9;
  DT_SNO<SnoGroup::Shader> unk_b8d46b;
  DT_SNO<SnoGroup::Shader> unk_ef17f0b;
  DT_SNO<SnoGroup::Shader> unk_71e61d;
  DT_SNO<SnoGroup::Shader> unk_aec0875;
  DT_SNO<SnoGroup::Shader> unk_24ebc07;
  DT_SNO<SnoGroup::Shader> snoHighlight;
  DT_SNO<SnoGroup::Shader> unk_5f72810;
  DT_SNO<SnoGroup::Shader> snoOccluded;
  DT_SNO<SnoGroup::Shader> snoDepth;
  DT_SNO<SnoGroup::Shader> snoCookie;
  DT_SNO<SnoGroup::Shader> unk_49badc;
  DT_SNO<SnoGroup::Shader> snoUIRActor;
  DT_SNO<SnoGroup::Shader> unk_d2ef4a4;
  DT_SNO<SnoGroup::Shader> unk_445df1d;
  DT_SNO<SnoGroup::Shader> unk_34304af;
  DT_SNO<SnoGroup::Shader> snoPowerCenters;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
