#ifndef _DummySecureWebSocketServer$WebServerSocketChannel_h_
#define _DummySecureWebSocketServer$WebServerSocketChannel_h_
//$ class DummySecureWebSocketServer$WebServerSocketChannel
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

class DummySecureWebSocketServer$WebServerSocketChannel$Accepter;
class DummySecureWebSocketServer$WebServerSocketChannel$Addressable;
class DummySecureWebSocketServer$WebServerSocketChannel$Binder;
class DummySecureWebSocketServer$WebServerSocketChannel$Closer;
class DummySecureWebSocketServer$WebServerSocketChannel$Config;
class DummySecureWebSocketServer$WebSocketChannel;
namespace java {
	namespace net {
		class ServerSocket;
		class SocketAddress;
		class SocketOption;
	}
}

class $export DummySecureWebSocketServer$WebServerSocketChannel : public ::java::lang::AutoCloseable {
	$class(DummySecureWebSocketServer$WebServerSocketChannel, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	DummySecureWebSocketServer$WebServerSocketChannel();
	void init$(::java::lang::AutoCloseable* server, ::DummySecureWebSocketServer$WebServerSocketChannel$Accepter* accepter, ::DummySecureWebSocketServer$WebServerSocketChannel$Binder* binder, ::DummySecureWebSocketServer$WebServerSocketChannel$Addressable* address, ::DummySecureWebSocketServer$WebServerSocketChannel$Config* config, ::DummySecureWebSocketServer$WebServerSocketChannel$Closer* closer);
	virtual ::DummySecureWebSocketServer$WebSocketChannel* accept();
	virtual void bind(::java::net::SocketAddress* address);
	virtual void close() override;
	virtual ::java::net::SocketAddress* getLocalAddress();
	static ::DummySecureWebSocketServer$WebSocketChannel* lambda$of$0(::java::net::ServerSocket* ss);
	static ::DummySecureWebSocketServer$WebServerSocketChannel* of(::java::net::ServerSocket* ss);
	virtual void setOption(::java::net::SocketOption* option, Object$* value);
	virtual $String* toString() override;
	::java::lang::AutoCloseable* server = nullptr;
	::DummySecureWebSocketServer$WebServerSocketChannel$Accepter* accepter = nullptr;
	::DummySecureWebSocketServer$WebServerSocketChannel$Binder* binder = nullptr;
	::DummySecureWebSocketServer$WebServerSocketChannel$Addressable* address = nullptr;
	::DummySecureWebSocketServer$WebServerSocketChannel$Config* config = nullptr;
	::DummySecureWebSocketServer$WebServerSocketChannel$Closer* closer = nullptr;
};

#endif // _DummySecureWebSocketServer$WebServerSocketChannel_h_