#include "ConcreteBuilder.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Builder {

ConcreteBuilder::ConcreteBuilder()
    : Builder()
{
    cout << "ConcreteBuilder::ConcreteBuilder()" << endl;
}

void ConcreteBuilder::BuildPart(const string &part)
{
    cout << "ConcreteBuilder::BuildPart(\"" << part << "\")" << endl;
    if (result.empty())
    {
        result = part;
    }
    else
    {
        result += " " + part;
    }
}

const string & ConcreteBuilder::GetResult()
{
    cout << "ConcreteBuilder::GetResult()" << endl;
    return result;
}

} } }