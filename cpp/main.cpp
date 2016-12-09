#include <memory>
#include <iostream>
#include "AbstractFactory/Show.h"

using namespace std;

void AbstractFactory()
{
    auto show = make_shared<Sunrise::DesignPatterns::AbstractFactory::Show>();
    show->Run();
}

int main(int argc, char *args[])
{
    AbstractFactory();

    char c;
    cin >> c;

    return 0;
}