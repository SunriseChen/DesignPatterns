#include "Client.h"
#include <memory>
#include <iostream>
#include "ConcreteBuilder.h"
#include "Director.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Builder {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    auto builder = make_shared<ConcreteBuilder>();
    Director director(builder);
    director.Construct();

    // 表示被构造的复杂对象。ConcreteBuilder 创建该产品的内部表示并定义它的装配过程。
    // 包含定义组成部件的类，包括将这些部件装配成最终产品的接口。 
    auto product = builder->GetResult();
    cout << product;
}

} } }