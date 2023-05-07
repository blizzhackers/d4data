/**
 * Definition: PolytopeData
 * Hash: 5d679d96
 */

#include "PolytopeData.h"

void PolytopeData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e96f671, base, current);
  current = ptr + 0x40;
  readData(&ptVertices, base, current);
  current = ptr + 0x50;
  readData(&ptPlanes, base, current);
  current = ptr + 0x60;
  readData(&ptSubEdges, base, current);
  current = ptr + 0x70;
  readData(&ptFaceSubEdges, base, current);
  ptr += 0x80;
}
