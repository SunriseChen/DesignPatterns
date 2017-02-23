#pragma once

#include <string>

namespace Sunrise { namespace DesignPatterns { namespace Builder {

// 为创建一个 Product 对象的各个部件指定抽象接口。
class Builder
{
protected:
    Builder();

public:
    virtual void BuildPart(const std::string &part) = 0;
};

} } }