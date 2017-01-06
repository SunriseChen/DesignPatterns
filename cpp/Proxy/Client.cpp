#include "Client.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

Client::Client(const shared_ptr<Subject> &subject)
    : subject(subject)
{
    cout << "Client::Client(" << subject << ")" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    subject->Request();
}

} } }