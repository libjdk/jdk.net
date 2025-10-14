#include <DummySecureWebSocketServer$WebSocketChannel$Closer.h>

#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebSocketChannel = ::DummySecureWebSocketServer$WebSocketChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _DummySecureWebSocketServer$WebSocketChannel$Closer_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebSocketChannel$Closer_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebSocketChannel$Closer", "DummySecureWebSocketServer$WebSocketChannel", "Closer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebSocketChannel$Closer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DummySecureWebSocketServer$WebSocketChannel$Closer",
	nullptr,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebSocketChannel$Closer_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebSocketChannel$Closer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebSocketChannel$Closer($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebSocketChannel$Closer));
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Closer::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$Closer, name, initialize, &_DummySecureWebSocketServer$WebSocketChannel$Closer_ClassInfo_, allocate$DummySecureWebSocketServer$WebSocketChannel$Closer);
	return class$;
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Closer::class$ = nullptr;