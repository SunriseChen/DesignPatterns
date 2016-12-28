#include "Implementor.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

Implementor::Implementor()
{
    cout << "Implementor::Implementor()" << endl;
}

void Implementor::OperationImpl() const
{
    cout << "Implementor::OperationImpl()" << endl;
}

} } }