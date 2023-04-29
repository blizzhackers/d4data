/**
 * Definition: HelpCode
 * Hash: d53c56a4
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct HelpCode : public ComplexRead {
  ta78f399f tHeader;
  DT_GBID<0x9> unk_d35e7ff;
  DT_INT unk_e5a1921;
  DT_CHARARRAY<1024> szCommand;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
