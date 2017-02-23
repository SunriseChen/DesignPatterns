#include "Originator.h"
#include <iostream>
#include "State.h"
#include "Memento.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Memento {

Originator::Originator()
    : state_(make_shared<State>())
{
    cout << "Originator::Originator()" << endl;
}

Memento * Originator::CreateMemento() const
{
    cout << "Originator::CreateMemento()" << endl;

    return new Memento(state_);
}

void Originator::SetMemento(const Memento *memento)
{
    cout << "Originator::SetMemento(memento = " << memento << ")" << endl;

    if (memento)
    {
        state_ = memento->GetState();
    }
}

void Originator::ShowState() const
{
    cout << "state_ = " << state_ << endl;
}

} } }