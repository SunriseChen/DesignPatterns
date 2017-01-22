#include "ConcreteStrategyB.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

ConcreteStrategyB::ConcreteStrategyB()
    : Strategy()
{
    cout << "ConcreteStrategyB::ConcreteStrategyB()" << endl;
}

void ConcreteStrategyB::AlgorithmInterface() const
{
    cout << "ConcreteStrategyB::AlgorithmInterface()" << endl;
}

} } }