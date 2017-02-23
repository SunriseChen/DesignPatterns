#include "Client.h"
#include <iostream>
#include "AbstractClass.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(const AbstractClass &abstractClass) const
{
    cout << "Client::Run(abstractClass = " << &abstractClass << ")" << endl;

    abstractClass.TemplateMethod();
    cout << endl;
}

} } }