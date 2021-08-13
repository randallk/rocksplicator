/// Copyright 2021 Pinterest Inc.
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
/// http://www.apache.org/licenses/LICENSE-2.0

/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.

//
// @author prem (prem@pinterest.com)
//

#pragma once
#include <cstdint>

namespace common {
  struct Config {
    /**
     * "Replication mode. "
     *     "0: ack client once committed to Master; "
     *     "1: ack client once committed to Master and written to the TCP "
     *        "stack for the connection to one of the Slave; "
     *     "2: ack client once committed to Master and one of the Slaves.");
     */
    uint32_t replication_mode = 0;

    static const Config& getDefault() {
      static const Config c;
      return c;
    }
  };
} //  namespace common
