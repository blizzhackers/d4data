/**
 * Definition: SurfaceDefinition
 * Hash: e6116fb2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SurfaceDefinition : public ComplexRead {
  DT_SNO<SnoGroup::EffectGroup> unk_5ed6d0f;
  DT_SNO<SnoGroup::EffectGroup> unk_c79c39c;
  DT_SNO<SnoGroup::EffectGroup> unk_c20fecf;
  DT_SNO<SnoGroup::EffectGroup> hStructure;
  DT_SNO<SnoGroup::EffectGroup> unk_4a68208;
  DT_SNO<SnoGroup::Particle> unk_45ad51c;
  DT_SNO<SnoGroup::Particle> unk_24404f;
  DT_SNO<SnoGroup::EffectGroup> unk_405f72f;
  DT_SNO<SnoGroup::EffectGroup> unk_3972ad;
  DT_SNO<SnoGroup::EffectGroup> unk_1f8c560;
  DT_SNO<SnoGroup::Surface> unk_d57a372;
  DT_SNO<SnoGroup::Surface> unk_4b222fd;
  DT_INT unk_4a8480e;
  DT_INT fGrass;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
