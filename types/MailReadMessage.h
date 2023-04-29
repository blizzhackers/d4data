/**
 * Definition: MailReadMessage
 * Hash: 9c727764
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tf5ac91bb.h"

#pragma push(pack, 1)

struct MailReadMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  tf5ac91bb idMail;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
