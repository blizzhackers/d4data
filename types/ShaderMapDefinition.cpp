/**
 * Definition: ShaderMapDefinition
 * Hash: d04bbdfe
 */

#include "ShaderMapDefinition.h"

void ShaderMapDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_b8d46b, base, current);
  current = ptr + 0xc;
  readData(&unk_71e61d, base, current);
  current = ptr + 0x10;
  readData(&unk_24ebc07, base, current);
  current = ptr + 0x14;
  readData(&unk_34304af, base, current);
  current = ptr + 0x18;
  readData(&arShaderOverrides, base, current);
  current = ptr + 0x28;
  readData(&unk_54bea5a, base, current);
  ptr += 0x38;
}
