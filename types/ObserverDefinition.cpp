/**
 * Definition: ObserverDefinition
 * Hash: 809c191
 */

#include "ObserverDefinition.h"

void ObserverDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_36650c, base, ptr);
  readData(&wvLookAtOffsetVector, base, ptr);
  readData(&wvCameraOffsetVector, base, ptr);
  readData(&unk_5a947a6, base, ptr);
  readData(&unk_5c0680d, base, ptr);
  readData(&unk_9dab378, base, ptr);
  readData(&unk_3fe5936, base, ptr);
  readData(&unk_c9a32ec, base, ptr);
  readData(&tQuestStackInfoMessage, base, ptr);
  readData(&fOrthographic, base, ptr);
  readData(&unk_b046307, base, ptr);
  readData(&unk_cc38bbe, base, ptr);
  readData(&unk_101b2fc, base, ptr);
  readData(&unk_6749d34, base, ptr);
  readData(&unk_839bfef, base, ptr);
  readData(&flZFar, base, ptr);
  readData(&flHeight, base, ptr);
  readData(&unk_3853352, base, ptr);
  readData(&unk_76194b5, base, ptr);
  readData(&unk_551d996, base, ptr);
  readData(&unk_e8a7758, base, ptr);
  readData(&unk_4f566f0, base, ptr);
  readData(&unk_4771732, base, ptr);
  readData(&unk_af07896, base, ptr);
  readData(&unk_9fb28df, base, ptr);
  readData(&unk_f4da6b2, base, ptr);
  readData(&unk_483b79, base, ptr);
  readData(&unk_57e840d, base, ptr);
  readData(&unk_d6fad4, base, ptr);
  readData(&unk_6b455b8, base, ptr);
  readData(&unk_15b7944, base, ptr);
  readData(&unk_d2b3efc, base, ptr);
  readData(&unk_de62f5a, base, ptr);
  readData(&unk_9e17f0a, base, ptr);
  readData(&unk_8f82b03, base, ptr);
  readData(&unk_777445b, base, ptr);
  readData(&unk_ca6f9df, base, ptr);
  readData(&unk_ee8e3a, base, ptr);
  readData(&unk_e45f065, base, ptr);
}
