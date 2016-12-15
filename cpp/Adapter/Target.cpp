#include "Target.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

Target::Target()
{
    cout << "Target::Target()" << endl;
}

void Target::Request() const
{
    cout << "Target::Request()" << endl;
}

} } }