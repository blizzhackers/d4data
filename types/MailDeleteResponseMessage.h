/**
 * Definition: MailDeleteResponseMessage
 * Hash: 962b278a
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tf5ac91bb.h"

#pragma push(pack, 1)

struct MailDeleteResponseMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  tf5ac91bb idMail;
  DT_INT idErr;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
