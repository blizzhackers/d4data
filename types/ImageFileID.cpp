/**
 * Definition: ImageFileID
 * Hash: fb3f03d0
 */

#include "ImageFileID.h"

void ImageFileID::read(const char* base, char* &ptr) {
  readData(&szFileName, base, ptr);
  readData(&szSourceFileName, base, ptr);
  readData(&nFrameIndex, base, ptr);
}
