#include "Client.h"
#include <iostream>
#include "Subject.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(const Subject &subject) const
{
    cout << "Client::Run(subject = " << &subject << ")" << endl;

    subject.Request();
    cout << endl;
}

} } }