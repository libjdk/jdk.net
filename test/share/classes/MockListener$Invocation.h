#ifndef _MockListener$Invocation_h_
#define _MockListener$Invocation_h_
//$ class MockListener$Invocation
//$ extends java.lang.Object

#include <java/lang/Object.h>

class MockListener$OnBinary;
class MockListener$OnClose;
class MockListener$OnError;
class MockListener$OnOpen;
class MockListener$OnPing;
class MockListener$OnPong;
class MockListener$OnText;
namespace java {
	namespace net {
		namespace http {
			class WebSocket;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class $export MockListener$Invocation : public ::java::lang::Object {
	$class(MockListener$Invocation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MockListener$Invocation();
	void init$(::java::net::http::WebSocket* webSocket);
	static ::MockListener$OnBinary* onBinary(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* data, bool last);
	static ::MockListener$OnClose* onClose(::java::net::http::WebSocket* webSocket, int32_t statusCode, $String* reason);
	static ::MockListener$OnError* onError(::java::net::http::WebSocket* webSocket, $Class* clazz);
	static ::MockListener$OnOpen* onOpen(::java::net::http::WebSocket* webSocket);
	static ::MockListener$OnPing* onPing(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* data);
	static ::MockListener$OnPong* onPong(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* data);
	static ::MockListener$OnText* onText(::java::net::http::WebSocket* webSocket, $String* text, bool last);
	::java::net::http::WebSocket* webSocket = nullptr;
};

#endif // _MockListener$Invocation_h_