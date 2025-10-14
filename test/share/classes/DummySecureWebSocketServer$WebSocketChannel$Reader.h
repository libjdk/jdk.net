#ifndef _DummySecureWebSocketServer$WebSocketChannel$Reader_h_
#define _DummySecureWebSocketServer$WebSocketChannel$Reader_h_
//$ interface DummySecureWebSocketServer$WebSocketChannel$Reader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class $export DummySecureWebSocketServer$WebSocketChannel$Reader : public ::java::lang::Object {
	$interface(DummySecureWebSocketServer$WebSocketChannel$Reader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t read(::java::nio::ByteBuffer* buf) {return 0;}
};

#endif // _DummySecureWebSocketServer$WebSocketChannel$Reader_h_