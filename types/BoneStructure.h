/**
 * Definition: BoneStructure
 * Hash: c7cfe3b5
 */

#pragma once

#include "../types.h"
#include "CollisionShape.h"
#include "ConstraintParameters.h"
#include "PRSTransform.h"
#include "Sphere.h"

#pragma push(pack, 1)

struct BoneStructure : public ComplexRead {
  DT_VARIABLEARRAY<CollisionShape> ptShapes;
  DT_VARIABLEARRAY<ConstraintParameters> ptConstraint;
  DT_UINT dwHash;
  DT_UINT dwFlags;
  DT_WORD nParentIndex;
  DT_WORD nLOD;
  DT_WORD unk_dfa5af1;
  DT_WORD unk_b03b557;
  DT_SNO<SnoGroup::Particle> snoParticleSystem;
  Sphere wsBounds;
  PRSTransform transform;
  PRSTransform transformInv;
  PRSTransform transformParentRel;
  PRSTransform unk_7659cea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
