#include "Handler.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

Handler::Handler(const shared_ptr<Handler> &successor)
    : successor(successor)
{
    cout << "Handler::Handler(successor = " << successor << ")" << endl;
}

void Handler::HandleRequest() const
{
    cout << "Handler::HandleRequest()" << endl;

    if (successor)
    {
        successor->HandleRequest();
    }
}

} } }