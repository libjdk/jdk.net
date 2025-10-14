#ifndef _DummySecureWebSocketServer$WebSocketChannel_h_
#define _DummySecureWebSocketServer$WebSocketChannel_h_
//$ class DummySecureWebSocketServer$WebSocketChannel
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

class DummySecureWebSocketServer$WebSocketChannel$Closer;
class DummySecureWebSocketServer$WebSocketChannel$Config;
class DummySecureWebSocketServer$WebSocketChannel$Reader;
class DummySecureWebSocketServer$WebSocketChannel$Writer;
namespace java {
	namespace net {
		class Socket;
		class SocketOption;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class $export DummySecureWebSocketServer$WebSocketChannel : public ::java::lang::AutoCloseable {
	$class(DummySecureWebSocketServer$WebSocketChannel, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	DummySecureWebSocketServer$WebSocketChannel();
	void init$(::java::lang::AutoCloseable* channel, ::DummySecureWebSocketServer$WebSocketChannel$Reader* reader, ::DummySecureWebSocketServer$WebSocketChannel$Writer* writer, ::DummySecureWebSocketServer$WebSocketChannel$Config* config, ::DummySecureWebSocketServer$WebSocketChannel$Closer* closer);
	virtual void close() override;
	static int32_t lambda$of$0(::java::net::Socket* s, ::java::nio::ByteBuffer* bb);
	static void lambda$of$1(::java::net::Socket* s, ::java::nio::ByteBuffer* bb);
	static ::DummySecureWebSocketServer$WebSocketChannel* of(::java::net::Socket* s);
	virtual int32_t read(::java::nio::ByteBuffer* bb);
	virtual void setOption(::java::net::SocketOption* option, Object$* value);
	virtual $String* toString() override;
	virtual void write(::java::nio::ByteBuffer* bb);
	::java::lang::AutoCloseable* channel = nullptr;
	::DummySecureWebSocketServer$WebSocketChannel$Reader* reader = nullptr;
	::DummySecureWebSocketServer$WebSocketChannel$Writer* writer = nullptr;
	::DummySecureWebSocketServer$WebSocketChannel$Config* config = nullptr;
	::DummySecureWebSocketServer$WebSocketChannel$Closer* closer = nullptr;
};

#endif // _DummySecureWebSocketServer$WebSocketChannel_h_