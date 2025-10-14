#ifndef _MockListener$OnText_h_
#define _MockListener$OnText_h_
//$ class MockListener$OnText
//$ extends MockListener$Invocation

#include <MockListener$Invocation.h>

namespace java {
	namespace net {
		namespace http {
			class WebSocket;
		}
	}
}

class $export MockListener$OnText : public ::MockListener$Invocation {
	$class(MockListener$OnText, $NO_CLASS_INIT, ::MockListener$Invocation)
public:
	MockListener$OnText();
	void init$(::java::net::http::WebSocket* webSocket, $String* text, bool last);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* text = nullptr;
	bool last = false;
};

#endif // _MockListener$OnText_h_