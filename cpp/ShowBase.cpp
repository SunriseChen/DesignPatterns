#include "ShowBase.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns {

ShowBase::ShowBase(string &&name)
    : name(name)
{
}

const string & ShowBase::Name() const
{
    return name;
}

void ShowBase::Run() const
{
    cout << name << " Start:" << endl << endl;
    DoRun();
    cout << name << " Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

} }