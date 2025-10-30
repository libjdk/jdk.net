#include <jdk/net/Sockets.h>

#include <java/net/DatagramSocket.h>
#include <java/net/MulticastSocket.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <jdk/net/Sockets$KeepAliveOptions.h>
#include <jdk/net/Sockets$QuickAck.h>
#include <jcpp.h>

#undef AVAILABLE
#undef IP_MULTICAST_IF
#undef IP_MULTICAST_LOOP
#undef IP_MULTICAST_TTL
#undef IP_TOS
#undef SO_INCOMING_NAPI_ID
#undef SO_KEEPALIVE
#undef SO_LINGER
#undef SO_RCVBUF
#undef SO_REUSEADDR
#undef SO_REUSEPORT
#undef SO_SNDBUF
#undef TCP_KEEPCOUNT
#undef TCP_KEEPIDLE
#undef TCP_KEEPINTERVAL
#undef TCP_NODELAY
#undef TCP_QUICKACK

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $DatagramSocket = ::java::net::DatagramSocket;
using $MulticastSocket = ::java::net::MulticastSocket;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions = ::jdk::net::ExtendedSocketOptions;
using $ExtendedSocketOptions$PlatformSocketOptions = ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions;
using $Sockets$KeepAliveOptions = ::jdk::net::Sockets$KeepAliveOptions;
using $Sockets$QuickAck = ::jdk::net::Sockets$QuickAck;

namespace jdk {
	namespace net {

$NamedAttribute Sockets_Attribute_var$0[] = {
	{"since", 's', "16"},
	{}
};

$CompoundAttribute _Sockets_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Sockets_Attribute_var$0},
	{}
};

$NamedAttribute Sockets_Attribute_var$1[] = {
	{"since", 's', "16"},
	{}
};

$CompoundAttribute _Sockets_MethodAnnotations_getOption2[] = {
	{"Ljava/lang/Deprecated;", Sockets_Attribute_var$1},
	{}
};

$NamedAttribute Sockets_Attribute_var$2[] = {
	{"since", 's', "16"},
	{}
};

$CompoundAttribute _Sockets_MethodAnnotations_getOption3[] = {
	{"Ljava/lang/Deprecated;", Sockets_Attribute_var$2},
	{}
};

$NamedAttribute Sockets_Attribute_var$3[] = {
	{"since", 's', "16"},
	{}
};

$CompoundAttribute _Sockets_MethodAnnotations_getOption4[] = {
	{"Ljava/lang/Deprecated;", Sockets_Attribute_var$3},
	{}
};

$NamedAttribute Sockets_Attribute_var$4[] = {
	{"since", 's', "16"},
	{}
};

$CompoundAttribute _Sockets_MethodAnnotations_setOption7[] = {
	{"Ljava/lang/Deprecated;", Sockets_Attribute_var$4},
	{}
};

$NamedAttribute Sockets_Attribute_var$5[] = {
	{"since", 's', "16"},
	{}
};

$CompoundAttribute _Sockets_MethodAnnotations_setOption8[] = {
	{"Ljava/lang/Deprecated;", Sockets_Attribute_var$5},
	{}
};

$NamedAttribute Sockets_Attribute_var$6[] = {
	{"since", 's', "16"},
	{}
};

$CompoundAttribute _Sockets_MethodAnnotations_setOption9[] = {
	{"Ljava/lang/Deprecated;", Sockets_Attribute_var$6},
	{}
};

$NamedAttribute Sockets_Attribute_var$7[] = {
	{"since", 's', "16"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Sockets_MethodAnnotations_supportedOptions10[] = {
	{"Ljava/lang/Deprecated;", Sockets_Attribute_var$7},
	{}
};

$FieldInfo _Sockets_FieldInfo_[] = {
	{"options", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/util/Set<Ljava/net/SocketOption<*>;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Sockets, options)},
	{"checkedReusePort", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Sockets, checkedReusePort)},
	{"isReusePortAvailable", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Sockets, isReusePortAvailable$)},
	{}
};

