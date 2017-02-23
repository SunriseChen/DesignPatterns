#pragma once

#include "Builder.h"

namespace Sunrise { namespace DesignPatterns { namespace Builder {

// 实现 Builder 的接口以构造和装配该产品的各个部件。
// 定义并明确它所创建的表示。
// 提供一个检索产品的接口。
class ConcreteBuilder : public Builder
{
    std::string result_;

public:
    ConcreteBuilder();

    virtual void BuildPart(const std::string &part);
    const std::string & GetResult() const;
};

} } }