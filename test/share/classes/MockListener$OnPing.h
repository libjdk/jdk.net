#ifndef _MockListener$OnPing_h_
#define _MockListener$OnPing_h_
//$ class MockListener$OnPing
//$ extends MockListener$Invocation

#include <MockListener$Invocation.h>

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

class $export MockListener$OnPing : public ::MockListener$Invocation {
	$class(MockListener$OnPing, $NO_CLASS_INIT, ::MockListener$Invocation)
public:
	MockListener$OnPing();
	void init$(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* data);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::java::nio::ByteBuffer* data = nullptr;
};

#endif // _MockListener$OnPing_h_