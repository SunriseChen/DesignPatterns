#include "Caretaker.h"
#include <iostream>
#include "Originator.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Memento {

Caretaker::Caretaker()
    : memento(nullptr)
{
    cout << "Caretaker::Caretaker()" << endl;
}

void Caretaker::Execute()
{
    cout << "Caretaker::Execute()" << endl;

    Originator originator;
    originator.ShowState();
    memento = unique_ptr<Memento>(originator.CreateMemento());
}

void Caretaker::Unexecute()
{
    cout << "Caretaker::Unexecute()" << endl;

    if (memento)
    {
        Originator originator;
        originator.ShowState();
        originator.SetMemento(memento.get());
        originator.ShowState();
    }
}

} } }