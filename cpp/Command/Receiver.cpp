#include "Receiver.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Command {

Receiver::Receiver()
{
    cout << "Receiver::Receiver()" << endl;
}

void Receiver::Action() const
{
    cout << "Receiver::Action()" << endl;
}

} } }