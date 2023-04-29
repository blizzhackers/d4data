/**
 * Definition: tac30acdf
 * Hash: ac30acdf
 */

#include "tac30acdf.h"

void tac30acdf::read(const char* base, char* &ptr) {
  readData(&m_aVertices, base, ptr);
  readData(&unk_522b0f, base, ptr);
  readData(&unk_1c9f1d0, base, ptr);
  readData(&unk_39bf0fc, base, ptr);
  readData(&unk_23a39c9, base, ptr);
  readData(&m_aCapsules, base, ptr);
  readData(&m_aPlanes, base, ptr);
  readData(&unk_15437b6, base, ptr);
  readData(&unk_45fa486, base, ptr);
  readData(&m_name, base, ptr);
  readData(&m_vertexCount, base, ptr);
  readData(&m_faceCount, base, ptr);
  readData(&unk_d4fc6fe, base, ptr);
  readData(&unk_357cf65, base, ptr);
  readData(&unk_e4594b1, base, ptr);
  readData(&unk_4c2d410, base, ptr);
  readData(&unk_5f25c6, base, ptr);
  readData(&unk_4ae0279, base, ptr);
  readData(&unk_b7a310, base, ptr);
  readData(&unk_19d5862, base, ptr);
  readData(&m_planeCount, base, ptr);
  readData(&m_area, base, ptr);
}
