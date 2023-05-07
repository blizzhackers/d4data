/**
 * Definition: tac30acdf
 * Hash: ac30acdf
 */

#include "tac30acdf.h"

void tac30acdf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&m_aVertices, base, current);
  current = ptr + 0x8;
  readData(&unk_522b0f, base, current);
  current = ptr + 0x10;
  readData(&unk_1c9f1d0, base, current);
  current = ptr + 0x18;
  readData(&unk_39bf0fc, base, current);
  current = ptr + 0x20;
  readData(&unk_23a39c9, base, current);
  current = ptr + 0x28;
  readData(&m_aCapsules, base, current);
  current = ptr + 0x30;
  readData(&m_aPlanes, base, current);
  current = ptr + 0x38;
  readData(&unk_15437b6, base, current);
  current = ptr + 0x40;
  readData(&unk_45fa486, base, current);
  current = ptr + 0x48;
  readData(&m_name, base, current);
  current = ptr + 0x68;
  readData(&m_vertexCount, base, current);
  current = ptr + 0x6c;
  readData(&m_faceCount, base, current);
  current = ptr + 0x70;
  readData(&unk_d4fc6fe, base, current);
  current = ptr + 0x74;
  readData(&unk_357cf65, base, current);
  current = ptr + 0x78;
  readData(&unk_e4594b1, base, current);
  current = ptr + 0x7c;
  readData(&unk_4c2d410, base, current);
  current = ptr + 0x80;
  readData(&unk_5f25c6, base, current);
  current = ptr + 0x84;
  readData(&m_boneCount, base, current);
  current = ptr + 0x88;
  readData(&unk_b7a310, base, current);
  current = ptr + 0x8c;
  readData(&unk_19d5862, base, current);
  current = ptr + 0x90;
  readData(&m_planeCount, base, current);
  current = ptr + 0x94;
  readData(&m_area, base, current);
  ptr += 0x98;
}
