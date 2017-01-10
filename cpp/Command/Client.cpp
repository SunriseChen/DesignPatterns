#include "Client.h"
#include <memory>
#include <iostream>
#include "Receiver.h"
#include "ConcreteCommand.h"
#include "Invoker.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Command {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    auto receiver = make_shared<Receiver>();
    auto command = make_shared<ConcreteCommand>(receiver);
    Invoker invoker;
    invoker.StoreCommand(command);
    invoker.Run();
}

} } }