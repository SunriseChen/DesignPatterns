#include "Builder.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Builder {

Builder::Builder()
{
    cout << "Builder::Builder()" << endl;
}

void Builder::BuildPart(const string &part)
{
    cout << "Builder::BuildPart(""" << part << """)" << endl;
}

} } }