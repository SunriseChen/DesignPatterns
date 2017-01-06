#include "RealSubject.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

RealSubject::RealSubject()
    : Subject()
{
    cout << "RealSubject::RealSubject()" << endl;
}

void RealSubject::Request() const
{
    cout << "RealSubject::Request()" << endl;
}

} } }