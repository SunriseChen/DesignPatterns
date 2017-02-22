#include "Client.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(Aggregate<int> &aggregate) const
{
    cout << "Client::Run(aggregate = " << &aggregate << ")" << endl;

    auto iterator = aggregate.CreateIterator();
    cout << endl;

    iterator->First();
    while (!iterator->IsDone())
    {
        auto &item = iterator->CurrentItem();
        cout << "\titem = " << item << endl;
        item = item * item;
        iterator->Next();
    }
    cout << endl;

    for (iterator->First(); !iterator->IsDone(); iterator->Next())
    {
        auto item = iterator->CurrentItem();
        cout << "\titem = " << item << endl;
    }
    cout << endl;
}

} } }