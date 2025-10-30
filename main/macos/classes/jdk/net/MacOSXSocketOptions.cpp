#include <jdk/net/MacOSXSocketOptions.h>

#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>
#include <jdk/net/UnixDomainPrincipal.h>
#include <sun/nio/fs/UnixUserPrincipals$Group.h>
#include <sun/nio/fs/UnixUserPrincipals$User.h>
#include <sun/nio/fs/UnixUserPrincipals.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ExtendedSocketOptions$PlatformSocketOptions = ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions;
using $UnixDomainPrincipal = ::jdk::net::UnixDomainPrincipal;
using $UnixUserPrincipals = ::sun::nio::fs::UnixUserPrincipals;
using $UnixUserPrincipals$Group = ::sun::nio::fs::UnixUserPrincipals$Group;
using $UnixUserPrincipals$User = ::sun::nio::fs::UnixUserPrincipals$User;

namespace jdk {
	namespace net {

class MacOSXSocketOptions$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(MacOSXSocketOptions$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(MacOSXSocketOptions::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MacOSXSocketOptions$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MacOSXSocketOptions$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacOSXSocketOptions$$Lambda$lambda$static$0::*)()>(&MacOSXSocketOptions$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MacOSXSocketOptions$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.net.MacOSXSocketOptions$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* MacOSXSocketOptions$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(MacOSXSocketOptions$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MacOSXSocketOptions$$Lambda$lambda$static$0::class$ = nullptr;

$MethodInfo _MacOSXSocketOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacOSXSocketOptions::*)()>(&MacOSXSocketOptions::init$))},
	{"getSoPeerCred", "(I)Ljdk/net/UnixDomainPrincipal;", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getSoPeerCred0", "(I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t)>(&MacOSXSocketOptions::getSoPeerCred0)), "java.net.SocketException"},
	{"getTcpKeepAliveIntvl", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getTcpKeepAliveIntvl0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&MacOSXSocketOptions::getTcpKeepAliveIntvl0)), "java.net.SocketException"},
	{"getTcpKeepAliveTime", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getTcpKeepAliveTime0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&MacOSXSocketOptions::getTcpKeepAliveTime0)), "java.net.SocketException"},
	{"getTcpkeepAliveProbes", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getTcpkeepAliveProbes0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&MacOSXSocketOptions::getTcpkeepAliveProbes0)), "java.net.SocketException"},
	{"keepAliveOptionsSupported", "()Z", nullptr, 0},
	{"keepAliveOptionsSupported0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&MacOSXSocketOptions::keepAliveOptionsSupported0))},
	{"lambda$static$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&MacOSXSocketOptions::lambda$static$0))},
	{"peerCredentialsSupported", "()Z", nullptr, 0},
	{"setTcpKeepAliveIntvl", "(II)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"setTcpKeepAliveIntvl0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&MacOSXSocketOptions::setTcpKeepAliveIntvl0)), "java.net.SocketException"},
	{"setTcpKeepAliveTime", "(II)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"setTcpKeepAliveTime0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&MacOSXSocketOptions::setTcpKeepAliveTime0)), "java.net.SocketException"},
	{"setTcpkeepAliveProbes", "(II)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"setTcpkeepAliveProbes0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&MacOSXSocketOptions::setTcpkeepAliveProbes0)), "java.net.SocketException"},
	{}
};

#define _METHOD_INDEX_getSoPeerCred0 2
#define _METHOD_INDEX_getTcpKeepAliveIntvl0 4
#define _METHOD_INDEX_getTcpKeepAliveTime0 6
#define _METHOD_INDEX_getTcpkeepAliveProbes0 8
#define _METHOD_INDEX_keepAliveOptionsSupported0 10
#define _METHOD_INDEX_setTcpKeepAliveIntvl0 14
#define _METHOD_INDEX_setTcpKeepAliveTime0 16
#define _METHOD_INDEX_setTcpkeepAliveProbes0 18

$InnerClassInfo _MacOSXSocketOptions_InnerClassesInfo_[] = {
	{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions", "jdk.net.ExtendedSocketOptions", "PlatformSocketOptions", $STATIC},
	{}
};

$ClassInfo _MacOSXSocketOptions_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.net.MacOSXSocketOptions",
	"jdk.net.ExtendedSocketOptions$PlatformSocketOptions",
	nullptr,
	nullptr,
	_MacOSXSocketOptions_MethodInfo_,
	nullptr,
	nullptr,
	_MacOSXSocketOptions_InnerClassesInfo_
};

$Object* allocate$MacOSXSocketOptions($Class* clazz) {
	return $of($alloc(MacOSXSocketOptions));
}

void MacOSXSocketOptions::init$() {
	$ExtendedSocketOptions$PlatformSocketOptions::init$();
}

bool MacOSXSocketOptions::keepAliveOptionsSupported() {
	return keepAliveOptionsSupported0();
}

void MacOSXSocketOptions::setTcpkeepAliveProbes(int32_t fd, int32_t value) {
	setTcpkeepAliveProbes0(fd, value);
}

void MacOSXSocketOptions::setTcpKeepAliveTime(int32_t fd, int32_t value) {
	setTcpKeepAliveTime0(fd, value);
}

bool MacOSXSocketOptions::peerCredentialsSupported() {
	return true;
}

