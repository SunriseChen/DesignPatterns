#include "ConcreteHandler2.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

ConcreteHandler2::ConcreteHandler2(const shared_ptr<Handler> &successor)
    : Handler(successor)
{
    cout << "ConcreteHandler2::ConcreteHandler2(successor = " << successor << ")" << endl;
}

void ConcreteHandler2::HandleRequest() const
{
    cout << "ConcreteHandler2::HandleRequest()" << endl;

    Handler::HandleRequest();
}

} } }