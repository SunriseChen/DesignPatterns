#include "Client.h"
#include <iostream>
#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Observer {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    ConcreteSubject subject;
    ConcreteObserver observer1(subject), observer2(subject);
    observer1.ShowState();
    subject.Attach(&observer1);
    observer2.ShowState();
    subject.Attach(&observer2);
    observer1.SetState();
    observer1.ShowState();
    observer2.ShowState();
    subject.Detach(&observer1);
    subject.Detach(&observer2);
    observer1.SetState();
    observer1.ShowState();
    observer2.ShowState();
}

} } }