/**
 * Definition: ShaderMapDefinition
 * Hash: d04bbdfe
 */

#include "ShaderMapDefinition.h"

void ShaderMapDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_b8d46b, base, ptr);
  readData(&unk_71e61d, base, ptr);
  readData(&unk_24ebc07, base, ptr);
  readData(&unk_34304af, base, ptr);
  readData(&unk_c83f99d, base, ptr);
  readData(&unk_54bea5a, base, ptr);
}
