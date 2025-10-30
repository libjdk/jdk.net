#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>

#include <java/lang/AssertionError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions$1.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <jdk/net/UnixDomainPrincipal.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ExtendedSocketOptions = ::jdk::net::ExtendedSocketOptions;
using $ExtendedSocketOptions$PlatformSocketOptions$1 = ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions$1;
using $UnixDomainPrincipal = ::jdk::net::UnixDomainPrincipal;

namespace jdk {
	namespace net {

$FieldInfo _ExtendedSocketOptions$PlatformSocketOptions_FieldInfo_[] = {
	{"instance", "Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedSocketOptions$PlatformSocketOptions, instance)},
	{}
};

$MethodInfo _ExtendedSocketOptions$PlatformSocketOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ExtendedSocketOptions$PlatformSocketOptions::*)()>(&ExtendedSocketOptions$PlatformSocketOptions::init$))},
	{"create", "()Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;", nullptr, $PRIVATE | $STATIC, $method(static_cast<ExtendedSocketOptions$PlatformSocketOptions*(*)()>(&ExtendedSocketOptions$PlatformSocketOptions::create))},
	{"get", "()Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;", nullptr, $STATIC, $method(static_cast<ExtendedSocketOptions$PlatformSocketOptions*(*)()>(&ExtendedSocketOptions$PlatformSocketOptions::get))},
	{"getIncomingNapiId", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getQuickAck", "(I)Z", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getSoPeerCred", "(I)Ljdk/net/UnixDomainPrincipal;", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getTcpKeepAliveIntvl", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getTcpKeepAliveTime", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getTcpkeepAliveProbes", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"incomingNapiIdSupported", "()Z", nullptr, 0},
	{"keepAliveOptionsSupported", "()Z", nullptr, 0},
	{"newInstance", "(Ljava/lang/String;)Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;", nullptr, $PRIVATE | $STATIC, $method(static_cast<ExtendedSocketOptions$PlatformSocketOptions*(*)($String*)>(&ExtendedSocketOptions$PlatformSocketOptions::newInstance))},
	{"peerCredentialsSupported", "()Z", nullptr, 0},
	{"quickAckSupported", "()Z", nullptr, 0},
	{"setQuickAck", "(IZ)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"setTcpKeepAliveIntvl", "(II)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"setTcpKeepAliveTime", "(II)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"setTcpkeepAliveProbes", "(II)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{}
};

$InnerClassInfo _ExtendedSocketOptions$PlatformSocketOptions_InnerClassesInfo_[] = {
	{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions", "jdk.net.ExtendedSocketOptions", "PlatformSocketOptions", $STATIC},
	{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExtendedSocketOptions$PlatformSocketOptions_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.net.ExtendedSocketOptions$PlatformSocketOptions",
	"java.lang.Object",
	nullptr,
	_ExtendedSocketOptions$PlatformSocketOptions_FieldInfo_,
	_ExtendedSocketOptions$PlatformSocketOptions_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedSocketOptions$PlatformSocketOptions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.net.ExtendedSocketOptions"
};

$Object* allocate$ExtendedSocketOptions$PlatformSocketOptions($Class* clazz) {
	return $of($alloc(ExtendedSocketOptions$PlatformSocketOptions));
}

ExtendedSocketOptions$PlatformSocketOptions* ExtendedSocketOptions$PlatformSocketOptions::instance = nullptr;

void ExtendedSocketOptions$PlatformSocketOptions::init$() {
}

ExtendedSocketOptions$PlatformSocketOptions* ExtendedSocketOptions$PlatformSocketOptions::newInstance($String* cn) {
	$init(ExtendedSocketOptions$PlatformSocketOptions);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* c = nullptr;
	try {
		c = $Class::forName(cn);
		return $cast(ExtendedSocketOptions$PlatformSocketOptions, $nc($($nc(c)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
	} catch ($ReflectiveOperationException& x) {
		$throwNew($AssertionError, $of(x));
	}
	$shouldNotReachHere();
}

ExtendedSocketOptions$PlatformSocketOptions* ExtendedSocketOptions$PlatformSocketOptions::create() {
	$init(ExtendedSocketOptions$PlatformSocketOptions);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, osname, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ExtendedSocketOptions$PlatformSocketOptions$1)))));
	if ("Linux"_s->equals(osname)) {
		return newInstance("jdk.net.LinuxSocketOptions"_s);
	} else if ($nc(osname)->startsWith("Mac"_s)) {
		return newInstance("jdk.net.MacOSXSocketOptions"_s);
	} else {
		return $new(ExtendedSocketOptions$PlatformSocketOptions);
	}
}

ExtendedSocketOptions$PlatformSocketOptions* ExtendedSocketOptions$PlatformSocketOptions::get() {
	$init(ExtendedSocketOptions$PlatformSocketOptions);
	return ExtendedSocketOptions$PlatformSocketOptions::instance;
}

bool ExtendedSocketOptions$PlatformSocketOptions::peerCredentialsSupported() {
	return false;
}

void ExtendedSocketOptions$PlatformSocketOptions::setQuickAck(int32_t fd, bool on) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_QUICKACK option"_s);
}

