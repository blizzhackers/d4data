/**
 * Definition: ActivityDefinition
 * Hash: 97f97b16
 */

#pragma once

#include "../types.h"
#include "t5032d4ee.h"
#include "tc5310cce.h"

#pragma push(pack, 1)

struct ActivityDefinition : public ComplexRead {
  t5032d4ee tMetadata;
  tc5310cce tLinks;
  DT_SNO_NAME snoname;
  DT_UINT unk_a0a2ac5;
  DT_UINT unk_c2e08fe;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
