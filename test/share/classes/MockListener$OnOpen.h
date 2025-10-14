#ifndef _MockListener$OnOpen_h_
#define _MockListener$OnOpen_h_
//$ class MockListener$OnOpen
//$ extends MockListener$Invocation

#include <MockListener$Invocation.h>

namespace java {
	namespace net {
		namespace http {
			class WebSocket;
		}
	}
}

class $export MockListener$OnOpen : public ::MockListener$Invocation {
	$class(MockListener$OnOpen, $NO_CLASS_INIT, ::MockListener$Invocation)
public:
	MockListener$OnOpen();
	void init$(::java::net::http::WebSocket* webSocket);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

#endif // _MockListener$OnOpen_h_