#include "ConcreteSubject.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Observer {

ConcreteSubject::ConcreteSubject()
    : Subject(), 
    state_(0)
{
    cout << "ConcreteSubject::ConcreteSubject()" << endl;
}

int ConcreteSubject::GetState() const
{
    cout << "ConcreteSubject::GetState()" << endl;

    return state_;
}

void ConcreteSubject::SetState(int state)
{
    cout << "ConcreteSubject::SetState(state = " << state << ")" << endl;

    state_ = state;
    Notify();
}

} } }