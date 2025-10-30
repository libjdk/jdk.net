#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions$1.h>

#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ExtendedSocketOptions$PlatformSocketOptions = ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions;

namespace jdk {
	namespace net {

$MethodInfo _ExtendedSocketOptions$PlatformSocketOptions$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ExtendedSocketOptions$PlatformSocketOptions$1::*)()>(&ExtendedSocketOptions$PlatformSocketOptions$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ExtendedSocketOptions$PlatformSocketOptions$1_EnclosingMethodInfo_ = {
	"jdk.net.ExtendedSocketOptions$PlatformSocketOptions",
	"create",
	"()Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;"
};

$InnerClassInfo _ExtendedSocketOptions$PlatformSocketOptions$1_InnerClassesInfo_[] = {
	{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions", "jdk.net.ExtendedSocketOptions", "PlatformSocketOptions", $STATIC},
	{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExtendedSocketOptions$PlatformSocketOptions$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.net.ExtendedSocketOptions$PlatformSocketOptions$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ExtendedSocketOptions$PlatformSocketOptions$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_ExtendedSocketOptions$PlatformSocketOptions$1_EnclosingMethodInfo_,
	_ExtendedSocketOptions$PlatformSocketOptions$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.net.ExtendedSocketOptions"
};

$Object* allocate$ExtendedSocketOptions$PlatformSocketOptions$1($Class* clazz) {
	return $of($alloc(ExtendedSocketOptions$PlatformSocketOptions$1));
}

void ExtendedSocketOptions$PlatformSocketOptions$1::init$() {
}

$Object* ExtendedSocketOptions$PlatformSocketOptions$1::run() {
	return $of($System::getProperty("os.name"_s));
}

ExtendedSocketOptions$PlatformSocketOptions$1::ExtendedSocketOptions$PlatformSocketOptions$1() {
}

$Class* ExtendedSocketOptions$PlatformSocketOptions$1::load$($String* name, bool initialize) {
	$loadClass(ExtendedSocketOptions$PlatformSocketOptions$1, name, initialize, &_ExtendedSocketOptions$PlatformSocketOptions$1_ClassInfo_, allocate$ExtendedSocketOptions$PlatformSocketOptions$1);
	return class$;
}

$Class* ExtendedSocketOptions$PlatformSocketOptions$1::class$ = nullptr;

	} // net
} // jdk