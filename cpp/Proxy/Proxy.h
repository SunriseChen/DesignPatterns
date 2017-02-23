#pragma once

#include "Subject.h"

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

// 保存一个引用使得代理可以访问实体。若 RealSubject 和 Subject 的接口相同，Proxy 会引用 Subject。
// 提供一个与 Subject 的接口相同的接口，这样代理就可以用来替代实体。
// 控制对实体的存取，并可能负责创建和删除它。
// 其他功能依赖于代理的类型：
// • Remote Proxy 负责对请求及其参数进行编码，并向不同地址空间中的实体发送已编码的请求。
// • Virtual Proxy 可以缓存实体的附加信息，以便延迟对它的访问。例如，动机一节中提到的 ImageProxy 缓存了图像实体的尺寸。
// • Protection Proxy 检查调用者是否具有实现一个请求所必需的访问权限。
class Proxy : public Subject
{
    const Subject &realSubject_;

public:
    Proxy(const Subject &realSubject);

    virtual void Request() const;
};

} } }