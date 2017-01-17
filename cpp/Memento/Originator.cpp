#include "Originator.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Memento {

Originator::Originator()
    : state(make_shared<State>())
{
    cout << "Originator::Originator()" << endl;
}

Memento * Originator::CreateMemento() const
{
    cout << "Originator::CreateMemento()" << endl;

    return new Memento(state);
}

void Originator::SetMemento(const Memento *memento)
{
    cout << "Originator::SetMemento(memento = " << memento << ")" << endl;

    if (memento)
    {
        state = memento->GetState();
    }
}

void Originator::ShowState() const
{
    cout << "state = " << state << endl;
}

} } }