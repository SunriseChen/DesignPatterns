#pragma once

#include "Subject.h"
#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

class Client
{
    std::shared_ptr<Subject> subject;

public:
    Client(const std::shared_ptr<Subject> &subject);

    void Run() const;
};

} } }