#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Observer {

// 为那些在目标发生改变时需获得通知的对象定义一个更新接口。
class Observer
{
public:
    Observer();

    virtual void Update();
};

} } }