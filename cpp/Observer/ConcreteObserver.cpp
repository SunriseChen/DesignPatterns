#include "ConcreteObserver.h"
#include <iostream>
#include "ConcreteSubject.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Observer {

ConcreteObserver::ConcreteObserver(ConcreteSubject &subject)
    : Observer(), 
    subject_(subject),
    state_(0)
{
    cout << "ConcreteObserver::ConcreteObserver(subject = " << &subject << ")" << endl;
}

void ConcreteObserver::Update()
{
    cout << "ConcreteObserver::Update()" << endl;

    state_ = subject_.GetState();
}

void ConcreteObserver::SetState()
{
    cout << "ConcreteObserver::SetState()" << endl;

    subject_.SetState(++state_);
}

void ConcreteObserver::ShowState() const
{
    cout << "ConcreteObserver::ShowState()" << endl;

    cout << "state_ = " << state_ << endl;
}

} } }