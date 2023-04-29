/**
 * Definition: Structure
 * Hash: 31c8cf71
 */

#include "Structure.h"

void Structure::read(const char* base, char* &ptr) {
  readData(&ptCollisionMeshes, base, ptr);
  readData(&ptCollisionCapsules, base, ptr);
  readData(&ptChunks, base, ptr);
  readData(&unk_5c313ac, base, ptr);
  readData(&unk_e5e0262, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_6bd8898, base, ptr);
  readData(&wsBounds, base, ptr);
  readData(&aabbBounds, base, ptr);
  readData(&unk_d8c9b68, base, ptr);
  readData(&ptPostprocessed, base, ptr);
}
