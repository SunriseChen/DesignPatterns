#include "Client.h"
#include <iostream>
#include "Caretaker.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Memento {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    Caretaker caretaker;
    cout << endl;

    caretaker.Execute();
    cout << endl;

    caretaker.Unexecute();
    cout << endl;
}

} } }