/**
 * Definition: MarkerActorGizmoData
 * Hash: ce8080fb
 */

#include "MarkerActorGizmoData.h"

void MarkerActorGizmoData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptDoorGizmoData, base, current);
  current = ptr + 0x10;
  readData(&unk_fb42747, base, current);
  current = ptr + 0x20;
  readData(&unk_70d0dc0, base, current);
  current = ptr + 0x30;
  readData(&unk_ac84ca4, base, current);
  current = ptr + 0x40;
  readData(&unk_b64cb67, base, current);
  current = ptr + 0x50;
  readData(&unk_83131fe, base, current);
  current = ptr + 0x60;
  readData(&unk_c82c39b, base, current);
  current = ptr + 0x70;
  readData(&unk_f48a504, base, current);
  current = ptr + 0x80;
  readData(&ptPortalGizmoData, base, current);
  current = ptr + 0x90;
  readData(&unk_f441be6, base, current);
  current = ptr + 0xa0;
  readData(&unk_542a67d, base, current);
  current = ptr + 0xb0;
  readData(&ptProxData, base, current);
  current = ptr + 0xc8;
  readData(&unk_604a84d, base, current);
  current = ptr + 0xd8;
  readData(&ptGizmoConditionData, base, current);
  current = ptr + 0xe8;
  readData(&ptMarkerBaseGizmoData, base, current);
  current = ptr + 0xf8;
  readData(&unk_ebfdb39, base, current);
  current = ptr + 0x108;
  readData(&ptWaypointGizmoData, base, current);
  current = ptr + 0x118;
  readData(&ptHiddenCacheGizmoData, base, current);
  ptr += 0x128;
}
