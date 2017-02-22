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
    cout << endl;

    observer1.ShowState();
    observer2.ShowState();
    cout << endl;

    subject.Attach(&observer1);
    subject.Attach(&observer2);
    cout << endl;

    observer1.SetState();
    cout << endl;

    observer1.ShowState();
    observer2.ShowState();
    cout << endl;

    subject.Detach(&observer1);
    subject.Detach(&observer2);
    cout << endl;

    observer1.SetState();
    cout << endl;

    observer1.ShowState();
    observer2.ShowState();
    cout << endl;
}

} } }