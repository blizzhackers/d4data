/**
 * Definition: UberMaterial
 * Hash: 167967fd
 */

#pragma once

#include "../types.h"
#include "Material.h"
#include "MaterialTextureEntry.h"
#include "t4d7ce083.h"

#pragma push(pack, 1)

struct UberMaterial : public ComplexRead {
  DT_SNO<SnoGroup::ShaderMap> snoShaderMap;
  DT_SNO<SnoGroup::MaterialValueSet> unk_78ed128;
  Material mat;
  DT_VARIABLEARRAY<MaterialTextureEntry> ptMatTexList;
  DT_VARIABLEARRAY<t4d7ce083> unk_b0425e7;
  DT_INT nTexAnimStateCount;
  DT_INT unk_8702594;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
