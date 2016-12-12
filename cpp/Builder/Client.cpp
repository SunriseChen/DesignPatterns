#include "Client.h"
#include <memory>
#include <iostream>
#include "ConcreteBuilder.h"
#include "Director.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Builder {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    auto builder = make_shared<ConcreteBuilder>();
    Director director(builder);
    director.Construct();
    auto product = builder->GetResult();
    cout << product;
}

} } }