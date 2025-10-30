#include <jdk/net/LinuxSocketOptions.h>

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

class LinuxSocketOptions$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(LinuxSocketOptions$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(LinuxSocketOptions::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LinuxSocketOptions$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LinuxSocketOptions$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LinuxSocketOptions$$Lambda$lambda$static$0::*)()>(&LinuxSocketOptions$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LinuxSocketOptions$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.net.LinuxSocketOptions$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* LinuxSocketOptions$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(LinuxSocketOptions$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LinuxSocketOptions$$Lambda$lambda$static$0::class$ = nullptr;

$MethodInfo _LinuxSocketOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LinuxSocketOptions::*)()>(&LinuxSocketOptions::init$))},
	{"getIncomingNapiId", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getIncomingNapiId0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&LinuxSocketOptions::getIncomingNapiId0)), "java.net.SocketException"},
	{"getQuickAck", "(I)Z", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getQuickAck0", "(I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int32_t)>(&LinuxSocketOptions::getQuickAck0)), "java.net.SocketException"},
	{"getSoPeerCred", "(I)Ljdk/net/UnixDomainPrincipal;", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getSoPeerCred0", "(I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t)>(&LinuxSocketOptions::getSoPeerCred0)), "java.net.SocketException"},
	{"getTcpKeepAliveIntvl", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getTcpKeepAliveIntvl0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&LinuxSocketOptions::getTcpKeepAliveIntvl0)), "java.net.SocketException"},
	{"getTcpKeepAliveTime", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getTcpKeepAliveTime0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&LinuxSocketOptions::getTcpKeepAliveTime0)), "java.net.SocketException"},
	{"getTcpkeepAliveProbes", "(I)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getTcpkeepAliveProbes0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&LinuxSocketOptions::getTcpkeepAliveProbes0)), "java.net.SocketException"},
	{"incomingNapiIdSupported", "()Z", nullptr, 0},
	{"incomingNapiIdSupported0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&LinuxSocketOptions::incomingNapiIdSupported0))},
	{"keepAliveOptionsSupported", "()Z", nullptr, 0},
	{"keepAliveOptionsSupported0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&LinuxSocketOptions::keepAliveOptionsSupported0))},
	{"lambda$static$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&LinuxSocketOptions::lambda$static$0))},
	{"peerCredentialsSupported", "()Z", nullptr, 0},
	{"quickAckSupported", "()Z", nullptr, $PUBLIC},
	{"quickAckSupported0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&LinuxSocketOptions::quickAckSupported0))},
	{"setQuickAck", "(IZ)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"setQuickAck0", "(IZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,bool)>(&LinuxSocketOptions::setQuickAck0)), "java.net.SocketException"},
	{"setTcpKeepAliveIntvl", "(II)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"setTcpKeepAliveIntvl0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&LinuxSocketOptions::setTcpKeepAliveIntvl0)), "java.net.SocketException"},
	{"setTcpKeepAliveTime", "(II)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"setTcpKeepAliveTime0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&LinuxSocketOptions::setTcpKeepAliveTime0)), "java.net.SocketException"},
	{"setTcpkeepAliveProbes", "(II)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"setTcpkeepAliveProbes0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&LinuxSocketOptions::setTcpkeepAliveProbes0)), "java.net.SocketException"},
	{}
};

#define _METHOD_INDEX_getIncomingNapiId0 2
#define _METHOD_INDEX_getQuickAck0 4
#define _METHOD_INDEX_getSoPeerCred0 6
#define _METHOD_INDEX_getTcpKeepAliveIntvl0 8
#define _METHOD_INDEX_getTcpKeepAliveTime0 10
#define _METHOD_INDEX_getTcpkeepAliveProbes0 12
#define _METHOD_INDEX_incomingNapiIdSupported0 14
#define _METHOD_INDEX_keepAliveOptionsSupported0 16
#define _METHOD_INDEX_quickAckSupported0 20
#define _METHOD_INDEX_setQuickAck0 22
#define _METHOD_INDEX_setTcpKeepAliveIntvl0 24
#define _METHOD_INDEX_setTcpKeepAliveTime0 26
#define _METHOD_INDEX_setTcpkeepAliveProbes0 28

