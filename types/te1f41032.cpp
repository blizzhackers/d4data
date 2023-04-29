/**
 * Definition: te1f41032
 * Hash: e1f41032
 */

#include "te1f41032.h"

void te1f41032::read(const char* base, char* &ptr) {
  readData(&m_localTransform, base, ptr);
  readData(&m_transform1, base, ptr);
  readData(&m_transform2, base, ptr);
  readData(&m_scale, base, ptr);
  readData(&m_invScale, base, ptr);
  readData(&unk_fe69d65, base, ptr);
  readData(&m_params, base, ptr);
  readData(&m_type, base, ptr);
  readData(&m_boneIndex, base, ptr);
  readData(&m_padding, base, ptr);
}
