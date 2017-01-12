#include "Show.h"
#include <iostream>
#include <vector>
#include "Client.h"
#include "ConcreteAggregate.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

Show::Show()
{
    cout << "Iterator Start:" << endl;
}

Show::~Show()
{
    cout << "Iterator Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    Client client;
    ConcreteAggregate<int> aggregate(vector<int> { 3, 6, 9 });
    client.Run(aggregate);
}

} } }