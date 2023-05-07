/**
 * Definition: TextureContent
 * Hash: 405196ec
 */

#include "TextureContent.h"

void TextureContent::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tTexture, base, current);
  ptr += 0x8;
}
