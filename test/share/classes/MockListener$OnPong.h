#ifndef _MockListener$OnPong_h_
#define _MockListener$OnPong_h_
//$ class MockListener$OnPong
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

class $export MockListener$OnPong : public ::MockListener$Invocation {
	$class(MockListener$OnPong, $NO_CLASS_INIT, ::MockListener$Invocation)
public:
	MockListener$OnPong();
	void init$(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* data);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::java::nio::ByteBuffer* data = nullptr;
};

#endif // _MockListener$OnPong_h_