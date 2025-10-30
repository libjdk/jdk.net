#include <DummySecureWebSocketServer$WebServerSocketChannel$Closer.h>

#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebServerSocketChannel = ::DummySecureWebSocketServer$WebServerSocketChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _DummySecureWebSocketServer$WebServerSocketChannel$Closer_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebServerSocketChannel$Closer_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebServerSocketChannel$Closer", "DummySecureWebSocketServer$WebServerSocketChannel", "Closer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebServerSocketChannel$Closer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DummySecureWebSocketServer$WebServerSocketChannel$Closer",
	nullptr,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel$Closer_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel$Closer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebServerSocketChannel$Closer($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebServerSocketChannel$Closer));
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Closer::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$Closer, name, initialize, &_DummySecureWebSocketServer$WebServerSocketChannel$Closer_ClassInfo_, allocate$DummySecureWebSocketServer$WebServerSocketChannel$Closer);
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Closer::class$ = nullptr;