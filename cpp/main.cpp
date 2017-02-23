#include <iostream>
#include <unordered_set>
#include <string>
#include <stdio.h>

#include "Utilities.h"
#include "AbstractFactory/Show.h"
#include "Builder/Show.h"
#include "FactoryMethod/Show.h"
#include "Prototype/Show.h"
#include "Singleton/Show.h"
#include "Adapter/Show.h"
#include "Bridge/Show.h"
#include "Composite/Show.h"
#include "Decorator/Show.h"
#include "Facade/Show.h"
#include "Flyweight/Show.h"
#include "Proxy/Show.h"
#include "ChainOfResponsibility/Show.h"
#include "Command/Show.h"
#include "Interpreter/Show.h"
#include "Iterator/Show.h"
#include "Mediator/Show.h"
#include "Memento/Show.h"
#include "Observer/Show.h"
#include "State/Show.h"
#include "Strategy/Show.h"
#include "TemplateMethod/Show.h"
#include "Visitor/Show.h"

using namespace std;
using namespace Sunrise::DesignPatterns;

void ShowHelp(const string &program)
{
    cout << "Using:" << endl;
    cout << program << " { All | Design Pattern Name | AbstractFactory | Adapter | ... }" << endl;
}

typedef unordered_set<string> ShowName;

template<typename TShow>
void Run(const ShowName &names)
{
    TShow show;
    string name(show.Name());
    if (names.find("all") != names.end() || 
        names.find(to_lower(remove_space(name))) != names.end())
    {
        show.Run();
    }
}

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        ShowName names;
        for (int i = 0; i < argc - 1; ++i)
        {
            string name(argv[i + 1]);
            to_lower(trim(name));
            names.insert(name);
        }

        Run<AbstractFactory::Show>(names);
        Run<Builder::Show>(names);
        Run<FactoryMethod::Show>(names);
        Run<Prototype::Show>(names);
        Run<Singleton::Show>(names);
        Run<Adapter::Show>(names);
        Run<Bridge::Show>(names);
        Run<Composite::Show>(names);
        Run<Decorator::Show>(names);
        Run<Facade::Show>(names);
        Run<Flyweight::Show>(names);
        Run<Proxy::Show>(names);
        Run<ChainOfResponsibility::Show>(names);
        Run<Command::Show>(names);
        Run<Interpreter::Show>(names);
        Run<Iterator::Show>(names);
        Run<Mediator::Show>(names);
        Run<Memento::Show>(names);
        Run<Observer::Show>(names);
        Run<State::Show>(names);
        Run<Strategy::Show>(names);
        Run<TemplateMethod::Show>(names);
        Run<Visitor::Show>(names);
    }
    else
    {
        string program(argv[0]);
        auto pos = program.find_last_of("/\\");
        if (pos != string::npos)
        {
            program.erase(0, ++pos);
        }
        ShowHelp(program);
    }

    getchar();

    return 0;
}