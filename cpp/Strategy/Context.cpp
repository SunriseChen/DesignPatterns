#include "Context.h"
#include <iostream>
#include "Strategy.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

Context::Context(Strategy *strategy)
    : strategy_(strategy)
{
    cout << "Context::Context(strategy = " << strategy << ")" << endl;
}

void Context::ContextInterface() const
{
    cout << "Context::ContextInterface()" << endl;

    strategy_->AlgorithmInterface();
}

void Context::SetStrategy(Strategy *strategy)
{
    cout << "Context::SetStrategy(strategy = " << strategy << ")" << endl;

    strategy_ = strategy;
}

} } }