#include "ConcreteStrategyC.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

ConcreteStrategyC::ConcreteStrategyC()
    : Strategy()
{
    cout << "ConcreteStrategyC::ConcreteStrategyC()" << endl;
}

void ConcreteStrategyC::AlgorithmInterface() const
{
    cout << "ConcreteStrategyC::AlgorithmInterface()" << endl;
}

} } }