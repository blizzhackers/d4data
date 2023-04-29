/**
 * Definition: t7971fde1
 * Hash: 7971fde1
 */

#pragma once

#include "../types.h"
#include "t6889f334.h"

#pragma push(pack, 1)

struct t7971fde1 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_STARTLOC_NAME dwEntranceName;
  DT_UINT hZoneLabel;
  DT_SNO<SnoGroup::Quest> unk_92edf50;
  DT_FIXEDARRAY<t6889f334, 4> unk_ede880e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
