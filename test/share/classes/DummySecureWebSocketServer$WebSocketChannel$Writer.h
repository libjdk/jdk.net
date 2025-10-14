#ifndef _DummySecureWebSocketServer$WebSocketChannel$Writer_h_
#define _DummySecureWebSocketServer$WebSocketChannel$Writer_h_
//$ interface DummySecureWebSocketServer$WebSocketChannel$Writer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class $export DummySecureWebSocketServer$WebSocketChannel$Writer : public ::java::lang::Object {
	$interface(DummySecureWebSocketServer$WebSocketChannel$Writer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void write(::java::nio::ByteBuffer* buf) {}
};

#endif // _DummySecureWebSocketServer$WebSocketChannel$Writer_h_