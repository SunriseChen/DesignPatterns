#pragma once

#include <memory>
#include "Builder.h"

namespace Sunrise { namespace DesignPatterns { namespace Builder {

// 构造一个使用 Builder 接口的对象。
class Director
{
    std::shared_ptr<Builder> builder;

public:
    Director(const std::shared_ptr<Builder> &builder);

    void Construct() const;
};

} } }