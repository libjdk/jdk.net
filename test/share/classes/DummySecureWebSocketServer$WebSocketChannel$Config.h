#ifndef _DummySecureWebSocketServer$WebSocketChannel$Config_h_
#define _DummySecureWebSocketServer$WebSocketChannel$Config_h_
//$ interface DummySecureWebSocketServer$WebSocketChannel$Config
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class SocketOption;
	}
}

class $export DummySecureWebSocketServer$WebSocketChannel$Config : public ::java::lang::Object {
	$interface(DummySecureWebSocketServer$WebSocketChannel$Config, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setOption(::java::net::SocketOption* option, Object$* value) {}
};

#endif // _DummySecureWebSocketServer$WebSocketChannel$Config_h_