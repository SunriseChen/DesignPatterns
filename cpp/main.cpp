#include <memory>
#include <iostream>
#include "AbstractFactory/Show.h"
#include "Builder/Show.h"
#include "FactoryMethod/Show.h"
#include "Prototype/Show.h"
#include "Singleton/Show.h"
#include "Adapter/Show.h"
#include "Bridge/Show.h"
#include "Composite/Show.h"
#include "Decorator/Show.h"
#include "Facade/Show.h"
#include "Flyweight/Show.h"
#include "Proxy/Show.h"
#include "ChainOfResponsibility/Show.h"
#include "Command/Show.h"
#include "Interpreter/Show.h"
#include "Iterator/Show.h"
#include "Mediator/Show.h"
#include "Memento/Show.h"
#include "Observer/Show.h"
#include "State/Show.h"
#include "Strategy/Show.h"

using namespace std;

void AbstractFactory()
{
    Sunrise::DesignPatterns::AbstractFactory::Show show;
    show.Run();
}

void Builder()
{
    Sunrise::DesignPatterns::Builder::Show show;
    show.Run();
}

void FactoryMethod()
{
    Sunrise::DesignPatterns::FactoryMethod::Show show;
    show.Run();
}

void Prototype()
{
    Sunrise::DesignPatterns::Prototype::Show show;
    show.Run();
}

void Singleton()
{
    Sunrise::DesignPatterns::Singleton::Show show;
    show.Run();
}

void Adapter()
{
    Sunrise::DesignPatterns::Adapter::Show show;
    show.Run();
}

void Bridge()
{
    Sunrise::DesignPatterns::Bridge::Show show;
    show.Run();
}

void Composite()
{
    Sunrise::DesignPatterns::Composite::Show show;
    show.Run();
}

void Decorator()
{
    Sunrise::DesignPatterns::Decorator::Show show;
    show.Run();
}

void Facade()
{
    Sunrise::DesignPatterns::Facade::Show show;
    show.Run();
}

void Flyweight()
{
    Sunrise::DesignPatterns::Flyweight::Show show;
    show.Run();
}

void Proxy()
{
    Sunrise::DesignPatterns::Proxy::Show show;
    show.Run();
}

void ChainOfResponsibility()
{
    Sunrise::DesignPatterns::ChainOfResponsibility::Show show;
    show.Run();
}

void Command()
{
    Sunrise::DesignPatterns::Command::Show show;
    show.Run();
}

void Interpreter()
{
    Sunrise::DesignPatterns::Interpreter::Show show;
    show.Run();
}

void Iterator()
{
    Sunrise::DesignPatterns::Iterator::Show show;
    show.Run();
}

void Mediator()
{
    Sunrise::DesignPatterns::Mediator::Show show;
    show.Run();
}

void Memento()
{
    Sunrise::DesignPatterns::Memento::Show show;
    show.Run();
}

void Observer()
{
    Sunrise::DesignPatterns::Observer::Show show;
    show.Run();
}

void State()
{
    Sunrise::DesignPatterns::State::Show show;
    show.Run();
}

void Strategy()
{
    Sunrise::DesignPatterns::Strategy::Show show;
    show.Run();
}

int main(int argc, char *args[])
{
    // pass unused warning
    argc = argc;
    args = args;

    AbstractFactory();
    Builder();
    FactoryMethod();
    Prototype();
    Singleton();
    Adapter();
    Bridge();
    Composite();
    Decorator();
    Facade();
    Flyweight();
    Proxy();
    ChainOfResponsibility();
    Command();
    Interpreter();
    Iterator();
    Mediator();
    Memento();
    Observer();
    State();
    Strategy();

    char c;
    cin >> c;

    return 0;
}