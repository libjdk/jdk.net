#include <ProxyServer$1.h>

#include <ProxyServer.h>
#include <jcpp.h>

using $ProxyServer = ::ProxyServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

$FieldInfo _ProxyServer$1_FieldInfo_[] = {
	{"this$0", "LProxyServer;", nullptr, $FINAL | $SYNTHETIC, $field(ProxyServer$1, this$0)},
	{}
};

$MethodInfo _ProxyServer$1_MethodInfo_[] = {
	{"<init>", "(LProxyServer;)V", nullptr, 0, $method(static_cast<void(ProxyServer$1::*)($ProxyServer*)>(&ProxyServer$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProxyServer$1_EnclosingMethodInfo_ = {
	"ProxyServer",
	"run",
	"()V"
};

$InnerClassInfo _ProxyServer$1_InnerClassesInfo_[] = {
	{"ProxyServer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProxyServer$1_ClassInfo_ = {
	$ACC_SUPER,
	"ProxyServer$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ProxyServer$1_FieldInfo_,
	_ProxyServer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_ProxyServer$1_EnclosingMethodInfo_,
	_ProxyServer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ProxyServer"
};

$Object* allocate$ProxyServer$1($Class* clazz) {
	return $of($alloc(ProxyServer$1));
}

void ProxyServer$1::init$($ProxyServer* this$0) {
	$set(this, this$0, this$0);
}

$Object* ProxyServer$1::run() {
	this->this$0->execute();
	return $of(nullptr);
}

ProxyServer$1::ProxyServer$1() {
}

$Class* ProxyServer$1::load$($String* name, bool initialize) {
	$loadClass(ProxyServer$1, name, initialize, &_ProxyServer$1_ClassInfo_, allocate$ProxyServer$1);
	return class$;
}

$Class* ProxyServer$1::class$ = nullptr;