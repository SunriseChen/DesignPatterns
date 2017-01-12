#include "Client.h"
#include <memory>
#include <iostream>
#include "ConcreteMediator.h"
#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    ConcreteMediator mediator;
    mediator.OperationA();
    mediator.OperationB();
    mediator.OperationC();

    ConcreteColleague1 colleague1(mediator);
    colleague1.OperationD();
    ConcreteColleague2 colleague2(mediator);
    colleague2.OperationE();
}

} } }