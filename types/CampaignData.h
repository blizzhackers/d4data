/**
 * Definition: CampaignData
 * Hash: 1688c3da
 */

#pragma once

#include "../types.h"
#include "CampaignArc.h"

#pragma push(pack, 1)

struct CampaignData : public ComplexRead {
  DT_VARIABLEARRAY<CampaignArc> arCampaignArcs;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
