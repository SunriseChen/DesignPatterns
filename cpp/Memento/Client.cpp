#include "Client.h"
#include <memory>
#include <iostream>
#include "Memento.h"
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
    caretaker.Execute();
    caretaker.Unexecute();
}

} } }