/**
 * Definition: t7139371b
 * Hash: 7139371b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t7139371b : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_VECTOR3D wpPos;
  DT_INT unk_3e7e17e;
  DT_INT unk_de913dd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
