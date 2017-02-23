#include "Memento.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Memento {

Memento::Memento(const StatePtr &state)
    : state_(state)
{
    cout << "Memento::Memento(state = " << state << ")" << endl;
}

StatePtr Memento::GetState() const
{
    cout << "Memento::GetState()" << endl;

    return state_;
}

void Memento::SetState(const StatePtr &state)
{
    cout << "Memento::SetState(state = " << state << ")" << endl;

    state_ = state;
}

} } }