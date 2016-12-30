#include "Facade.h"
#include <iostream>
#include "SubsystemClassA.h"
#include "SubsystemClassB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Facade {

Facade::Facade()
{
    cout << "Facade::Facade()" << endl;

    SubsystemClassA a;
    SubsystemClassB b;
}

} } }