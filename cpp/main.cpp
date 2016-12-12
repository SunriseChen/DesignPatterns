#include <memory>
#include <iostream>
#include "AbstractFactory/Show.h"
#include "Builder/Show.h"
#include "FactoryMethod/Show.h"

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

int main(int argc, char *args[])
{
    AbstractFactory();
    Builder();
    FactoryMethod();

    char c;
    cin >> c;

    return 0;
}