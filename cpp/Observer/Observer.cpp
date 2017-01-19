#include "Observer.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Observer {

Observer::Observer()
{
    cout << "Observer::Observer()" << endl;
}

void Observer::Update()
{
    cout << "Observer::Update()" << endl;
}

} } }