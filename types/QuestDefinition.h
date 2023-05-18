/**
 * Definition: QuestDefinition
 * Hash: 3ed1aefb
 */

#pragma once

#include "../types.h"
#include "MarkerHandle.h"
#include "QuestFollower.h"
#include "tab2d8e94.h"

#pragma push(pack, 1)

struct QuestDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eQuestType;
  DT_ENUM<DT_INT> unk_f88ee86;
  DT_ENUM<DT_INT> unk_4c4339b;
  DT_ENUM<DT_INT> unk_f522ece;
  DT_ENUM<DT_INT> eRepeatType;
  DT_ENUM<DT_INT> unk_46224d;
  DT_INT unk_43f3849;
  DT_INT unk_48a2b16;
  MarkerHandle unk_d060a69;
  DT_VECTOR3D vecStartLocation;
  DT_SNO<SnoGroup::World> unk_6a4ec7f;
  MarkerHandle unk_c2e8448;
  DT_VECTOR3D unk_ff5c704;
  DT_SNO<SnoGroup::World> unk_506369e;
  DT_STARTLOC_NAME unk_d2181f0;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_INT unk_f956a05;
  DT_INT unk_14dee1b;
  DT_FLOAT unk_c694251;
  DT_FLOAT unk_8881b0e;
  DT_UINT dwNextUID;
  DT_INT unk_b89b77f;
  DT_INT unk_c18cabd;
  DT_ENUM<DT_INT> unk_79f6e17;
  DT_GBID<0x3c> gbidSubzoneModifierTag;
  DT_SNO<SnoGroup::SubZone> unk_6199257;
  DT_ENUM<DT_INT> unk_f322c3a;
  DT_ENUM<DT_INT> eBountyType;
  DT_INT unk_313dbf6;
  DT_UINT unk_834fdbf;
  DT_ENUM<DT_INT> unk_b83e7b1;
  DT_INT unk_942bcdb;
  DT_UINT dwFlags;
  DT_POLYMORPHIC_VARIABLEARRAY arQuestPhases;
  DT_VARIABLEARRAY<tab2d8e94> unk_1755172;
  DT_VARIABLEARRAY<tab2d8e94> unk_3367716;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Quest>> unk_46e3956;
  DT_SNO<SnoGroup::Condition> unk_56f8e05;
  DT_CSTRING unk_c47e01a;
  DT_CSTRING unk_993f312;
  DT_CSTRING unk_39af3bb;
  DT_CSTRING unk_857ebd2;
  DT_CSTRING unk_556de93;
  DT_VARIABLEARRAY<QuestFollower> arFollowers;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Item>> arQuestItems;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::World>> arQuestDungeons;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Quest>> unk_2aa5f20;
  DT_VARIABLEARRAY<DT_GBID<0x2d>> unk_b43b442;
  DT_GBID<0x39> gbidSurveyType;
  DT_GBID<0x39> unk_b37e635;
  DT_SNO<SnoGroup::AudioContext> snoAudioContext;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Item>> unk_af3a4c1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
