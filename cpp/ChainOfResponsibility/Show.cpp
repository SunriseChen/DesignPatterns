#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "ConcreteHandler1.h"
#include "ConcreteHandler2.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

Show::Show()
{
    cout << "Chain Of Responsibility Start:" << endl;
}

Show::~Show()
{
    cout << "Chain Of Responsibility Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    auto handler1 = make_shared<ConcreteHandler1>(nullptr);
    auto handler2 = make_shared<ConcreteHandler2>(handler1);
    Client client;
    client.Run(handler2);
}

} } }