$MethodInfo _Sockets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Sockets::*)()>(&Sockets::init$))},
	{"checkValueType", "(Ljava/lang/Object;Ljava/lang/Class;)V", "(Ljava/lang/Object;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,$Class*)>(&Sockets::checkValueType))},
	{"getOption", "(Ljava/net/Socket;Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/Socket;Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$Object*(*)($Socket*,$SocketOption*)>(&Sockets::getOption)), "java.io.IOException", nullptr, _Sockets_MethodAnnotations_getOption2},
	{"getOption", "(Ljava/net/ServerSocket;Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/ServerSocket;Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$Object*(*)($ServerSocket*,$SocketOption*)>(&Sockets::getOption)), "java.io.IOException", nullptr, _Sockets_MethodAnnotations_getOption3},
	{"getOption", "(Ljava/net/DatagramSocket;Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/DatagramSocket;Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$Object*(*)($DatagramSocket*,$SocketOption*)>(&Sockets::getOption)), "java.io.IOException", nullptr, _Sockets_MethodAnnotations_getOption4},
	{"isReusePortAvailable", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&Sockets::isReusePortAvailable))},
	{"optionSets", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Class<*>;Ljava/util/Set<Ljava/net/SocketOption<*>;>;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)()>(&Sockets::optionSets))},
	{"setOption", "(Ljava/net/Socket;Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/Socket;Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<void(*)($Socket*,$SocketOption*,Object$*)>(&Sockets::setOption)), "java.io.IOException", nullptr, _Sockets_MethodAnnotations_setOption7},
	{"setOption", "(Ljava/net/ServerSocket;Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/ServerSocket;Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<void(*)($ServerSocket*,$SocketOption*,Object$*)>(&Sockets::setOption)), "java.io.IOException", nullptr, _Sockets_MethodAnnotations_setOption8},
	{"setOption", "(Ljava/net/DatagramSocket;Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/DatagramSocket;Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<void(*)($DatagramSocket*,$SocketOption*,Object$*)>(&Sockets::setOption)), "java.io.IOException", nullptr, _Sockets_MethodAnnotations_setOption9},
	{"supportedOptions", "(Ljava/lang/Class;)Ljava/util/Set;", "(Ljava/lang/Class<*>;)Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$Set*(*)($Class*)>(&Sockets::supportedOptions)), nullptr, nullptr, _Sockets_MethodAnnotations_supportedOptions10},
	{}
};

$InnerClassInfo _Sockets_InnerClassesInfo_[] = {
	{"jdk.net.Sockets$KeepAliveOptions", "jdk.net.Sockets", "KeepAliveOptions", $STATIC},
	{"jdk.net.Sockets$QuickAck", "jdk.net.Sockets", "QuickAck", $STATIC},
	{}
};

$ClassInfo _Sockets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.net.Sockets",
	"java.lang.Object",
	nullptr,
	_Sockets_FieldInfo_,
	_Sockets_MethodInfo_,
	nullptr,
	nullptr,
	_Sockets_InnerClassesInfo_,
	_Sockets_Annotations_,
	nullptr,
	"jdk.net.Sockets$KeepAliveOptions,jdk.net.Sockets$QuickAck"
};

$Object* allocate$Sockets($Class* clazz) {
	return $of($alloc(Sockets));
}

$Map* Sockets::options = nullptr;
$volatile(bool) Sockets::checkedReusePort = false;
$volatile(bool) Sockets::isReusePortAvailable$ = false;

void Sockets::init$() {
}

void Sockets::setOption($Socket* s, $SocketOption* name, Object$* value) {
	$init(Sockets);
	$nc(s)->setOption(name, value);
}

$Object* Sockets::getOption($Socket* s, $SocketOption* name) {
	$init(Sockets);
	return $of($nc(s)->getOption(name));
}

void Sockets::setOption($ServerSocket* s, $SocketOption* name, Object$* value) {
	$init(Sockets);
	$nc(s)->setOption(name, value);
}

$Object* Sockets::getOption($ServerSocket* s, $SocketOption* name) {
	$init(Sockets);
	return $of($nc(s)->getOption(name));
}

void Sockets::setOption($DatagramSocket* s, $SocketOption* name, Object$* value) {
	$init(Sockets);
	$nc(s)->setOption(name, value);
}

$Object* Sockets::getOption($DatagramSocket* s, $SocketOption* name) {
	$init(Sockets);
	return $of($nc(s)->getOption(name));
}

$Set* Sockets::supportedOptions($Class* socketType) {
	$init(Sockets);
	$var($Set, set, $cast($Set, $nc(Sockets::options)->get(socketType)));
	if (set == nullptr) {
		$throwNew($IllegalArgumentException, "unknown socket type"_s);
	}
	return set;
}

void Sockets::checkValueType(Object$* value, $Class* type) {
	$init(Sockets);
	$useLocalCurrentObjectStackCache();
	if (!$nc(type)->isAssignableFrom($nc($of(value))->getClass())) {
		$var($String, var$0, $$str({"Found: "_s, $($nc($of(value))->getClass()->toString()), " Expected: "_s}));
		$var($String, s, $concat(var$0, $(type->toString())));
		$throwNew($IllegalArgumentException, s);
	}
}

bool Sockets::isReusePortAvailable() {
	$init(Sockets);
	$useLocalCurrentObjectStackCache();
	if (!Sockets::checkedReusePort) {
		$var($Set, s, $$new($Socket)->supportedOptions());
		$init($StandardSocketOptions);
		Sockets::isReusePortAvailable$ = $nc(s)->contains($StandardSocketOptions::SO_REUSEPORT);
		Sockets::checkedReusePort = true;
	}
	return Sockets::isReusePortAvailable$;
}

$Map* Sockets::optionSets() {
	$init(Sockets);
	$useLocalCurrentObjectStackCache();
	$var($Map, options, $new($HashMap));
	bool incomingNapiIdsupported = $nc($($ExtendedSocketOptions$PlatformSocketOptions::get()))->incomingNapiIdSupported();
	bool reuseportsupported = isReusePortAvailable();
	$var($Set, set, $new($HashSet));
	$init($StandardSocketOptions);
	set->add($StandardSocketOptions::SO_KEEPALIVE);
	set->add($StandardSocketOptions::SO_SNDBUF);
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if (reuseportsupported) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	set->add($StandardSocketOptions::SO_LINGER);
	set->add($StandardSocketOptions::IP_TOS);
	set->add($StandardSocketOptions::TCP_NODELAY);
	$init($Sockets$QuickAck);
	if ($Sockets$QuickAck::available) {
		$init($ExtendedSocketOptions);
		set->add($ExtendedSocketOptions::TCP_QUICKACK);
	}
	$init($Sockets$KeepAliveOptions);
	if ($Sockets$KeepAliveOptions::AVAILABLE) {
		$init($ExtendedSocketOptions);
		set->addAll($($Set::of($ExtendedSocketOptions::TCP_KEEPCOUNT, $ExtendedSocketOptions::TCP_KEEPIDLE, $ExtendedSocketOptions::TCP_KEEPINTERVAL)));
	}
	if (incomingNapiIdsupported) {
		$init($ExtendedSocketOptions);
		set->add($ExtendedSocketOptions::SO_INCOMING_NAPI_ID);
	}
	$assign(set, $Collections::unmodifiableSet(set));
	$load($Socket);
	options->put($Socket::class$, set);
	$assign(set, $new($HashSet));
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if (reuseportsupported) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	if ($Sockets$QuickAck::available) {
		$init($ExtendedSocketOptions);
		set->add($ExtendedSocketOptions::TCP_QUICKACK);
	}
	if ($Sockets$KeepAliveOptions::AVAILABLE) {
		$init($ExtendedSocketOptions);
		set->addAll($($Set::of($ExtendedSocketOptions::TCP_KEEPCOUNT, $ExtendedSocketOptions::TCP_KEEPIDLE, $ExtendedSocketOptions::TCP_KEEPINTERVAL)));
	}
	set->add($StandardSocketOptions::IP_TOS);
	if (incomingNapiIdsupported) {
		$init($ExtendedSocketOptions);
		set->add($ExtendedSocketOptions::SO_INCOMING_NAPI_ID);
	}
	$assign(set, $Collections::unmodifiableSet(set));
	$load($ServerSocket);
	options->put($ServerSocket::class$, set);
	$assign(set, $new($HashSet));
	set->add($StandardSocketOptions::SO_SNDBUF);
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if (reuseportsupported) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	set->add($StandardSocketOptions::IP_TOS);
	if (incomingNapiIdsupported) {
		$init($ExtendedSocketOptions);
		set->add($ExtendedSocketOptions::SO_INCOMING_NAPI_ID);
	}
	$assign(set, $Collections::unmodifiableSet(set));
	$load($DatagramSocket);
	options->put($DatagramSocket::class$, set);
	$assign(set, $new($HashSet));
	set->add($StandardSocketOptions::SO_SNDBUF);
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if (reuseportsupported) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	set->add($StandardSocketOptions::IP_TOS);
	set->add($StandardSocketOptions::IP_MULTICAST_IF);
	set->add($StandardSocketOptions::IP_MULTICAST_TTL);
	set->add($StandardSocketOptions::IP_MULTICAST_LOOP);
	$assign(set, $Collections::unmodifiableSet(set));
	$load($MulticastSocket);
	options->put($MulticastSocket::class$, set);
	return $Collections::unmodifiableMap(options);
}

void clinit$Sockets($Class* class$) {
	$assignStatic(Sockets::options, Sockets::optionSets());
}

Sockets::Sockets() {
}

$Class* Sockets::load$($String* name, bool initialize) {
	$loadClass(Sockets, name, initialize, &_Sockets_ClassInfo_, clinit$Sockets, allocate$Sockets);
	return class$;
}

$Class* Sockets::class$ = nullptr;

	} // net
} // jdk