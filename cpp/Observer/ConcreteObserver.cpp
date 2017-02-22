#include "ConcreteObserver.h"
#include <iostream>
#include "ConcreteSubject.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Observer {

ConcreteObserver::ConcreteObserver(ConcreteSubject &subject)
    : Observer(), 
    subject(subject),
    state(0)
{
    cout << "ConcreteObserver::ConcreteObserver(subject = " << &subject << ")" << endl;
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