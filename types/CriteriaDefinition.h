/**
 * Definition: CriteriaDefinition
 * Hash: cca0949c
 */

#pragma once

#include "../types.h"
#include "CriteriaEvent.h"
#include "CriteriaStartEvent.h"

#pragma push(pack, 1)

struct CriteriaDefinition : public ComplexRead {
  DT_UINT uID;
  DT_INT64 unk_697fa81;
  CriteriaStartEvent tStartEvent;
  CriteriaEvent unk_6e292a8;
  CriteriaEvent unk_7756d52;
  DT_UINT uFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
