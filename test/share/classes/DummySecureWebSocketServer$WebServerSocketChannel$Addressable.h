#ifndef _DummySecureWebSocketServer$WebServerSocketChannel$Addressable_h_
#define _DummySecureWebSocketServer$WebServerSocketChannel$Addressable_h_
//$ interface DummySecureWebSocketServer$WebServerSocketChannel$Addressable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class SocketAddress;
	}
}

class $export DummySecureWebSocketServer$WebServerSocketChannel$Addressable : public ::java::lang::Object {
	$interface(DummySecureWebSocketServer$WebServerSocketChannel$Addressable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::net::SocketAddress* getLocalAddress() {return nullptr;}
};

#endif // _DummySecureWebSocketServer$WebServerSocketChannel$Addressable_h_