/**
 * Definition: LogoutContextMessage
 * Hash: 10890f04
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct LogoutContextMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eLogoutContext;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
