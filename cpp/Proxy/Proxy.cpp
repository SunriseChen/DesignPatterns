#include "Proxy.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

Proxy::Proxy(const shared_ptr<Subject> &realSubject)
    : Subject(), 
    realSubject(realSubject)
{
    cout << "Proxy::Proxy(" << realSubject << ")" << endl;
}

void Proxy::Request() const
{
    cout << "Proxy::Request()" << endl;

    realSubject->Request();
}

} } }