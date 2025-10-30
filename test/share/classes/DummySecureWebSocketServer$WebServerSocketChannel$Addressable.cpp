#include <DummySecureWebSocketServer$WebServerSocketChannel$Addressable.h>

#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebServerSocketChannel = ::DummySecureWebSocketServer$WebServerSocketChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;

$MethodInfo _DummySecureWebSocketServer$WebServerSocketChannel$Addressable_MethodInfo_[] = {
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebServerSocketChannel$Addressable_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebServerSocketChannel$Addressable", "DummySecureWebSocketServer$WebServerSocketChannel", "Addressable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebServerSocketChannel$Addressable_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DummySecureWebSocketServer$WebServerSocketChannel$Addressable",
	nullptr,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel$Addressable_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel$Addressable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebServerSocketChannel$Addressable($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebServerSocketChannel$Addressable));
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Addressable::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$Addressable, name, initialize, &_DummySecureWebSocketServer$WebServerSocketChannel$Addressable_ClassInfo_, allocate$DummySecureWebSocketServer$WebServerSocketChannel$Addressable);
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Addressable::class$ = nullptr;