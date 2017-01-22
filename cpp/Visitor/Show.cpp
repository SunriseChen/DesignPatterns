#include "Show.h"
#include <iostream>
#include "Client.h"
#include "ObjectStructure.h"
#include "ConcreteVisitor1.h"
#include "ConcreteVisitor2.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

Show::Show()
{
    cout << "Visitor Start:" << endl;
}

Show::~Show()
{
    cout << "Visitor Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    ConcreteElementA elementA;
    ConcreteElementB elementB;
    ObjectStructure objectStructure(list<Element *> { &elementA, &elementB });
    Client client(objectStructure);

    ConcreteVisitor1 visitor1;
    client.Run(visitor1);
    ConcreteVisitor2 visitor2;
    client.Run(visitor2);
}

} } }