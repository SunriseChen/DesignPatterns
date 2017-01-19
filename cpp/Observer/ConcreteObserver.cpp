#include "ConcreteObserver.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Observer {

ConcreteObserver::ConcreteObserver(ConcreteSubject &subject)
    : Observer(), 
    state(0), 
    subject(subject)
{
    cout << "ConcreteObserver::ConcreteObserver(" << &subject << ")" << endl;
}

void ConcreteObserver::Update()
{
    cout << "ConcreteObserver::Update()" << endl;

    state = subject.GetState();
}

void ConcreteObserver::SetState()
{
    cout << "ConcreteObserver::SetState()" << endl;

    subject.SetState(++state);
}

void ConcreteObserver::ShowState() const
{
    cout << "ConcreteObserver::ShowState()" << endl;

    cout << "state = " << state << endl;
}

} } }