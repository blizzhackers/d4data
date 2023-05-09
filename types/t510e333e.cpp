/**
 * Definition: t510e333e
 * Hash: 510e333e
 */

#include "t510e333e.h"

void t510e333e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoPower, base, current);
  current = ptr + 0x1c;
  readData(&uCommandFrame, base, current);
  current = ptr + 0x20;
  readData(&unk_f4fb70, base, current);
  current = ptr + 0x2c;
  readData(&unk_c208491, base, current);
  current = ptr + 0x30;
  readData(&eInterruptReason, base, current);
  current = ptr + 0x38;
  readData(&dwFlags, base, current);
  current = ptr + 0x40;
  readData(&annTargetName, base, current);
  current = ptr + 0x4c;
  readData(&wpTarget, base, current);
  current = ptr + 0x64;
  readData(&wpTargetOffset, base, current);
  current = ptr + 0x74;
  readData(&unk_81cd99f, base, current);
  current = ptr + 0x80;
  readData(&unk_dc9436d, base, current);
  current = ptr + 0x88;
  readData(&unk_dba0611, base, current);
  current = ptr + 0x90;
  readData(&unk_379fce9, base, current);
  current = ptr + 0x98;
  readData(&eSlot, base, current);
  current = ptr + 0xa0;
  readData(&tLocalSyncTransform, base, current);
  current = ptr + 0xc0;
  readData(&unk_c69d3ef, base, current);
  current = ptr + 0xc8;
  readData(&unk_f6c2065, base, current);
  ptr += 0xd0;
}
