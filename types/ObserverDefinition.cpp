/**
 * Definition: ObserverDefinition
 * Hash: 809c191
 */

#include "ObserverDefinition.h"

void ObserverDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&aFOV, base, current);
  current = ptr + 0xc;
  readData(&wvLookAtOffsetVector, base, current);
  current = ptr + 0x18;
  readData(&wvCameraOffsetVector, base, current);
  current = ptr + 0x24;
  readData(&unk_5a947a6, base, current);
  current = ptr + 0x28;
  readData(&unk_5c0680d, base, current);
  current = ptr + 0x34;
  readData(&unk_9dab378, base, current);
  current = ptr + 0x38;
  readData(&unk_3fe5936, base, current);
  current = ptr + 0x3c;
  readData(&unk_c9a32ec, base, current);
  current = ptr + 0x40;
  readData(&unk_3ac51ed, base, current);
  current = ptr + 0x44;
  readData(&fOrthographic, base, current);
  current = ptr + 0x48;
  readData(&unk_b046307, base, current);
  current = ptr + 0x4c;
  readData(&flFStop, base, current);
  current = ptr + 0x50;
  readData(&unk_101b2fc, base, current);
  current = ptr + 0x54;
  readData(&unk_6749d34, base, current);
  current = ptr + 0x58;
  readData(&unk_839bfef, base, current);
  current = ptr + 0x5c;
  readData(&flZFar, base, current);
  current = ptr + 0x60;
  readData(&flHeight, base, current);
  current = ptr + 0x64;
  readData(&unk_3853352, base, current);
  current = ptr + 0x68;
  readData(&unk_76194b5, base, current);
  current = ptr + 0x6c;
  readData(&unk_551d996, base, current);
  current = ptr + 0x70;
  readData(&unk_e8a7758, base, current);
  current = ptr + 0x74;
  readData(&unk_4f566f0, base, current);
  current = ptr + 0x78;
  readData(&unk_4771732, base, current);
  current = ptr + 0x7c;
  readData(&unk_af07896, base, current);
  current = ptr + 0x80;
  readData(&unk_9fb28df, base, current);
  current = ptr + 0x84;
  readData(&unk_f4da6b2, base, current);
  current = ptr + 0x88;
  readData(&unk_483b79, base, current);
  current = ptr + 0x8c;
  readData(&unk_57e840d, base, current);
  current = ptr + 0x90;
  readData(&unk_d6fad4, base, current);
  current = ptr + 0x94;
  readData(&unk_6b455b8, base, current);
  current = ptr + 0x98;
  readData(&unk_15b7944, base, current);
  current = ptr + 0x9c;
  readData(&unk_d2b3efc, base, current);
  current = ptr + 0xa0;
  readData(&unk_de62f5a, base, current);
  current = ptr + 0xa4;
  readData(&unk_9e17f0a, base, current);
  current = ptr + 0xa8;
  readData(&unk_8f82b03, base, current);
  current = ptr + 0xac;
  readData(&unk_777445b, base, current);
  current = ptr + 0xb0;
  readData(&unk_ca6f9df, base, current);
  current = ptr + 0xb4;
  readData(&unk_ee8e3a, base, current);
  current = ptr + 0xb8;
  readData(&unk_e45f065, base, current);
  ptr += 0xbc;
}
