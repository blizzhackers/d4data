/**
 * Definition: t3248a683
 * Hash: 3248a683
 */

#pragma once

#include "../types.h"
#include "t560ae4cf.h"

#pragma push(pack, 1)

struct t3248a683 : public ComplexRead {
  DT_ENUM<DT_INT> eShape;
  DT_FLOAT flDensity;
  DT_FLOAT unk_a36833;
  DT_FLOAT unk_e596c58;
  DT_FLOAT unk_5050283;
  DT_FLOAT unk_6b7a77;
  DT_FLOAT unk_24f4837;
  DT_FLOAT unk_9e04ce9;
  DT_FLOAT unk_b8a40f6;
  DT_FLOAT unk_96578db;
  DT_FLOAT unk_92eef97;
  DT_FLOAT unk_b950bb6;
  DT_FLOAT unk_b345994;
  DT_FLOAT unk_4d7c109;
  DT_FLOAT unk_29ac45;
  DT_UINT unk_9ecb4e4;
  DT_ENUM<DT_INT> unk_56127ed;
  DT_FLOAT unk_69cc0f4;
  t560ae4cf unk_5838de5;
  DT_INT unk_3da7a7b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
