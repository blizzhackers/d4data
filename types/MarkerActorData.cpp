/**
 * Definition: MarkerActorData
 * Hash: a5b84815
 */

#include "MarkerActorData.h"

void MarkerActorData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&szLookName, base, current);
  current = ptr + 0x14;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0x18;
  readData(&unk_d897a3, base, current);
  current = ptr + 0x1c;
  readData(&unk_f116b76, base, current);
  current = ptr + 0x20;
  readData(&nFadeGroup, base, current);
  current = ptr + 0x24;
  readData(&unk_d094b9a, base, current);
  current = ptr + 0x28;
  readData(&unk_529dc44, base, current);
  current = ptr + 0x2c;
  readData(&eActorType, base, current);
  current = ptr + 0x30;
  readData(&eGizmoType, base, current);
  current = ptr + 0x34;
  readData(&unk_940ff8e, base, current);
  current = ptr + 0x38;
  readData(&ptServerData, base, current);
  current = ptr + 0x48;
  readData(&ptMonsterActorData, base, current);
  current = ptr + 0x58;
  readData(&ptActorGizmoData, base, current);
  current = ptr + 0x68;
  readData(&unk_6a0a118, base, current);
  current = ptr + 0x78;
  readData(&unk_df84c5d, base, current);
  current = ptr + 0x88;
  readData(&unk_ff96acb, base, current);
  current = ptr + 0x90;
  readData(&unk_b0425e7, base, current);
  current = ptr + 0xa0;
  readData(&unk_c627b16, base, current);
  ptr += 0xa8;
}
