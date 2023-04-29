/**
 * Definition: SceneChunk
 * Hash: 959c51c7
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "SceneSpecification.h"

#pragma push(pack, 1)

struct SceneChunk : public ComplexRead {
  DT_SNO<SnoGroup::Scene> snoname;
  PRTransform transform;
  SceneSpecification tSceneSpec;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
