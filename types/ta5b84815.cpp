/**
 * Definition: ta5b84815
 * Hash: a5b84815
 */

#include "ta5b84815.h"

void ta5b84815::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&szLookName, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&unk_d897a3, base, ptr);
  readData(&unk_f116b76, base, ptr);
  readData(&nFadeGroup, base, ptr);
  readData(&unk_d094b9a, base, ptr);
  readData(&unk_529dc44, base, ptr);
  readData(&eActorType, base, ptr);
  readData(&eGizmoType, base, ptr);
  readData(&unk_940ff8e, base, ptr);
  readData(&ptServerData, base, ptr);
  readData(&lCriteriaIds, base, ptr);
  readData(&unk_9e1a23d, base, ptr);
  readData(&unk_6a0a118, base, ptr);
  readData(&unk_df84c5d, base, ptr);
  readData(&unk_ff96acb, base, ptr);
  readData(&unk_b0425e7, base, ptr);
  readData(&unk_c627b16, base, ptr);
}
