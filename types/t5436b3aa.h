/**
 * Definition: t5436b3aa
 * Hash: 5436b3aa
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5436b3aa : public ComplexRead {
  DT_FIXEDARRAY<DT_INT, 13> fVendor;
  DT_FIXEDARRAY<DT_INT, 5> fCrafter;
  DT_INT unk_2922760;
  DT_INT unk_8ff5457;
  DT_INT unk_b0256b7;
  DT_INT fStash;
  DT_INT unk_3767c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
