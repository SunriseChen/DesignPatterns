#include "Invoker.h"
#include <iostream>
#include "Command.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Command {

Invoker::Invoker()
{
    cout << "Invoker::Invoker()" << endl;
}

void Invoker::StoreCommand(const Command *command)
{
    cout << "Invoker::StoreCommand(command = " << command << ")" << endl;

    this->command = command;
}

void Invoker::Run() const
{
    cout << "Invoker::Run()" << endl;

    command->Execute();
}

} } }