#include "Singleton.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Singleton {

unique_ptr<Singleton> Singleton::instance_;

Singleton::Singleton()
{
    cout << "Singleton::Singleton()" << endl;
}

Singleton & Singleton::Instance()
{
    cout << "Singleton::Instance()" << endl;

    if (!instance_)
    {
        instance_ = unique_ptr<Singleton>(new Singleton);
    }

    return *instance_;
}

void Singleton::SingletonOperation() const
{
    cout << "Singleton::SingletonOperation()" << endl;
}

const string & Singleton::GetSingletonData() const
{
    cout << "Singleton::GetSingletonData()" << endl;

    static string result = "Singleton Data";
    return result;
}

} } }