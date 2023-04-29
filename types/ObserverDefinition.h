/**
 * Definition: ObserverDefinition
 * Hash: 809c191
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ObserverDefinition : public ComplexRead {
  DT_FLOAT unk_36650c;
  DT_VECTOR3D wvLookAtOffsetVector;
  DT_VECTOR3D wvCameraOffsetVector;
  DT_INT unk_5a947a6;
  DT_VECTOR3D unk_5c0680d;
  DT_FLOAT unk_9dab378;
  DT_FLOAT unk_3fe5936;
  DT_FLOAT unk_c9a32ec;
  DT_FLOAT tQuestStackInfoMessage;
  DT_INT fOrthographic;
  DT_FLOAT unk_b046307;
  DT_FLOAT unk_cc38bbe;
  DT_FLOAT unk_101b2fc;
  DT_FLOAT unk_6749d34;
  DT_FLOAT unk_839bfef;
  DT_FLOAT flZFar;
  DT_FLOAT flHeight;
  DT_FLOAT unk_3853352;
  DT_FLOAT unk_76194b5;
  DT_FLOAT unk_551d996;
  DT_FLOAT unk_e8a7758;
  DT_FLOAT unk_4f566f0;
  DT_FLOAT unk_4771732;
  DT_FLOAT unk_af07896;
  DT_FLOAT unk_9fb28df;
  DT_FLOAT unk_f4da6b2;
  DT_FLOAT unk_483b79;
  DT_FLOAT unk_57e840d;
  DT_FLOAT unk_d6fad4;
  DT_FLOAT unk_6b455b8;
  DT_FLOAT unk_15b7944;
  DT_FLOAT unk_d2b3efc;
  DT_INT unk_de62f5a;
  DT_FLOAT unk_9e17f0a;
  DT_FLOAT unk_8f82b03;
  DT_FLOAT unk_777445b;
  DT_FLOAT unk_ca6f9df;
  DT_FLOAT unk_ee8e3a;
  DT_FLOAT unk_e45f065;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
