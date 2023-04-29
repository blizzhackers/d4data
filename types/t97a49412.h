/**
 * Definition: t97a49412
 * Hash: 97a49412
 */

#pragma once

#include "../types.h"
#include "tbeb0662c.h"

#pragma push(pack, 1)

struct t97a49412 : public ComplexRead {
  DT_ENUM<DT_INT> unk_e7b35bd;
  DT_VARIABLEARRAY<tbeb0662c> unk_9927a72;
  DT_VARIABLEARRAY<tbeb0662c> unk_f745539;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
