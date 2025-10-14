#ifndef _DummySecureWebSocketServer$WebServerSocketChannel$Config_h_
#define _DummySecureWebSocketServer$WebServerSocketChannel$Config_h_
//$ interface DummySecureWebSocketServer$WebServerSocketChannel$Config
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class SocketOption;
	}
}

class $export DummySecureWebSocketServer$WebServerSocketChannel$Config : public ::java::lang::Object {
	$interface(DummySecureWebSocketServer$WebServerSocketChannel$Config, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setOption(::java::net::SocketOption* option, Object$* value) {}
};

#endif // _DummySecureWebSocketServer$WebServerSocketChannel$Config_h_