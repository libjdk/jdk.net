#include <jdk/net/NetworkPermission.h>

#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace jdk {
	namespace net {

$FieldInfo _NetworkPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NetworkPermission, serialVersionUID)},
	{}
};

$MethodInfo _NetworkPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NetworkPermission::*)($String*)>(&NetworkPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NetworkPermission::*)($String*,$String*)>(&NetworkPermission::init$))},
	{}
};

$ClassInfo _NetworkPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.net.NetworkPermission",
	"java.security.BasicPermission",
	nullptr,
	_NetworkPermission_FieldInfo_,
	_NetworkPermission_MethodInfo_
};

$Object* allocate$NetworkPermission($Class* clazz) {
	return $of($alloc(NetworkPermission));
}

void NetworkPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void NetworkPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

NetworkPermission::NetworkPermission() {
}

$Class* NetworkPermission::load$($String* name, bool initialize) {
	$loadClass(NetworkPermission, name, initialize, &_NetworkPermission_ClassInfo_, allocate$NetworkPermission);
	return class$;
}

$Class* NetworkPermission::class$ = nullptr;

	} // net
} // jdk