/**
 * Definition: WaypointEffectInfo
 * Hash: 6889f334
 */

#include "WaypointEffectInfo.h"

void WaypointEffectInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_cc73a29, base, current);
  current = ptr + 0x4;
  readData(&unk_1e92da3, base, current);
  current = ptr + 0x8;
  readData(&unk_ef75357, base, current);
  current = ptr + 0xc;
  readData(&unk_e5f6510, base, current);
  current = ptr + 0x10;
  readData(&unk_258f62e, base, current);
  current = ptr + 0x14;
  readData(&unk_7bc440d, base, current);
  current = ptr + 0x18;
  readData(&unk_b8b4636, base, current);
  current = ptr + 0x1c;
  readData(&unk_86403ef, base, current);
  current = ptr + 0x20;
  readData(&unk_f0eaae5, base, current);
  current = ptr + 0x24;
  readData(&unk_e0a3943, base, current);
  current = ptr + 0x28;
  readData(&unk_9c071e3, base, current);
  current = ptr + 0x2c;
  readData(&unk_4bd94b4, base, current);
  current = ptr + 0x30;
  readData(&unk_69b2ec7, base, current);
  current = ptr + 0x34;
  readData(&unk_449111f, base, current);
  current = ptr + 0x38;
  readData(&unk_c8bc6b0, base, current);
  current = ptr + 0x3c;
  readData(&szCameraMarkerName, base, current);
  current = ptr + 0xbc;
  readData(&unk_93d7196, base, current);
  current = ptr + 0xc0;
  readData(&unk_6584ca6, base, current);
  current = ptr + 0xc4;
  readData(&unk_bdd12d, base, current);
  current = ptr + 0xc8;
  readData(&unk_f8d8170, base, current);
  current = ptr + 0xcc;
  readData(&unk_188141b, base, current);
  current = ptr + 0xd0;
  readData(&unk_66ebec, base, current);
  current = ptr + 0xd4;
  readData(&unk_e660d97, base, current);
  ptr += 0xd8;
}
