#include <memory>
#include <iostream>
#include "AbstractFactory/Show.h"
#include "Builder/Show.h"
#include "FactoryMethod/Show.h"
#include "Prototype/Show.h"
#include "Singleton/Show.h"
#include "Adapter/Show.h"
#include "Bridge/Show.h"

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

int main(int argc, char *args[])
{
    AbstractFactory();
    Builder();
    FactoryMethod();
    Prototype();
    Singleton();
    Adapter();
    Bridge();

    char c;
    cin >> c;

    return 0;
}