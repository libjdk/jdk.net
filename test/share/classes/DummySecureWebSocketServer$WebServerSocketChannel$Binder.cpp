#include <DummySecureWebSocketServer$WebServerSocketChannel$Binder.h>

#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebServerSocketChannel = ::DummySecureWebSocketServer$WebServerSocketChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;

$MethodInfo _DummySecureWebSocketServer$WebServerSocketChannel$Binder_MethodInfo_[] = {
	{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebServerSocketChannel$Binder_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebServerSocketChannel$Binder", "DummySecureWebSocketServer$WebServerSocketChannel", "Binder", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebServerSocketChannel$Binder_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DummySecureWebSocketServer$WebServerSocketChannel$Binder",
	nullptr,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel$Binder_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel$Binder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebServerSocketChannel$Binder($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebServerSocketChannel$Binder));
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Binder::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$Binder, name, initialize, &_DummySecureWebSocketServer$WebServerSocketChannel$Binder_ClassInfo_, allocate$DummySecureWebSocketServer$WebServerSocketChannel$Binder);
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Binder::class$ = nullptr;