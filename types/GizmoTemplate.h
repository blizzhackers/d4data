/**
 * Definition: GizmoTemplate
 * Hash: ca8dd6e2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct GizmoTemplate : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
