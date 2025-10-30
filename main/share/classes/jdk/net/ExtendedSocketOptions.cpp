#include <jdk/net/ExtendedSocketOptions.h>

#include <java/io/FileDescriptor.h>
#include <java/net/SocketOption.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/net/ExtendedSocketOptions$1.h>
#include <jdk/net/ExtendedSocketOptions$ExtSocketOption.h>
#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>
#include <jdk/net/UnixDomainPrincipal.h>
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
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketOption = ::java::net::SocketOption;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ExtendedSocketOptions$1 = ::jdk::net::ExtendedSocketOptions$1;
using $ExtendedSocketOptions$ExtSocketOption = ::jdk::net::ExtendedSocketOptions$ExtSocketOption;
using $ExtendedSocketOptions$PlatformSocketOptions = ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions;
using $UnixDomainPrincipal = ::jdk::net::UnixDomainPrincipal;
using $ExtendedSocketOptions = ::sun::net::ext::ExtendedSocketOptions;

namespace jdk {
	namespace net {

$FieldInfo _ExtendedSocketOptions_FieldInfo_[] = {
	{"TCP_QUICKACK", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, TCP_QUICKACK)},
	{"TCP_KEEPIDLE", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, TCP_KEEPIDLE)},
	{"TCP_KEEPINTERVAL", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, TCP_KEEPINTERVAL)},
	{"TCP_KEEPCOUNT", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, TCP_KEEPCOUNT)},
	{"SO_INCOMING_NAPI_ID", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, SO_INCOMING_NAPI_ID)},
	{"SO_PEERCRED", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljdk/net/UnixDomainPrincipal;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, SO_PEERCRED)},
	{"platformSocketOptions", "Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, platformSocketOptions)},
	{"quickAckSupported", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, quickAckSupported)},
	{"keepAliveOptSupported", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, keepAliveOptSupported)},
	{"peerCredentialsSupported", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, peerCredentialsSupported)},
	{"incomingNapiIdOptSupported", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, incomingNapiIdOptSupported)},
	{"extendedOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, extendedOptions)},
	{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedSocketOptions, fdAccess)},
	{}
};

