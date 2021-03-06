/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include <proxygen/lib/http/session/HTTPEvent.h>

#include <iostream>

namespace proxygen {

std::ostream& operator<<(std::ostream& os, HTTPEvent::Type e) {
  switch (e) {
    case HTTPEvent::Type::MESSAGE_BEGIN:
      os << "message_begin";
      break;
    case HTTPEvent::Type::HEADERS_COMPLETE:
      os << "headers_complete";
      break;
    case HTTPEvent::Type::BODY:
      os << "body";
      break;
    case HTTPEvent::Type::CHUNK_HEADER:
      os << "chunk_header";
      break;
    case HTTPEvent::Type::CHUNK_COMPLETE:
      os << "chunk_complete";
      break;
    case HTTPEvent::Type::TRAILERS_COMPLETE:
      os << "trailers_complete";
      break;
    case HTTPEvent::Type::MESSAGE_COMPLETE:
      os << "message_complete";
      break;
    case HTTPEvent::Type::UPGRADE:
      os << "uprade";
      break;
  }

  return os;
}

}
