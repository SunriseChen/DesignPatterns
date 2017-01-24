#include "Show.h"
#include <iostream>
#include <vector>
#include "Client.h"
#include "ConcreteAggregate.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

Show::Show()
    : ShowBase("Iterator")
{
}

void Show::DoRun() const
{
    Client client;
    ConcreteAggregate<int> aggregate(vector<int> { 3, 6, 9 });
    client.Run(aggregate);
}

} } }