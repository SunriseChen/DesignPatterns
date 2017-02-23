#include "Context.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

Context::Context()
{
    cout << "Context::Context()" << endl;
}

void Context::Add(const std::string & line)
{
    result_.append("\n\t");
    result_.append(line);
}

const string & Context::GetResult() const
{
    return result_;
}

} } }