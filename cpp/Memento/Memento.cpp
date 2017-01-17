#include "Memento.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Memento {

Memento::Memento(const shared_ptr<State> &state)
    : state(state)
{
    cout << "Memento::Memento(state = " << state << ")" << endl;
}

shared_ptr<State> Memento::GetState() const
{
    cout << "Memento::GetState()" << endl;

    return state;
}

void Memento::SetState(const shared_ptr<State> &state)
{
    cout << "Memento::SetState(state = " << state << ")" << endl;

    this->state = state;
}

} } }