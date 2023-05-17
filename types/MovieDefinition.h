/**
 * Definition: MovieDefinition
 * Hash: d991fb29
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MovieDefinition : public ComplexRead {
  DT_SNO<SnoGroup::wWiseSoundBank> snoAudioTrack;
  DT_SNO<SnoGroup::StringList> snoSubtitles;
  DT_SNO<SnoGroup::StringList> unk_944e28b;
  DT_UINT unk_19d005e;
  DT_FLOAT unk_1426000;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
