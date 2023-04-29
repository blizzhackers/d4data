/**
 * Definition: t510e333e
 * Hash: 510e333e
 */

#include "t510e333e.h"

void t510e333e::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_1bdcc9f, base, ptr);
  readData(&unk_f4fb70, base, ptr);
  readData(&unk_c208491, base, ptr);
  readData(&unk_eb2a4da, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_200dc25, base, ptr);
  readData(&wpTarget, base, ptr);
  readData(&wpTargetOffset, base, ptr);
  readData(&unk_81cd99f, base, ptr);
  readData(&unk_dc9436d, base, ptr);
  readData(&unk_dba0611, base, ptr);
  readData(&unk_379fce9, base, ptr);
  readData(&eSlot, base, ptr);
  readData(&tLocalSyncTransform, base, ptr);
  readData(&unk_c69d3ef, base, ptr);
  readData(&unk_f6c2065, base, ptr);
}