bool ExtendedSocketOptions$PlatformSocketOptions::getQuickAck(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_QUICKACK option"_s);
	$shouldNotReachHere();
}

bool ExtendedSocketOptions$PlatformSocketOptions::quickAckSupported() {
	return false;
}

bool ExtendedSocketOptions$PlatformSocketOptions::keepAliveOptionsSupported() {
	return false;
}

void ExtendedSocketOptions$PlatformSocketOptions::setTcpkeepAliveProbes(int32_t fd, int32_t value) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPCNT option"_s);
}

void ExtendedSocketOptions$PlatformSocketOptions::setTcpKeepAliveTime(int32_t fd, int32_t value) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPIDLE option"_s);
}

$UnixDomainPrincipal* ExtendedSocketOptions$PlatformSocketOptions::getSoPeerCred(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported SO_PEERCRED option"_s);
	$shouldNotReachHere();
}

void ExtendedSocketOptions$PlatformSocketOptions::setTcpKeepAliveIntvl(int32_t fd, int32_t value) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPINTVL option"_s);
}

int32_t ExtendedSocketOptions$PlatformSocketOptions::getTcpkeepAliveProbes(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPCNT option"_s);
	$shouldNotReachHere();
}

int32_t ExtendedSocketOptions$PlatformSocketOptions::getTcpKeepAliveTime(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPIDLE option"_s);
	$shouldNotReachHere();
}

int32_t ExtendedSocketOptions$PlatformSocketOptions::getTcpKeepAliveIntvl(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPINTVL option"_s);
	$shouldNotReachHere();
}

bool ExtendedSocketOptions$PlatformSocketOptions::incomingNapiIdSupported() {
	return false;
}

int32_t ExtendedSocketOptions$PlatformSocketOptions::getIncomingNapiId(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported SO_INCOMING_NAPI_ID socket option"_s);
	$shouldNotReachHere();
}

void clinit$ExtendedSocketOptions$PlatformSocketOptions($Class* class$) {
	$assignStatic(ExtendedSocketOptions$PlatformSocketOptions::instance, ExtendedSocketOptions$PlatformSocketOptions::create());
}

ExtendedSocketOptions$PlatformSocketOptions::ExtendedSocketOptions$PlatformSocketOptions() {
}

$Class* ExtendedSocketOptions$PlatformSocketOptions::load$($String* name, bool initialize) {
	$loadClass(ExtendedSocketOptions$PlatformSocketOptions, name, initialize, &_ExtendedSocketOptions$PlatformSocketOptions_ClassInfo_, clinit$ExtendedSocketOptions$PlatformSocketOptions, allocate$ExtendedSocketOptions$PlatformSocketOptions);
	return class$;
}

$Class* ExtendedSocketOptions$PlatformSocketOptions::class$ = nullptr;

	} // net
} // jdk