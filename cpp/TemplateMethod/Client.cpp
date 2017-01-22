#include "Client.h"
#include <memory>
#include <iostream>
#include "ConcreteClass.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    shared_ptr<AbstractClass> abstractClass = make_shared<ConcreteClass>();
    abstractClass->TemplateMethod();
}

} } }