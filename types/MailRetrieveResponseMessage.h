/**
 * Definition: MailRetrieveResponseMessage
 * Hash: 8877cbfd
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tf5ac91bb.h"

#pragma push(pack, 1)

struct MailRetrieveResponseMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  tf5ac91bb idMail;
  DT_INT idErr;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
