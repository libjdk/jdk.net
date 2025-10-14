#ifndef _MockListener$OnError_h_
#define _MockListener$OnError_h_
//$ class MockListener$OnError
//$ extends MockListener$Invocation

#include <MockListener$Invocation.h>

namespace java {
	namespace net {
		namespace http {
			class WebSocket;
		}
	}
}

class $export MockListener$OnError : public ::MockListener$Invocation {
	$class(MockListener$OnError, $NO_CLASS_INIT, ::MockListener$Invocation)
public:
	MockListener$OnError();
	void init$(::java::net::http::WebSocket* webSocket, $Class* clazz);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$Class* clazz = nullptr;
};

#endif // _MockListener$OnError_h_