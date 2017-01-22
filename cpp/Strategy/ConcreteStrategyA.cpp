#include "ConcreteStrategyA.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

ConcreteStrategyA::ConcreteStrategyA()
    : Strategy()
{
    cout << "ConcreteStrategyA::ConcreteStrategyA()" << endl;
}

void ConcreteStrategyA::AlgorithmInterface() const
{
    cout << "ConcreteStrategyA::AlgorithmInterface()" << endl;
}

} } }