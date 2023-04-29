/**
 * Definition: MailReadResponseMessage
 * Hash: fc82bdb3
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tf5ac91bb.h"

#pragma push(pack, 1)

struct MailReadResponseMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  tf5ac91bb idMail;
  DT_INT idErr;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
