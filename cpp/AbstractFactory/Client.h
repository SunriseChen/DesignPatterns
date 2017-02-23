#pragma once

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

class AbstractFactory;

// 仅使用由 AbstractFactory 和 AbstractProduct 类声明的接口。
class Client
{
public:
    Client();

    void Run(const AbstractFactory &abstractFactory) const;
};

} } }