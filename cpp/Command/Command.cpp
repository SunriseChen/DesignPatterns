#include "Command.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Command {

Command::Command()
{
    cout << "Command::Command()" << endl;
}

void Command::Execute() const
{
    cout << "Command::Execute()" << endl;
}

} } }