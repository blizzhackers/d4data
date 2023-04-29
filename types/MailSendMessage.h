/**
 * Definition: MailSendMessage
 * Hash: c20e9b2
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct MailSendMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT64 nToAccount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
