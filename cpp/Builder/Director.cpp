#include "Director.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Builder {

Director::Director(const shared_ptr<Builder> &builder)
    : builder(builder)
{
    cout << "Director::Director(" << builder << ")" << endl;
}

void Director::Construct() const
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
    for (unsigned i = 0; i < count; ++i)
    {
        builder->BuildPart(parts[i]);
    }
}

} } }