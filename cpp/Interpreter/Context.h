#pragma once

#include <string>

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

// 包含解释器之外的一些全局信息。
class Context
{
    std::string result_;

public:
    Context();

    void Add(const std::string & line);
    const std::string & GetResult() const;
};

} } }