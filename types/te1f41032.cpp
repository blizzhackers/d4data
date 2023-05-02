/**
 * Definition: te1f41032
 * Hash: e1f41032
 */

#include "te1f41032.h"

void te1f41032::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&m_localTransform, base, current);
  current = ptr + 0x20;
  readData(&m_transform1, base, current);
  current = ptr + 0x40;
  readData(&m_transform2, base, current);
  current = ptr + 0x60;
  readData(&m_scale, base, current);
  current = ptr + 0x70;
  readData(&m_invScale, base, current);
  current = ptr + 0x80;
  readData(&unk_fe69d65, base, current);
  current = ptr + 0x90;
  readData(&m_params, base, current);
  current = ptr + 0xa0;
  readData(&m_type, base, current);
  current = ptr + 0xa2;
  readData(&m_boneIndex, base, current);
  current = ptr + 0xa4;
  readData(&m_padding, base, current);
  ptr += 0xb0;
}
