#include "Subject.h"
#include <iostream>
#include <algorithm>
#include "Observer.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Observer {

Subject::Subject()
{
    cout << "Subject::Subject()" << endl;
}

void Subject::Attach(Observer *observer)
{
    cout << "Subject::Attach(" << observer << ")" << endl;

    observers.push_back(observer);
}

void Subject::Detach(Observer *observer)
{
    cout << "Subject::Detach(" << observer << ")" << endl;

    observers.remove(observer);
}

void Subject::Notify()
{
    cout << "Subject::Notify()" << endl;

    for_each(observers.begin(), observers.end(), [](Observer *o){ o->Update(); });
}

} } }