#include <DummySecureWebSocketServer$WebSocketChannel$Config.h>

#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <java/net/SocketOption.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebSocketChannel = ::DummySecureWebSocketServer$WebSocketChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketOption = ::java::net::SocketOption;

$MethodInfo _DummySecureWebSocketServer$WebSocketChannel$Config_MethodInfo_[] = {
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebSocketChannel$Config_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebSocketChannel$Config", "DummySecureWebSocketServer$WebSocketChannel", "Config", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebSocketChannel$Config_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DummySecureWebSocketServer$WebSocketChannel$Config",
	nullptr,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebSocketChannel$Config_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebSocketChannel$Config_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebSocketChannel$Config($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebSocketChannel$Config));
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Config::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$Config, name, initialize, &_DummySecureWebSocketServer$WebSocketChannel$Config_ClassInfo_, allocate$DummySecureWebSocketServer$WebSocketChannel$Config);
	return class$;
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Config::class$ = nullptr;