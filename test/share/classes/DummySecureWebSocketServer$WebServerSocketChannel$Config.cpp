#include <DummySecureWebSocketServer$WebServerSocketChannel$Config.h>

#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <java/net/SocketOption.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebServerSocketChannel = ::DummySecureWebSocketServer$WebServerSocketChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketOption = ::java::net::SocketOption;

$MethodInfo _DummySecureWebSocketServer$WebServerSocketChannel$Config_MethodInfo_[] = {
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebServerSocketChannel$Config_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebServerSocketChannel$Config", "DummySecureWebSocketServer$WebServerSocketChannel", "Config", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebServerSocketChannel$Config_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DummySecureWebSocketServer$WebServerSocketChannel$Config",
	nullptr,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel$Config_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel$Config_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebServerSocketChannel$Config($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebServerSocketChannel$Config));
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Config::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$Config, name, initialize, &_DummySecureWebSocketServer$WebServerSocketChannel$Config_ClassInfo_, allocate$DummySecureWebSocketServer$WebServerSocketChannel$Config);
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Config::class$ = nullptr;