/**
 * Definition: Structure
 * Hash: 31c8cf71
 */

#include "Structure.h"

void Structure::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptCollisionMeshes, base, current);
  current = ptr + 0x10;
  readData(&ptCollisionCapsules, base, current);
  current = ptr + 0x20;
  readData(&ptChunks, base, current);
  current = ptr + 0x30;
  readData(&unk_5c313ac, base, current);
  current = ptr + 0x40;
  readData(&unk_e5e0262, base, current);
  current = ptr + 0x50;
  readData(&dwFlags, base, current);
  current = ptr + 0x54;
  readData(&unk_6bd8898, base, current);
  current = ptr + 0x58;
  readData(&wsBounds, base, current);
  current = ptr + 0x68;
  readData(&aabbBounds, base, current);
  current = ptr + 0x80;
  readData(&unk_d8c9b68, base, current);
  current = ptr + 0x88;
  readData(&ptPostprocessed, base, current);
  ptr += 0x90;
}
