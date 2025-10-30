#include <DummySecureWebSocketServer$WebServerSocketChannel$Accepter.h>

#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebServerSocketChannel = ::DummySecureWebSocketServer$WebServerSocketChannel;
using $DummySecureWebSocketServer$WebSocketChannel = ::DummySecureWebSocketServer$WebSocketChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _DummySecureWebSocketServer$WebServerSocketChannel$Accepter_MethodInfo_[] = {
	{"accept", "()LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebServerSocketChannel$Accepter_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebServerSocketChannel$Accepter", "DummySecureWebSocketServer$WebServerSocketChannel", "Accepter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebServerSocketChannel$Accepter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DummySecureWebSocketServer$WebServerSocketChannel$Accepter",
	nullptr,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel$Accepter_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel$Accepter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebServerSocketChannel$Accepter($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebServerSocketChannel$Accepter));
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Accepter::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$Accepter, name, initialize, &_DummySecureWebSocketServer$WebServerSocketChannel$Accepter_ClassInfo_, allocate$DummySecureWebSocketServer$WebServerSocketChannel$Accepter);
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Accepter::class$ = nullptr;