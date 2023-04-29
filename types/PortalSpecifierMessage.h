/**
 * Definition: PortalSpecifierMessage
 * Hash: cc815fd1
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "ResolvedPortalDestination.h"

#pragma push(pack, 1)

struct PortalSpecifierMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  ResolvedPortalDestination tResolvedDest;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
