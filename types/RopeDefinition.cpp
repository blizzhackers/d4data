/**
 * Definition: RopeDefinition
 * Hash: 31ddbbff
 */

#include "RopeDefinition.h"

void RopeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwRopeFlags, base, ptr);
  readData(&nWidth, base, ptr);
  readData(&unk_d5039e2, base, ptr);
  readData(&unk_5be6305, base, ptr);
  readData(&flLength, base, ptr);
  readData(&flMass, base, ptr);
  readData(&flMassTaperFactor, base, ptr);
  readData(&flMassEnd, base, ptr);
  readData(&fTextureRepeatCount, base, ptr);
  readData(&unk_7a4a8e6, base, ptr);
  readData(&unk_faa043c, base, ptr);
  readData(&unk_daaa964, base, ptr);
  readData(&flStiffness, base, ptr);
  readData(&unk_e590d3c, base, ptr);
  readData(&unk_24547d4, base, ptr);
  readData(&snoMaterial, base, ptr);
  readData(&snoPhysics, base, ptr);
  readData(&flWindFactor, base, ptr);
  readData(&unk_cc2f90c, base, ptr);
  readData(&tSystemDurationScalar, base, ptr);
  readData(&flOutroDuration, base, ptr);
  readData(&pathColorOverTime, base, ptr);
  readData(&pathColorOverLength, base, ptr);
  readData(&pathAlpha, base, ptr);
  readData(&pathAlphaOverLength, base, ptr);
  readData(&unk_ab00250, base, ptr);
  readData(&unk_3c8d383, base, ptr);
  readData(&unk_d96e4e6, base, ptr);
  readData(&unk_bf2b399, base, ptr);
  readData(&unk_abcab5e, base, ptr);
  readData(&unk_9a3f811, base, ptr);
  readData(&unk_3a6dc3c, base, ptr);
  readData(&unk_5ddd86f, base, ptr);
  readData(&pathWidthOverTime, base, ptr);
  readData(&pathWidthOverLength, base, ptr);
  readData(&pathSourcePointWorldUpMotion, base, ptr);
  readData(&pathSourcePointAlongRopeMotion, base, ptr);
  readData(&pathSourcePointPerpendicularMotion, base, ptr);
  readData(&unk_fd2b7ac, base, ptr);
  readData(&pathDestPointWorldUpMotion, base, ptr);
  readData(&pathDestPointAlongRopeMotion, base, ptr);
  readData(&pathDestPointPerpendicularMotion, base, ptr);
  readData(&pathSeparation, base, ptr);
  readData(&pathXAmpOverLength, base, ptr);
  readData(&pathYAmpOverLength, base, ptr);
  readData(&hUI_Dye, base, ptr);
  readData(&unk_3e97148, base, ptr);
  readData(&pathFreqOverTime, base, ptr);
  readData(&pathPhaseSpeedOverTime, base, ptr);
  readData(&unk_e85eb5, base, ptr);
  readData(&unk_f7381a2, base, ptr);
  readData(&unk_bc10ec1, base, ptr);
  readData(&unk_6a3b8c1, base, ptr);
  readData(&unk_a74800e, base, ptr);
  readData(&unk_a85b95c, base, ptr);
  readData(&unk_910dc49, base, ptr);
  readData(&unk_fa52de8, base, ptr);
  readData(&unk_c44c7c8, base, ptr);
  readData(&unk_4a82155, base, ptr);
  readData(&unk_340e1fe, base, ptr);
  readData(&unk_93baab, base, ptr);
  readData(&unk_9979296, base, ptr);
  readData(&unk_5a2a13a, base, ptr);
  readData(&unk_1d019ab, base, ptr);
  readData(&ptMsgTriggeredEvents, base, ptr);
  readData(&dwMaxSystems, base, ptr);
}
