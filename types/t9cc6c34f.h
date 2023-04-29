/**
 * Definition: t9cc6c34f
 * Hash: 9cc6c34f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t3cb27fa1.h"
#include "t59bc9f5c.h"
#include "ta092f30f.h"
#include "ta421b9d5.h"
#include "tad528067.h"

#pragma push(pack, 1)

struct t9cc6c34f : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_FIXEDARRAY<DT_SNO_NAME, 16> unk_39ae9c2;
  DT_OPTIONAL<DT_INT> unk_ed94303;
  DT_OPTIONAL<DT_INT> unk_5cc9c95;
  DT_OPTIONAL<DT_INT> unk_462cedb;
  DT_OPTIONAL<DT_INT> unk_61a5ad0;
  DT_OPTIONAL<DT_INT> unk_223db49;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
