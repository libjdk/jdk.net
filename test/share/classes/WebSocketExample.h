#ifndef _WebSocketExample_h_
#define _WebSocketExample_h_
//$ class WebSocketExample
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace net {
		namespace http {
			class WebSocket$Listener;
		}
	}
}

class $export WebSocketExample : public ::java::lang::Object {
	$class(WebSocketExample, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WebSocketExample();
	void init$();
	virtual void newBuilderExample0();
	virtual void newBuilderExample1();
	static void processCompleteTextMessage(::java::lang::CharSequence* result);
	virtual void requestExample();
	::java::net::http::WebSocket$Listener* listener = nullptr;
};

#endif // _WebSocketExample_h_