/**
 * Definition: MarkerSetDefinition
 * Hash: f3f8f857
 */

#include "MarkerSetDefinition.h"

void MarkerSetDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&tMarkerSet, base, current);
  current = ptr + 0x18;
  readData(&dwMarkerSetFlags, base, current);
  current = ptr + 0x1c;
  readData(&nLabel, base, current);
  current = ptr + 0x20;
  readData(&unk_677237e, base, current);
  current = ptr + 0x28;
  readData(&unk_6d7f2e9, base, current);
  current = ptr + 0x38;
  readData(&unk_db67c2c, base, current);
  current = ptr + 0x40;
  readData(&ptChunks, base, current);
  current = ptr + 0x50;
  readData(&unk_a3613db, base, current);
  current = ptr + 0x60;
  readData(&unk_6458d11, base, current);
  current = ptr + 0x70;
  readData(&unk_2bbd1d, base, current);
  current = ptr + 0x100;
  readData(&unk_69b6741, base, current);
  current = ptr + 0x110;
  readData(&unk_2f217b0, base, current);
  current = ptr + 0x118;
  readData(&unk_d0a9662, base, current);
  ptr += 0x120;
}
