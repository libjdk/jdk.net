#ifndef _MockListener$OnClose_h_
#define _MockListener$OnClose_h_
//$ class MockListener$OnClose
//$ extends MockListener$Invocation

#include <MockListener$Invocation.h>

namespace java {
	namespace net {
		namespace http {
			class WebSocket;
		}
	}
}

class $export MockListener$OnClose : public ::MockListener$Invocation {
	$class(MockListener$OnClose, $NO_CLASS_INIT, ::MockListener$Invocation)
public:
	MockListener$OnClose();
	void init$(::java::net::http::WebSocket* webSocket, int32_t statusCode, $String* reason);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	int32_t statusCode = 0;
	$String* reason = nullptr;
};

#endif // _MockListener$OnClose_h_