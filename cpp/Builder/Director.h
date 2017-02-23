#pragma once

#include <vector>
#include <string>

namespace Sunrise { namespace DesignPatterns { namespace Builder {

class Builder;

// 构造一个使用 Builder 接口的对象。
class Director
{
    Builder &builder_;

public:
    Director(Builder &builder);

    void Construct(const std::vector<std::string> &parts) const;
};

} } }