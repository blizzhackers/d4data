/**
 * Definition: t9a7f9f7b
 * Hash: 9a7f9f7b
 */

#include "t9a7f9f7b.h"

void t9a7f9f7b::read(const char* base, char* &ptr) {
  readData(&tPitch, base, ptr);
  readData(&tYaw, base, ptr);
  readData(&tRoll, base, ptr);
  readData(&tTurret, base, ptr);
  readData(&tFOV, base, ptr);
  readData(&tMovementSpeed, base, ptr);
  readData(&unk_8023fd7, base, ptr);
  readData(&unk_6399d3e, base, ptr);
  readData(&unk_4256dac, base, ptr);
  readData(&unk_125c54c, base, ptr);
  readData(&unk_3294a2, base, ptr);
  readData(&unk_2f6e0dd, base, ptr);
  readData(&unk_ff7e332, base, ptr);
  readData(&unk_6e6acb6, base, ptr);
  readData(&unk_7122fb9, base, ptr);
  readData(&unk_71789fc, base, ptr);
}