void MacOSXSocketOptions::setTcpKeepAliveIntvl(int32_t fd, int32_t value) {
	setTcpKeepAliveIntvl0(fd, value);
}

int32_t MacOSXSocketOptions::getTcpkeepAliveProbes(int32_t fd) {
	return getTcpkeepAliveProbes0(fd);
}

int32_t MacOSXSocketOptions::getTcpKeepAliveTime(int32_t fd) {
	return getTcpKeepAliveTime0(fd);
}

int32_t MacOSXSocketOptions::getTcpKeepAliveIntvl(int32_t fd) {
	return getTcpKeepAliveIntvl0(fd);
}

$UnixDomainPrincipal* MacOSXSocketOptions::getSoPeerCred(int32_t fd) {
	$useLocalCurrentObjectStackCache();
	int64_t l = getSoPeerCred0(fd);
	int32_t uid = (int32_t)(l >> 32);
	int32_t gid = (int32_t)l;
	$var($UserPrincipal, user, $UnixUserPrincipals::fromUid(uid));
	$var($GroupPrincipal, group, $UnixUserPrincipals::fromGid(gid));
	return $new($UnixDomainPrincipal, user, group);
}

void MacOSXSocketOptions::setTcpkeepAliveProbes0(int32_t fd, int32_t value) {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(MacOSXSocketOptions, setTcpkeepAliveProbes0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(MacOSXSocketOptions, setTcpkeepAliveProbes0, fd, value);
	$finishNativeStatic();
}

void MacOSXSocketOptions::setTcpKeepAliveTime0(int32_t fd, int32_t value) {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(MacOSXSocketOptions, setTcpKeepAliveTime0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(MacOSXSocketOptions, setTcpKeepAliveTime0, fd, value);
	$finishNativeStatic();
}

void MacOSXSocketOptions::setTcpKeepAliveIntvl0(int32_t fd, int32_t value) {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(MacOSXSocketOptions, setTcpKeepAliveIntvl0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(MacOSXSocketOptions, setTcpKeepAliveIntvl0, fd, value);
	$finishNativeStatic();
}

int32_t MacOSXSocketOptions::getTcpkeepAliveProbes0(int32_t fd) {
	$init(MacOSXSocketOptions);
	int32_t $ret = 0;
	$prepareNativeStatic(MacOSXSocketOptions, getTcpkeepAliveProbes0, int32_t, int32_t fd);
	$ret = $invokeNativeStatic(MacOSXSocketOptions, getTcpkeepAliveProbes0, fd);
	$finishNativeStatic();
	return $ret;
}

int32_t MacOSXSocketOptions::getTcpKeepAliveTime0(int32_t fd) {
	$init(MacOSXSocketOptions);
	int32_t $ret = 0;
	$prepareNativeStatic(MacOSXSocketOptions, getTcpKeepAliveTime0, int32_t, int32_t fd);
	$ret = $invokeNativeStatic(MacOSXSocketOptions, getTcpKeepAliveTime0, fd);
	$finishNativeStatic();
	return $ret;
}

int32_t MacOSXSocketOptions::getTcpKeepAliveIntvl0(int32_t fd) {
	$init(MacOSXSocketOptions);
	int32_t $ret = 0;
	$prepareNativeStatic(MacOSXSocketOptions, getTcpKeepAliveIntvl0, int32_t, int32_t fd);
	$ret = $invokeNativeStatic(MacOSXSocketOptions, getTcpKeepAliveIntvl0, fd);
	$finishNativeStatic();
	return $ret;
}

int64_t MacOSXSocketOptions::getSoPeerCred0(int32_t fd) {
	$init(MacOSXSocketOptions);
	int64_t $ret = 0;
	$prepareNativeStatic(MacOSXSocketOptions, getSoPeerCred0, int64_t, int32_t fd);
	$ret = $invokeNativeStatic(MacOSXSocketOptions, getSoPeerCred0, fd);
	$finishNativeStatic();
	return $ret;
}

bool MacOSXSocketOptions::keepAliveOptionsSupported0() {
	$init(MacOSXSocketOptions);
	bool $ret = false;
	$prepareNativeStatic(MacOSXSocketOptions, keepAliveOptionsSupported0, bool);
	$ret = $invokeNativeStatic(MacOSXSocketOptions, keepAliveOptionsSupported0);
	$finishNativeStatic();
	return $ret;
}

$Void* MacOSXSocketOptions::lambda$static$0() {
	$init(MacOSXSocketOptions);
	$beforeCallerSensitive();
	$System::loadLibrary("extnet"_s);
	return nullptr;
}

void clinit$MacOSXSocketOptions($Class* class$) {
	$beforeCallerSensitive();
	{
		if ($System::getSecurityManager() == nullptr) {
			$System::loadLibrary("extnet"_s);
		} else {
			$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(MacOSXSocketOptions$$Lambda$lambda$static$0)));
		}
	}
}

MacOSXSocketOptions::MacOSXSocketOptions() {
}

$Class* MacOSXSocketOptions::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MacOSXSocketOptions$$Lambda$lambda$static$0::classInfo$.name)) {
			return MacOSXSocketOptions$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(MacOSXSocketOptions, name, initialize, &_MacOSXSocketOptions_ClassInfo_, clinit$MacOSXSocketOptions, allocate$MacOSXSocketOptions);
	return class$;
}

$Class* MacOSXSocketOptions::class$ = nullptr;

	} // net
} // jdk