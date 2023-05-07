/**
 * Definition: DebugEventLogMessage
 * Hash: 23c42d70
 */

#pragma once

#include "../types.h"
#include "DebugEventLogMetaData.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct DebugEventLogMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<1000> szLogString;
  DT_INT64 unk_a23ac9b;
  DT_INT unk_6248a18;
  DT_FIXEDARRAY<DebugEventLogMetaData, 128> aMetaData;
  DT_OPTIONAL<DT_INT> ann;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
