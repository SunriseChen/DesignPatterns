#include "Command.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Command {

void Command::Execute() const
{
    cout << "Command::Execute()" << endl;
}

Command::Command()
{
    cout << "Command::Command()" << endl;
}

} } }