$InnerClassInfo _LinuxSocketOptions_InnerClassesInfo_[] = {
	{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions", "jdk.net.ExtendedSocketOptions", "PlatformSocketOptions", $STATIC},
	{}
};

$ClassInfo _LinuxSocketOptions_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.net.LinuxSocketOptions",
	"jdk.net.ExtendedSocketOptions$PlatformSocketOptions",
	nullptr,
	nullptr,
	_LinuxSocketOptions_MethodInfo_,
	nullptr,
	nullptr,
	_LinuxSocketOptions_InnerClassesInfo_
};

$Object* allocate$LinuxSocketOptions($Class* clazz) {
	return $of($alloc(LinuxSocketOptions));
}

void LinuxSocketOptions::init$() {
	$ExtendedSocketOptions$PlatformSocketOptions::init$();
}

void LinuxSocketOptions::setQuickAck(int32_t fd, bool on) {
	setQuickAck0(fd, on);
}

bool LinuxSocketOptions::getQuickAck(int32_t fd) {
	return getQuickAck0(fd);
}

bool LinuxSocketOptions::quickAckSupported() {
	return quickAckSupported0();
}

bool LinuxSocketOptions::keepAliveOptionsSupported() {
	return keepAliveOptionsSupported0();
}

bool LinuxSocketOptions::peerCredentialsSupported() {
	return true;
}

void LinuxSocketOptions::setTcpkeepAliveProbes(int32_t fd, int32_t value) {
	setTcpkeepAliveProbes0(fd, value);
}

void LinuxSocketOptions::setTcpKeepAliveTime(int32_t fd, int32_t value) {
	setTcpKeepAliveTime0(fd, value);
}

void LinuxSocketOptions::setTcpKeepAliveIntvl(int32_t fd, int32_t value) {
	setTcpKeepAliveIntvl0(fd, value);
}

int32_t LinuxSocketOptions::getTcpkeepAliveProbes(int32_t fd) {
	return getTcpkeepAliveProbes0(fd);
}

int32_t LinuxSocketOptions::getTcpKeepAliveTime(int32_t fd) {
	return getTcpKeepAliveTime0(fd);
}

int32_t LinuxSocketOptions::getTcpKeepAliveIntvl(int32_t fd) {
	return getTcpKeepAliveIntvl0(fd);
}

bool LinuxSocketOptions::incomingNapiIdSupported() {
	return incomingNapiIdSupported0();
}

int32_t LinuxSocketOptions::getIncomingNapiId(int32_t fd) {
	return getIncomingNapiId0(fd);
}

$UnixDomainPrincipal* LinuxSocketOptions::getSoPeerCred(int32_t fd) {
	$useLocalCurrentObjectStackCache();
	int64_t l = getSoPeerCred0(fd);
	int32_t uid = (int32_t)(l >> 32);
	int32_t gid = (int32_t)l;
	$var($UserPrincipal, user, $UnixUserPrincipals::fromUid(uid));
	$var($GroupPrincipal, group, $UnixUserPrincipals::fromGid(gid));
	return $new($UnixDomainPrincipal, user, group);
}

void LinuxSocketOptions::setTcpkeepAliveProbes0(int32_t fd, int32_t value) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(LinuxSocketOptions, setTcpkeepAliveProbes0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(LinuxSocketOptions, setTcpkeepAliveProbes0, fd, value);
	$finishNativeStatic();
}

void LinuxSocketOptions::setTcpKeepAliveTime0(int32_t fd, int32_t value) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(LinuxSocketOptions, setTcpKeepAliveTime0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(LinuxSocketOptions, setTcpKeepAliveTime0, fd, value);
	$finishNativeStatic();
}

void LinuxSocketOptions::setTcpKeepAliveIntvl0(int32_t fd, int32_t value) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(LinuxSocketOptions, setTcpKeepAliveIntvl0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(LinuxSocketOptions, setTcpKeepAliveIntvl0, fd, value);
	$finishNativeStatic();
}

int32_t LinuxSocketOptions::getTcpkeepAliveProbes0(int32_t fd) {
	$init(LinuxSocketOptions);
	int32_t $ret = 0;
	$prepareNativeStatic(LinuxSocketOptions, getTcpkeepAliveProbes0, int32_t, int32_t fd);
	$ret = $invokeNativeStatic(LinuxSocketOptions, getTcpkeepAliveProbes0, fd);
	$finishNativeStatic();
	return $ret;
}

int32_t LinuxSocketOptions::getTcpKeepAliveTime0(int32_t fd) {
	$init(LinuxSocketOptions);
	int32_t $ret = 0;
	$prepareNativeStatic(LinuxSocketOptions, getTcpKeepAliveTime0, int32_t, int32_t fd);
	$ret = $invokeNativeStatic(LinuxSocketOptions, getTcpKeepAliveTime0, fd);
	$finishNativeStatic();
	return $ret;
}

