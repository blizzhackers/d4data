/**
 * Definition: tcb8af5e5
 * Hash: cb8af5e5
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct tcb8af5e5 : public ComplexRead {
  RequiredMessageHeader tHeader;
  SharedServerWorldPlace wpPlace;
  DT_ENUM<DT_INT> unk_756ebc1;
  DT_INT unk_e4390f7;
  DT_INT unk_40f5b6;
  DT_ENUM<DT_INT> unk_71c18eb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
