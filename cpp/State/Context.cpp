#include "Context.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace State {

Context::Context()
    : state(nullptr)
{
    cout << "Context::Context()" << endl;
}

void Context::Request() const
{
    cout << "Context::Request()" << endl;

    if (state)
    {
        state->Handle();
    }
}

void Context::Change(State *state)
{
    cout << "Context::Change(" << state << ")" << endl;

    this->state = state;
}

} } }