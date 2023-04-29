/**
 * Definition: t7aba675a
 * Hash: 7aba675a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7aba675a : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoItem;
  DT_INT bDrawSockets;
  DT_INT unk_6ca9d52;
  DT_INT bDrawBackground;
  DT_INT unk_c67f281;
  DT_INT unk_ce38d55;
  DT_INT unk_a29eae9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
