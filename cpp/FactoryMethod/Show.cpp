#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "ConcreteCreator.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

Show::Show()
{
    cout << "FactoryMethod Start:" << endl;
}


Show::~Show()
{
    cout << "FactoryMethod Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run()
{
    Client client(make_shared<ConcreteCreator>());
    client.Run();
    cout << endl;
}

} } }