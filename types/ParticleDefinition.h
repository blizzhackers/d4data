/**
 * Definition: ParticleDefinition
 * Hash: 7fe2e83d
 */

#pragma once

#include "../types.h"
#include "InterpolationScalar.h"
#include "LookLink.h"
#include "VectorPath.h"
#include "bcQuat.h"
#include "t560ae4cf.h"
#include "tcbfdd2ea.h"
#include "tcc354444.h"
#include "te05729ef.h"

#pragma push(pack, 1)

struct ParticleDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_UINT dwFlags;
  DT_UINT dwFlagsEx;
  DT_UINT unk_75794f7;
  DT_FLOAT tSystemDuration;
  DT_FLOAT tOutroDuration;
  DT_FLOAT tPrepumpDuration;
  DT_ENUM<DT_INT> unk_768e7b0;
  DT_ENUM<DT_INT> unk_d59152e;
  InterpolationScalar tSystemDurationScalar;
  DT_VARIABLEARRAY<tcbfdd2ea> pathSystemScale;
  DT_VARIABLEARRAY<tcc354444> pathSystemCount;
  DT_VARIABLEARRAY<tcc354444> unk_63560e2;
  DT_VARIABLEARRAY<tcbfdd2ea> pathSystemAlpha;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_4acb006;
  DT_VARIABLEARRAY<tcbfdd2ea> pathParticleDuration;
  DT_VARIABLEARRAY<tcbfdd2ea> pathInitialScale;
  DT_VARIABLEARRAY<tcbfdd2ea> pathInitialSourceRelativeSpread;
  DT_VARIABLEARRAY<VectorPath> pathInitialSourceRelativeVelocity;
  DT_VARIABLEARRAY<VectorPath> pathInitialWorldRelativeVelocity;
  DT_VARIABLEARRAY<VectorPath> unk_8535190;
  DT_VARIABLEARRAY<tcbfdd2ea> pathSystemSpawnRate;
  DT_VARIABLEARRAY<tcbfdd2ea> pathSystemSpeedSpawnRate;
  DT_VARIABLEARRAY<tcbfdd2ea> pathSystemSpeedDurationFactor;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_e44919;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_5e70a3d;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_f627bde;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_475af70;
  DT_VARIABLEARRAY<VectorPath> unk_79fc11d;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_24aa41d;
  DT_SNO<SnoGroup::Material> snoMaterial;
  DT_SNO<SnoGroup::HoudiniParticleSim> unk_8e9800;
  DT_SNO<SnoGroup::Physics> snoPhysics;
  DT_SNO<SnoGroup::EffectGroup> unk_172022;
  DT_FLOAT unk_72a45fa;
  DT_FLOAT flWindFactor;
  DT_FLOAT flExplosionFactor;
  DT_FLOAT unk_a90d991;
  DT_FLOAT flMass;
  DT_UINT dwMaxSystems;
  DT_FLOAT unk_12ce589;
  DT_FLOAT flClutterZOffset;
  DT_SNO<SnoGroup::Actor> snoActor;
  LookLink tLookLink;
  DT_UINT unk_6c0cb90;
  bcQuat unk_fabd80a;
  DT_POLYMORPHIC_VARIABLEARRAY ptEmitter;
  DT_VARIABLEARRAY<t560ae4cf> pathParticleColor;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_a748ce7;
  DT_VARIABLEARRAY<tcbfdd2ea> pathParticleAlpha;
  DT_VARIABLEARRAY<tcbfdd2ea> pathParticleAlphaAux;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_ed6436f;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_68b6b45;
  DT_VARIABLEARRAY<tcbfdd2ea> pathParticleScale;
  DT_VARIABLEARRAY<VectorPath> unk_b92bb9a;
  DT_VARIABLEARRAY<tcbfdd2ea> pathAngularPosition;
  DT_VARIABLEARRAY<tcbfdd2ea> pathAngularVelocity;
  DT_VARIABLEARRAY<tcbfdd2ea> pathOrientationVelocity;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_2d865ba;
  DT_VARIABLEARRAY<tcbfdd2ea> pathOrientationPosition;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_8c4fe0;
  DT_VARIABLEARRAY<VectorPath> pathOrientationAxis;
  DT_VARIABLEARRAY<VectorPath> unk_a68a7e0;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_a8c5217;
  DT_VARIABLEARRAY<tcbfdd2ea> pathMotionCylinderRadialPos;
  DT_VARIABLEARRAY<tcbfdd2ea> pathMotionCylinderRadialVel;
  DT_VARIABLEARRAY<tcbfdd2ea> pathMotionCylinderAngleVel;
  DT_VARIABLEARRAY<VectorPath> pathMotionCylinderAxis;
  DT_VARIABLEARRAY<tcbfdd2ea> pathMotionSphereRadialPos;
  DT_VARIABLEARRAY<tcbfdd2ea> pathMotionSphereRadialVel;
  DT_VARIABLEARRAY<VectorPath> unk_3de401d;
  DT_VARIABLEARRAY<VectorPath> unk_3de5852;
  DT_VARIABLEARRAY<VectorPath> unk_3ddfeb2;
  DT_VARIABLEARRAY<VectorPath> pathMotionRelativeCartesianPos;
  DT_VARIABLEARRAY<VectorPath> pathMotionRelativeCartesianVel;
  DT_VARIABLEARRAY<VectorPath> pathMotionRelativeCartesianAcc;
  DT_VARIABLEARRAY<tcbfdd2ea> pathMotionAttractorVel;
  DT_VARIABLEARRAY<tcbfdd2ea> pathMotionAttractorPos;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_15ea201;
  DT_VARIABLEARRAY<VectorPath> unk_afccc6;
  DT_VARIABLEARRAY<VectorPath> unk_8dc0a2c;
  DT_ENUM<DT_INT> nFacing;
  DT_ENUM<DT_INT> eAlignment;
  DT_FLOAT wdBoundingRadius;
  DT_FLOAT unk_a79a409;
  DT_FLOAT unk_daaa964;
  DT_UINT unk_75de2ba;
  DT_UINT dwMaxSize;
  DT_FLOAT unk_3e0459a;
  DT_FLOAT unk_a0877a9;
  DT_FLOAT unk_63d7722;
  DT_SNO<SnoGroup::VectorField> snoVectorField;
  DT_VECTOR3D unk_a4cad4f;
  DT_ENUM<DT_INT> unk_817d767;
  DT_FLOAT unk_16aecc9;
  DT_VARIABLEARRAY<tcbfdd2ea> unk_8f7c9c1;
  DT_VARIABLEARRAY<VectorPath> unk_cddc4fd;
  DT_VARIABLEARRAY<VectorPath> unk_b4a20d4;
  DT_FLOAT unk_da1d404;
  DT_FLOAT unk_5a7f188;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
