#pragma once

#include "engine/AgentIDConstPtr.h"

#include <string>
#include <tuple>
#include <vector>

namespace alica
{
struct AgentAnnouncement
{
    using CapabilityPair = std::pair<std::string, std::string>;
    AgentAnnouncement()
            : senderID(nullptr)
            , token(0)
            , senderSdk(0)
            , planHash(0)
            , roleId(0)
    {
    }
    AgentIDConstPtr senderID;
    uint32_t token;
    std::string senderName;
    uint32_t senderSdk;
    uint32_t planHash;
    int64_t roleId;
    // Agent capabilities
    std::vector<CapabilityPair> capabilities;
};
} // namespace alica
