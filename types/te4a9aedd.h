/**
 * Definition: te4a9aedd
 * Hash: e4a9aedd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te4a9aedd : public ComplexRead {
  DT_UINT unk_2e9817a;
  DT_UINT unk_c5ca709;
  DT_UINT hNotificationIcon;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
