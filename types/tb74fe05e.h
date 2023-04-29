/**
 * Definition: tb74fe05e
 * Hash: b74fe05e
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tb74fe05e : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> idQuest;
  DT_INT unk_d0089db;
  DT_INT nMonstersKilled;
  DT_INT unk_736a201;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
