#ifndef _DummySecureWebSocketServer$WebServerSocketChannel$Binder_h_
#define _DummySecureWebSocketServer$WebServerSocketChannel$Binder_h_
//$ interface DummySecureWebSocketServer$WebServerSocketChannel$Binder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class SocketAddress;
	}
}

class $export DummySecureWebSocketServer$WebServerSocketChannel$Binder : public ::java::lang::Object {
	$interface(DummySecureWebSocketServer$WebServerSocketChannel$Binder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void bind(::java::net::SocketAddress* address) {}
};

#endif // _DummySecureWebSocketServer$WebServerSocketChannel$Binder_h_