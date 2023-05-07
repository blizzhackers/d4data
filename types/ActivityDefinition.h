/**
 * Definition: ActivityDefinition
 * Hash: 97f97b16
 */

#pragma once

#include "../types.h"
#include "ActivityLinks.h"
#include "ActivityMetadata.h"

#pragma push(pack, 1)

struct ActivityDefinition : public ComplexRead {
  ActivityMetadata tMetadata;
  ActivityLinks tLinks;
  DT_SNO_NAME snoname;
  DT_UINT unk_a0a2ac5;
  DT_UINT unk_c2e08fe;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