int32_t LinuxSocketOptions::getTcpKeepAliveIntvl0(int32_t fd) {
	$init(LinuxSocketOptions);
	int32_t $ret = 0;
	$prepareNativeStatic(LinuxSocketOptions, getTcpKeepAliveIntvl0, int32_t, int32_t fd);
	$ret = $invokeNativeStatic(LinuxSocketOptions, getTcpKeepAliveIntvl0, fd);
	$finishNativeStatic();
	return $ret;
}

void LinuxSocketOptions::setQuickAck0(int32_t fd, bool on) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(LinuxSocketOptions, setQuickAck0, void, int32_t fd, bool on);
	$invokeNativeStatic(LinuxSocketOptions, setQuickAck0, fd, on);
	$finishNativeStatic();
}

bool LinuxSocketOptions::getQuickAck0(int32_t fd) {
	$init(LinuxSocketOptions);
	bool $ret = false;
	$prepareNativeStatic(LinuxSocketOptions, getQuickAck0, bool, int32_t fd);
	$ret = $invokeNativeStatic(LinuxSocketOptions, getQuickAck0, fd);
	$finishNativeStatic();
	return $ret;
}

int64_t LinuxSocketOptions::getSoPeerCred0(int32_t fd) {
	$init(LinuxSocketOptions);
	int64_t $ret = 0;
	$prepareNativeStatic(LinuxSocketOptions, getSoPeerCred0, int64_t, int32_t fd);
	$ret = $invokeNativeStatic(LinuxSocketOptions, getSoPeerCred0, fd);
	$finishNativeStatic();
	return $ret;
}

bool LinuxSocketOptions::keepAliveOptionsSupported0() {
	$init(LinuxSocketOptions);
	bool $ret = false;
	$prepareNativeStatic(LinuxSocketOptions, keepAliveOptionsSupported0, bool);
	$ret = $invokeNativeStatic(LinuxSocketOptions, keepAliveOptionsSupported0);
	$finishNativeStatic();
	return $ret;
}

bool LinuxSocketOptions::quickAckSupported0() {
	$init(LinuxSocketOptions);
	bool $ret = false;
	$prepareNativeStatic(LinuxSocketOptions, quickAckSupported0, bool);
	$ret = $invokeNativeStatic(LinuxSocketOptions, quickAckSupported0);
	$finishNativeStatic();
	return $ret;
}

bool LinuxSocketOptions::incomingNapiIdSupported0() {
	$init(LinuxSocketOptions);
	bool $ret = false;
	$prepareNativeStatic(LinuxSocketOptions, incomingNapiIdSupported0, bool);
	$ret = $invokeNativeStatic(LinuxSocketOptions, incomingNapiIdSupported0);
	$finishNativeStatic();
	return $ret;
}

int32_t LinuxSocketOptions::getIncomingNapiId0(int32_t fd) {
	$init(LinuxSocketOptions);
	int32_t $ret = 0;
	$prepareNativeStatic(LinuxSocketOptions, getIncomingNapiId0, int32_t, int32_t fd);
	$ret = $invokeNativeStatic(LinuxSocketOptions, getIncomingNapiId0, fd);
	$finishNativeStatic();
	return $ret;
}

$Void* LinuxSocketOptions::lambda$static$0() {
	$init(LinuxSocketOptions);
	$beforeCallerSensitive();
	$System::loadLibrary("extnet"_s);
	return nullptr;
}

void clinit$LinuxSocketOptions($Class* class$) {
	$beforeCallerSensitive();
	{
		if ($System::getSecurityManager() == nullptr) {
			$System::loadLibrary("extnet"_s);
		} else {
			$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(LinuxSocketOptions$$Lambda$lambda$static$0)));
		}
	}
}

LinuxSocketOptions::LinuxSocketOptions() {
}

$Class* LinuxSocketOptions::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LinuxSocketOptions$$Lambda$lambda$static$0::classInfo$.name)) {
			return LinuxSocketOptions$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(LinuxSocketOptions, name, initialize, &_LinuxSocketOptions_ClassInfo_, clinit$LinuxSocketOptions, allocate$LinuxSocketOptions);
	return class$;
}

$Class* LinuxSocketOptions::class$ = nullptr;

	} // net
} // jdk