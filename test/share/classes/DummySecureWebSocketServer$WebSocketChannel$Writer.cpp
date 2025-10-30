#include <DummySecureWebSocketServer$WebSocketChannel$Writer.h>

#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebSocketChannel = ::DummySecureWebSocketServer$WebSocketChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

$MethodInfo _DummySecureWebSocketServer$WebSocketChannel$Writer_MethodInfo_[] = {
	{"write", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebSocketChannel$Writer_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebSocketChannel$Writer", "DummySecureWebSocketServer$WebSocketChannel", "Writer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebSocketChannel$Writer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DummySecureWebSocketServer$WebSocketChannel$Writer",
	nullptr,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebSocketChannel$Writer_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebSocketChannel$Writer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebSocketChannel$Writer($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebSocketChannel$Writer));
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Writer::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$Writer, name, initialize, &_DummySecureWebSocketServer$WebSocketChannel$Writer_ClassInfo_, allocate$DummySecureWebSocketServer$WebSocketChannel$Writer);
	return class$;
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Writer::class$ = nullptr;