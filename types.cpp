#include <iostream>
#include "types.h"

void DT_CSTRING::read(const char *base, char* &ptr) {
  struct {
    int32_t padding[2];
    int32_t offset;
    int32_t length;
  } a;

  readData(&a, base, ptr);

  if (a.offset > 0 && a.length > 0) {
    value = std::string(base + a.offset, a.length);
  }
}

void DT_STRING_FORMULA::read(const char *base, char* &ptr) {
  struct {
    int32_t padding[2];
    int32_t offset;
    int32_t length;
  } a, b;

  readData(&a, base, ptr);
  readData(&b, base, ptr);

  if (a.offset > 0 && a.length > 0) {
    value = std::string(base + a.offset, a.length);
  }

  if (b.offset > 0 && b.length > 0) {
    binaryFormula = std::string(base + b.offset, b.length);
  }
}