$MethodInfo _ExtendedSocketOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedSocketOptions::*)()>(&ExtendedSocketOptions::init$))},
	{"getIncomingNapiId", "(Ljava/io/FileDescriptor;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*)>(&ExtendedSocketOptions::getIncomingNapiId)), "java.net.SocketException"},
	{"getQuickAckOption", "(Ljava/io/FileDescriptor;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($FileDescriptor*)>(&ExtendedSocketOptions::getQuickAckOption)), "java.net.SocketException"},
	{"getSoPeerCred", "(Ljava/io/FileDescriptor;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($FileDescriptor*)>(&ExtendedSocketOptions::getSoPeerCred)), "java.net.SocketException"},
	{"getTcpKeepAliveIntvl", "(Ljava/io/FileDescriptor;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*)>(&ExtendedSocketOptions::getTcpKeepAliveIntvl)), "java.net.SocketException"},
	{"getTcpKeepAliveTime", "(Ljava/io/FileDescriptor;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*)>(&ExtendedSocketOptions::getTcpKeepAliveTime)), "java.net.SocketException"},
	{"getTcpkeepAliveProbes", "(Ljava/io/FileDescriptor;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*)>(&ExtendedSocketOptions::getTcpkeepAliveProbes)), "java.net.SocketException"},
	{"options", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $STATIC, $method(static_cast<$Set*(*)()>(&ExtendedSocketOptions::options))},
	{"setQuickAckOption", "(Ljava/io/FileDescriptor;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FileDescriptor*,bool)>(&ExtendedSocketOptions::setQuickAckOption)), "java.net.SocketException"},
	{"setTcpKeepAliveIntvl", "(Ljava/io/FileDescriptor;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FileDescriptor*,int32_t)>(&ExtendedSocketOptions::setTcpKeepAliveIntvl)), "java.net.SocketException"},
	{"setTcpKeepAliveTime", "(Ljava/io/FileDescriptor;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FileDescriptor*,int32_t)>(&ExtendedSocketOptions::setTcpKeepAliveTime)), "java.net.SocketException"},
	{"setTcpkeepAliveProbes", "(Ljava/io/FileDescriptor;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FileDescriptor*,int32_t)>(&ExtendedSocketOptions::setTcpkeepAliveProbes)), "java.net.SocketException"},
	{}
};

$InnerClassInfo _ExtendedSocketOptions_InnerClassesInfo_[] = {
	{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions", "jdk.net.ExtendedSocketOptions", "PlatformSocketOptions", $STATIC},
	{"jdk.net.ExtendedSocketOptions$ExtSocketOption", "jdk.net.ExtendedSocketOptions", "ExtSocketOption", $PRIVATE | $STATIC},
	{"jdk.net.ExtendedSocketOptions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExtendedSocketOptions_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.net.ExtendedSocketOptions",
	"java.lang.Object",
	nullptr,
	_ExtendedSocketOptions_FieldInfo_,
	_ExtendedSocketOptions_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedSocketOptions_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.net.ExtendedSocketOptions$PlatformSocketOptions,jdk.net.ExtendedSocketOptions$PlatformSocketOptions$1,jdk.net.ExtendedSocketOptions$ExtSocketOption,jdk.net.ExtendedSocketOptions$1"
};

$Object* allocate$ExtendedSocketOptions($Class* clazz) {
	return $of($alloc(ExtendedSocketOptions));
}

$SocketOption* ExtendedSocketOptions::TCP_QUICKACK = nullptr;
$SocketOption* ExtendedSocketOptions::TCP_KEEPIDLE = nullptr;
$SocketOption* ExtendedSocketOptions::TCP_KEEPINTERVAL = nullptr;
$SocketOption* ExtendedSocketOptions::TCP_KEEPCOUNT = nullptr;
$SocketOption* ExtendedSocketOptions::SO_INCOMING_NAPI_ID = nullptr;
$SocketOption* ExtendedSocketOptions::SO_PEERCRED = nullptr;
$ExtendedSocketOptions$PlatformSocketOptions* ExtendedSocketOptions::platformSocketOptions = nullptr;
bool ExtendedSocketOptions::quickAckSupported = false;
bool ExtendedSocketOptions::keepAliveOptSupported = false;
bool ExtendedSocketOptions::peerCredentialsSupported = false;
bool ExtendedSocketOptions::incomingNapiIdOptSupported = false;
$Set* ExtendedSocketOptions::extendedOptions = nullptr;
$JavaIOFileDescriptorAccess* ExtendedSocketOptions::fdAccess = nullptr;

void ExtendedSocketOptions::init$() {
}

$Set* ExtendedSocketOptions::options() {
	$init(ExtendedSocketOptions);
	$useLocalCurrentObjectStackCache();
	$var($Set, options, $new($HashSet));
	if (ExtendedSocketOptions::quickAckSupported) {
		options->add(ExtendedSocketOptions::TCP_QUICKACK);
	}
	if (ExtendedSocketOptions::incomingNapiIdOptSupported) {
		options->add(ExtendedSocketOptions::SO_INCOMING_NAPI_ID);
	}
	if (ExtendedSocketOptions::keepAliveOptSupported) {
		options->addAll($($Set::of(ExtendedSocketOptions::TCP_KEEPCOUNT, ExtendedSocketOptions::TCP_KEEPIDLE, ExtendedSocketOptions::TCP_KEEPINTERVAL)));
	}
	if (ExtendedSocketOptions::peerCredentialsSupported) {
		options->add(ExtendedSocketOptions::SO_PEERCRED);
	}
	return $Collections::unmodifiableSet(options);
}

void ExtendedSocketOptions::setQuickAckOption($FileDescriptor* fd, bool enable) {
	$init(ExtendedSocketOptions);
	$nc(ExtendedSocketOptions::platformSocketOptions)->setQuickAck($nc(ExtendedSocketOptions::fdAccess)->get(fd), enable);
}

$Object* ExtendedSocketOptions::getSoPeerCred($FileDescriptor* fd) {
	$init(ExtendedSocketOptions);
	return $of($nc(ExtendedSocketOptions::platformSocketOptions)->getSoPeerCred($nc(ExtendedSocketOptions::fdAccess)->get(fd)));
}

$Object* ExtendedSocketOptions::getQuickAckOption($FileDescriptor* fd) {
	$init(ExtendedSocketOptions);
	return $of($Boolean::valueOf($nc(ExtendedSocketOptions::platformSocketOptions)->getQuickAck($nc(ExtendedSocketOptions::fdAccess)->get(fd))));
}

void ExtendedSocketOptions::setTcpkeepAliveProbes($FileDescriptor* fd, int32_t value) {
	$init(ExtendedSocketOptions);
	$nc(ExtendedSocketOptions::platformSocketOptions)->setTcpkeepAliveProbes($nc(ExtendedSocketOptions::fdAccess)->get(fd), value);
}

void ExtendedSocketOptions::setTcpKeepAliveTime($FileDescriptor* fd, int32_t value) {
	$init(ExtendedSocketOptions);
	$nc(ExtendedSocketOptions::platformSocketOptions)->setTcpKeepAliveTime($nc(ExtendedSocketOptions::fdAccess)->get(fd), value);
}

void ExtendedSocketOptions::setTcpKeepAliveIntvl($FileDescriptor* fd, int32_t value) {
	$init(ExtendedSocketOptions);
	$nc(ExtendedSocketOptions::platformSocketOptions)->setTcpKeepAliveIntvl($nc(ExtendedSocketOptions::fdAccess)->get(fd), value);
}

int32_t ExtendedSocketOptions::getTcpkeepAliveProbes($FileDescriptor* fd) {
	$init(ExtendedSocketOptions);
	return $nc(ExtendedSocketOptions::platformSocketOptions)->getTcpkeepAliveProbes($nc(ExtendedSocketOptions::fdAccess)->get(fd));
}

int32_t ExtendedSocketOptions::getTcpKeepAliveTime($FileDescriptor* fd) {
	$init(ExtendedSocketOptions);
	return $nc(ExtendedSocketOptions::platformSocketOptions)->getTcpKeepAliveTime($nc(ExtendedSocketOptions::fdAccess)->get(fd));
}

int32_t ExtendedSocketOptions::getTcpKeepAliveIntvl($FileDescriptor* fd) {
	$init(ExtendedSocketOptions);
	return $nc(ExtendedSocketOptions::platformSocketOptions)->getTcpKeepAliveIntvl($nc(ExtendedSocketOptions::fdAccess)->get(fd));
}

int32_t ExtendedSocketOptions::getIncomingNapiId($FileDescriptor* fd) {
	$init(ExtendedSocketOptions);
	return $nc(ExtendedSocketOptions::platformSocketOptions)->getIncomingNapiId($nc(ExtendedSocketOptions::fdAccess)->get(fd));
}

void clinit$ExtendedSocketOptions($Class* class$) {
	$load($Boolean);
	$assignStatic(ExtendedSocketOptions::TCP_QUICKACK, $new($ExtendedSocketOptions$ExtSocketOption, "TCP_QUICKACK"_s, $Boolean::class$));
	$load($Integer);
	$assignStatic(ExtendedSocketOptions::TCP_KEEPIDLE, $new($ExtendedSocketOptions$ExtSocketOption, "TCP_KEEPIDLE"_s, $Integer::class$));
	$assignStatic(ExtendedSocketOptions::TCP_KEEPINTERVAL, $new($ExtendedSocketOptions$ExtSocketOption, "TCP_KEEPINTERVAL"_s, $Integer::class$));
	$assignStatic(ExtendedSocketOptions::TCP_KEEPCOUNT, $new($ExtendedSocketOptions$ExtSocketOption, "TCP_KEEPCOUNT"_s, $Integer::class$));
	$assignStatic(ExtendedSocketOptions::SO_INCOMING_NAPI_ID, $new($ExtendedSocketOptions$ExtSocketOption, "SO_INCOMING_NAPI_ID"_s, $Integer::class$));
	$load($UnixDomainPrincipal);
	$assignStatic(ExtendedSocketOptions::SO_PEERCRED, $new($ExtendedSocketOptions$ExtSocketOption, "SO_PEERCRED"_s, $UnixDomainPrincipal::class$));
	$assignStatic(ExtendedSocketOptions::platformSocketOptions, $ExtendedSocketOptions$PlatformSocketOptions::get());
	ExtendedSocketOptions::quickAckSupported = $nc(ExtendedSocketOptions::platformSocketOptions)->quickAckSupported();
	ExtendedSocketOptions::keepAliveOptSupported = $nc(ExtendedSocketOptions::platformSocketOptions)->keepAliveOptionsSupported();
	ExtendedSocketOptions::peerCredentialsSupported = $nc(ExtendedSocketOptions::platformSocketOptions)->peerCredentialsSupported();
	ExtendedSocketOptions::incomingNapiIdOptSupported = $nc(ExtendedSocketOptions::platformSocketOptions)->incomingNapiIdSupported();
	$assignStatic(ExtendedSocketOptions::extendedOptions, ExtendedSocketOptions::options());
	{
		$ExtendedSocketOptions::register$($$new($ExtendedSocketOptions$1, ExtendedSocketOptions::extendedOptions));
	}
	$assignStatic(ExtendedSocketOptions::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
}

ExtendedSocketOptions::ExtendedSocketOptions() {
}

$Class* ExtendedSocketOptions::load$($String* name, bool initialize) {
	$loadClass(ExtendedSocketOptions, name, initialize, &_ExtendedSocketOptions_ClassInfo_, clinit$ExtendedSocketOptions, allocate$ExtendedSocketOptions);
	return class$;
}

$Class* ExtendedSocketOptions::class$ = nullptr;

	} // net
} // jdk