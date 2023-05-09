/**
 * Definition: SoundDefinition
 * Hash: cd43a1d2
 */

#pragma once

#include "../types.h"
#include "AttackerEnemiesParam.h"
#include "SoundPlayHistory.h"

#pragma push(pack, 1)

struct SoundDefinition : public ComplexRead {
  DT_UINT dwFlags;
  SoundPlayHistory tSoundPlayHistory;
  DT_SNO<SnoGroup::wWiseSoundBank> unk_4a3e716;
  DT_SNO<SnoGroup::wWiseSoundBank> unk_3b6cc35;
  DT_UINT unk_fec55de;
  DT_UINT unk_ecacdd7;
  DT_FLOAT flMaxRange;
  DT_VARIABLEARRAY<AttackerEnemiesParam> unk_5757423;
  DT_SNO<SnoGroup::Sound> unk_9c9c95f;
  DT_FLOAT unk_d17a11d;
  DT_INT unk_dc0bc5b;
  DT_FLOAT unk_7c7f1a2;
  DT_FLOAT flDopplerFactor;
  DT_FLOAT unk_f056ee9;
  DT_FLOAT unk_f056deb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
