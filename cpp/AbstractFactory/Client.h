#pragma once

#include <memory>
#include "AbstractFactory.h"

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

// 仅使用由 AbstractFactory 和 AbstractProduct 类声明的接口。
class Client
{
    std::shared_ptr<AbstractFactory> abstractFactory;

public:
    Client(const std::shared_ptr<AbstractFactory> &abstractFactory);

    void Run() const;
};

} } }