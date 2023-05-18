/**
 * Definition: IKFrames
 * Hash: 97a49412
 */

#pragma once

#include "../types.h"
#include "IKWindow.h"

#pragma push(pack, 1)

struct IKFrames : public ComplexRead {
  DT_ENUM<DT_INT> unk_e7b35bd;
  DT_VARIABLEARRAY<IKWindow> arIKWindows;
  DT_VARIABLEARRAY<IKWindow> unk_f745539;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
