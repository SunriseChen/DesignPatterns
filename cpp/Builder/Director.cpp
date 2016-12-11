#include "Director.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Builder {

Director::Director(shared_ptr<Builder> builder)
{
    cout << "Director::Director(" << builder << ")" << endl;
    this->builder = builder;
}

void Director::Construct()
{
    cout << "Director::Construct()" << endl;

    string parts[] = {
        "Hello",
        "World",
        "!",
        "Hello",
        "Builder",
        "!",
    };

    auto count = extent<decltype(parts)>::value;
    for (int i = 0; i < count; ++i)
    {
        builder->BuildPart(parts[i]);
    }
}

} } }