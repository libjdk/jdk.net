#include <jdk/net/ExtendedSocketOptions$1.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/InternalError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/SocketException.h>
#include <java/net/SocketOption.h>
#include <java/util/Set.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <sun/net/ext/ExtendedSocketOptions.h>
#include <jcpp.h>

#undef SO_INCOMING_NAPI_ID
#undef SO_PEERCRED
#undef TCP_KEEPCOUNT
#undef TCP_KEEPIDLE
#undef TCP_KEEPINTERVAL
#undef TCP_QUICKACK

using $FileDescriptor = ::java::io::FileDescriptor;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SocketException = ::java::net::SocketException;
using $SocketOption = ::java::net::SocketOption;
using $Set = ::java::util::Set;
using $1ExtendedSocketOptions = ::jdk::net::ExtendedSocketOptions;
using $ExtendedSocketOptions = ::sun::net::ext::ExtendedSocketOptions;

namespace jdk {
	namespace net {

$MethodInfo _ExtendedSocketOptions$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ExtendedSocketOptions$1::*)($Set*)>(&ExtendedSocketOptions$1::init$))},
	{"getOption", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption;)Ljava/lang/Object;", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption<*>;)Ljava/lang/Object;", $PUBLIC, nullptr, "java.net.SocketException"},
	{"setOption", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption;Ljava/lang/Object;)V", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption<*>;Ljava/lang/Object;)V", $PUBLIC, nullptr, "java.net.SocketException"},
	{}
};

$EnclosingMethodInfo _ExtendedSocketOptions$1_EnclosingMethodInfo_ = {
	"jdk.net.ExtendedSocketOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _ExtendedSocketOptions$1_InnerClassesInfo_[] = {
	{"jdk.net.ExtendedSocketOptions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExtendedSocketOptions$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.net.ExtendedSocketOptions$1",
	"sun.net.ext.ExtendedSocketOptions",
	nullptr,
	nullptr,
	_ExtendedSocketOptions$1_MethodInfo_,
	nullptr,
	&_ExtendedSocketOptions$1_EnclosingMethodInfo_,
	_ExtendedSocketOptions$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.net.ExtendedSocketOptions"
};

$Object* allocate$ExtendedSocketOptions$1($Class* clazz) {
	return $of($alloc(ExtendedSocketOptions$1));
}

void ExtendedSocketOptions$1::init$($Set* arg0) {
	$ExtendedSocketOptions::init$(arg0);
}

void ExtendedSocketOptions$1::setOption($FileDescriptor* fd, $SocketOption* option, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (fd == nullptr || !$nc(fd)->valid()) {
		$throwNew($SocketException, "socket closed"_s);
	}
	$init($1ExtendedSocketOptions);
	if (option == $1ExtendedSocketOptions::TCP_QUICKACK) {
		$1ExtendedSocketOptions::setQuickAckOption(fd, $nc(($cast($Boolean, value)))->booleanValue());
	} else {
		if (option == $1ExtendedSocketOptions::TCP_KEEPCOUNT) {
			$1ExtendedSocketOptions::setTcpkeepAliveProbes(fd, $nc(($cast($Integer, value)))->intValue());
		} else {
			if (option == $1ExtendedSocketOptions::TCP_KEEPIDLE) {
				$1ExtendedSocketOptions::setTcpKeepAliveTime(fd, $nc(($cast($Integer, value)))->intValue());
			} else {
				if (option == $1ExtendedSocketOptions::TCP_KEEPINTERVAL) {
					$1ExtendedSocketOptions::setTcpKeepAliveIntvl(fd, $nc(($cast($Integer, value)))->intValue());
				} else {
					if (option == $1ExtendedSocketOptions::SO_INCOMING_NAPI_ID) {
						if (!$1ExtendedSocketOptions::incomingNapiIdOptSupported) {
							$throwNew($UnsupportedOperationException, $$str({"Attempt to set unsupported option "_s, option}));
						} else {
							$throwNew($SocketException, $$str({"Attempt to set read only option "_s, option}));
						}
					} else {
						if (option == $1ExtendedSocketOptions::SO_PEERCRED) {
							$throwNew($SocketException, "SO_PEERCRED cannot be set "_s);
						} else {
							$throwNew($InternalError, $$str({"Unexpected option "_s, option}));
						}
					}
				}
			}
		}
	}
}

$Object* ExtendedSocketOptions$1::getOption($FileDescriptor* fd, $SocketOption* option) {
	if (fd == nullptr || !$nc(fd)->valid()) {
		$throwNew($SocketException, "socket closed"_s);
	}
	$init($1ExtendedSocketOptions);
	if (option == $1ExtendedSocketOptions::TCP_QUICKACK) {
		return $of($1ExtendedSocketOptions::getQuickAckOption(fd));
	} else {
		if (option == $1ExtendedSocketOptions::TCP_KEEPCOUNT) {
			return $of($Integer::valueOf($1ExtendedSocketOptions::getTcpkeepAliveProbes(fd)));
		} else {
			if (option == $1ExtendedSocketOptions::TCP_KEEPIDLE) {
				return $of($Integer::valueOf($1ExtendedSocketOptions::getTcpKeepAliveTime(fd)));
			} else {
				if (option == $1ExtendedSocketOptions::TCP_KEEPINTERVAL) {
					return $of($Integer::valueOf($1ExtendedSocketOptions::getTcpKeepAliveIntvl(fd)));
				} else {
					if (option == $1ExtendedSocketOptions::SO_PEERCRED) {
						return $of($1ExtendedSocketOptions::getSoPeerCred(fd));
					} else {
						if (option == $1ExtendedSocketOptions::SO_INCOMING_NAPI_ID) {
							return $of($Integer::valueOf($1ExtendedSocketOptions::getIncomingNapiId(fd)));
						} else {
							$throwNew($InternalError, $$str({"Unexpected option "_s, option}));
						}
					}
				}
			}
		}
	}
}

ExtendedSocketOptions$1::ExtendedSocketOptions$1() {
}

$Class* ExtendedSocketOptions$1::load$($String* name, bool initialize) {
	$loadClass(ExtendedSocketOptions$1, name, initialize, &_ExtendedSocketOptions$1_ClassInfo_, allocate$ExtendedSocketOptions$1);
	return class$;
}

$Class* ExtendedSocketOptions$1::class$ = nullptr;

	} // net
} // jdk