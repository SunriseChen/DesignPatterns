#include "ConcreteHandler1.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

ConcreteHandler1::ConcreteHandler1(const shared_ptr<Handler> &successor)
    : Handler(successor)
{
    cout << "ConcreteHandler1::ConcreteHandler1(successor = " << successor << ")" << endl;
}

void ConcreteHandler1::HandleRequest() const
{
    cout << "ConcreteHandler1::HandleRequest()" << endl;

    Handler::HandleRequest();
}

} } }