#include "ConcreteSubject.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Observer {

ConcreteSubject::ConcreteSubject()
    : Subject(), 
    state(0)
{
    cout << "ConcreteSubject::ConcreteSubject()" << endl;
}

int ConcreteSubject::GetState() const
{
    cout << "ConcreteSubject::GetState()" << endl;

    return state;
}

void ConcreteSubject::SetState(int state)
{
    cout << "ConcreteSubject::SetState(" << state << ")" << endl;

    this->state = state;
    Notify();
}

} } }