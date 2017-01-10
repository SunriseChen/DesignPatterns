#include "Invoker.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Command {

Invoker::Invoker()
{
    cout << "Invoker::Invoker()" << endl;
}

void Invoker::StoreCommand(const shared_ptr<Command> &command)
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