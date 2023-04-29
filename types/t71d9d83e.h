/**
 * Definition: t71d9d83e
 * Hash: 71d9d83e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t71d9d83e : public ComplexRead {
  DT_FLOAT unk_3aee15f;
  DT_FLOAT unk_92b64ea;
  DT_FLOAT unk_a9bcc07;
  DT_FLOAT unk_9f7f279;
  DT_FLOAT unk_f627e78;
  DT_RGBACOLOR unk_98107be;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
