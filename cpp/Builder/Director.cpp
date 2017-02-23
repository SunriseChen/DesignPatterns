#include "Director.h"
#include <iostream>
#include <algorithm>
#include "Builder.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Builder {

Director::Director(Builder &builder)
    : builder_(builder)
{
    cout << "Director::Director(builder = " << &builder << ")" << endl;
}

void Director::Construct(const vector<string> &parts) const
{
    cout << "Director::Construct(parts = " << &parts << ")" << endl;

    for_each(parts.begin(), parts.end(), [&](const string &part) {
        builder_.BuildPart(part);
    });
}

} } }