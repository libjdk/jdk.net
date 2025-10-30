#include <jdk/net/Sockets$KeepAliveOptions.h>

#include <java/net/Socket.h>
#include <java/net/SocketOption.h>
#include <java/util/Collection.h>
#include <java/util/Set.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <jdk/net/Sockets.h>
#include <jcpp.h>

#undef AVAILABLE
#undef TCP_KEEPCOUNT
#undef TCP_KEEPIDLE
#undef TCP_KEEPINTERVAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $SocketOption = ::java::net::SocketOption;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions = ::jdk::net::ExtendedSocketOptions;
using $Sockets = ::jdk::net::Sockets;

namespace jdk {
	namespace net {

$FieldInfo _Sockets$KeepAliveOptions_FieldInfo_[] = {
	{"AVAILABLE", "Z", nullptr, $STATIC | $FINAL, $staticField(Sockets$KeepAliveOptions, AVAILABLE)},
	{}
};

$MethodInfo _Sockets$KeepAliveOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Sockets$KeepAliveOptions::*)()>(&Sockets$KeepAliveOptions::init$))},
	{}
};

$InnerClassInfo _Sockets$KeepAliveOptions_InnerClassesInfo_[] = {
	{"jdk.net.Sockets$KeepAliveOptions", "jdk.net.Sockets", "KeepAliveOptions", $STATIC},
	{}
};

$ClassInfo _Sockets$KeepAliveOptions_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.net.Sockets$KeepAliveOptions",
	"java.lang.Object",
	nullptr,
	_Sockets$KeepAliveOptions_FieldInfo_,
	_Sockets$KeepAliveOptions_MethodInfo_,
	nullptr,
	nullptr,
	_Sockets$KeepAliveOptions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.net.Sockets"
};

$Object* allocate$Sockets$KeepAliveOptions($Class* clazz) {
	return $of($alloc(Sockets$KeepAliveOptions));
}

bool Sockets$KeepAliveOptions::AVAILABLE = false;

void Sockets$KeepAliveOptions::init$() {
}

void clinit$Sockets$KeepAliveOptions($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Set, s, $$new($Socket)->supportedOptions());
		$init($ExtendedSocketOptions);
		Sockets$KeepAliveOptions::AVAILABLE = $nc(s)->containsAll($($Set::of($ExtendedSocketOptions::TCP_KEEPCOUNT, $ExtendedSocketOptions::TCP_KEEPIDLE, $ExtendedSocketOptions::TCP_KEEPINTERVAL)));
	}
}

Sockets$KeepAliveOptions::Sockets$KeepAliveOptions() {
}

$Class* Sockets$KeepAliveOptions::load$($String* name, bool initialize) {
	$loadClass(Sockets$KeepAliveOptions, name, initialize, &_Sockets$KeepAliveOptions_ClassInfo_, clinit$Sockets$KeepAliveOptions, allocate$Sockets$KeepAliveOptions);
	return class$;
}

$Class* Sockets$KeepAliveOptions::class$ = nullptr;

	} // net
} // jdk