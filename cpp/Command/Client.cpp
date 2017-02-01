#include "Client.h"
#include <iostream>
#include "Invoker.h"
#include "Receiver.h"
#include "ConcreteCommand.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Command {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    Receiver receiver;
    ConcreteCommand command(receiver);
    Invoker invoker;
    invoker.StoreCommand(&command);
    cout << endl;

    invoker.Run();
    cout << endl;
}

} } }