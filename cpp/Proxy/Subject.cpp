#include "Subject.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

Subject::Subject()
{
    cout << "Subject::Subject()" << endl;
}

void Subject::Request() const
{
    cout << "Subject::Request()" << endl;
}

} } }