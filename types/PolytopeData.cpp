/**
 * Definition: PolytopeData
 * Hash: 5d679d96
 */

#include "PolytopeData.h"

void PolytopeData::read(const char* base, char* &ptr) {
  readData(&nAppearanceAttributeGlobalSNOMap, base, ptr);
  readData(&ptVertices, base, ptr);
  readData(&ptPlanes, base, ptr);
  readData(&ptSubEdges, base, ptr);
  readData(&ptFaceSubEdges, base, ptr);
}
