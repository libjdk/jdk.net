#include <DummySecureWebSocketServer$WebSocketChannel$Reader.h>

#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebSocketChannel = ::DummySecureWebSocketServer$WebSocketChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

$MethodInfo _DummySecureWebSocketServer$WebSocketChannel$Reader_MethodInfo_[] = {
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebSocketChannel$Reader_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebSocketChannel$Reader", "DummySecureWebSocketServer$WebSocketChannel", "Reader", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebSocketChannel$Reader_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DummySecureWebSocketServer$WebSocketChannel$Reader",
	nullptr,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebSocketChannel$Reader_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebSocketChannel$Reader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebSocketChannel$Reader($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebSocketChannel$Reader));
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Reader::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$Reader, name, initialize, &_DummySecureWebSocketServer$WebSocketChannel$Reader_ClassInfo_, allocate$DummySecureWebSocketServer$WebSocketChannel$Reader);
	return class$;
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Reader::class$ = nullptr;