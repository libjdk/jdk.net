#include <jdk/net/Sockets$QuickAck.h>

#include <java/net/Socket.h>
#include <java/net/SocketOption.h>
#include <java/util/Set.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <jdk/net/Sockets.h>
#include <jcpp.h>

#undef TCP_QUICKACK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $SocketOption = ::java::net::SocketOption;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions = ::jdk::net::ExtendedSocketOptions;
using $Sockets = ::jdk::net::Sockets;

namespace jdk {
	namespace net {

$FieldInfo _Sockets$QuickAck_FieldInfo_[] = {
	{"available", "Z", nullptr, $STATIC | $FINAL, $staticField(Sockets$QuickAck, available)},
	{}
};

$MethodInfo _Sockets$QuickAck_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Sockets$QuickAck::*)()>(&Sockets$QuickAck::init$))},
	{}
};

$InnerClassInfo _Sockets$QuickAck_InnerClassesInfo_[] = {
	{"jdk.net.Sockets$QuickAck", "jdk.net.Sockets", "QuickAck", $STATIC},
	{}
};

$ClassInfo _Sockets$QuickAck_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.net.Sockets$QuickAck",
	"java.lang.Object",
	nullptr,
	_Sockets$QuickAck_FieldInfo_,
	_Sockets$QuickAck_MethodInfo_,
	nullptr,
	nullptr,
	_Sockets$QuickAck_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.net.Sockets"
};

$Object* allocate$Sockets$QuickAck($Class* clazz) {
	return $of($alloc(Sockets$QuickAck));
}

bool Sockets$QuickAck::available = false;

void Sockets$QuickAck::init$() {
}

void clinit$Sockets$QuickAck($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Set, s, $$new($Socket)->supportedOptions());
		$init($ExtendedSocketOptions);
		Sockets$QuickAck::available = $nc(s)->contains($ExtendedSocketOptions::TCP_QUICKACK);
	}
}

Sockets$QuickAck::Sockets$QuickAck() {
}

$Class* Sockets$QuickAck::load$($String* name, bool initialize) {
	$loadClass(Sockets$QuickAck, name, initialize, &_Sockets$QuickAck_ClassInfo_, clinit$Sockets$QuickAck, allocate$Sockets$QuickAck);
	return class$;
}

$Class* Sockets$QuickAck::class$ = nullptr;

	} // net
} // jdk