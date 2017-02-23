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
    cout << "ConcreteBuilder::BuildPart(part = \"" << part << "\")" << endl;

    if (result_.empty())
    {
        result_ = part;
    }
    else
    {
        result_ += " " + part;
    }
}

const string & ConcreteBuilder::GetResult() const
{
    cout << "ConcreteBuilder::GetResult()" << endl;

    return result_;
}

} } }