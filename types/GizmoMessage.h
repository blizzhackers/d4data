/**
 * Definition: GizmoMessage
 * Hash: 5854dbab
 */

#pragma once

#include "../types.h"
#include "tb0f2a959.h"

#pragma push(pack, 1)

struct GizmoMessage : public ComplexRead {
  tb0f2a959 tHeader;
  DT_ACD_NETWORK_NAME unk_e4fae63;
  DT_OPTIONAL<DT_INT> unk_7cc2566;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
