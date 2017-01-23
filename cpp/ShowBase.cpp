#include "ShowBase.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns {

ShowBase::ShowBase(string &&name)
    : name(name)
{
    cout << name << " Start:" << endl;
}

ShowBase::~ShowBase()
{
    cout << name << " Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

} }