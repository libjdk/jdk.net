#ifndef _MockListener$OnBinary_h_
#define _MockListener$OnBinary_h_
//$ class MockListener$OnBinary
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

class $export MockListener$OnBinary : public ::MockListener$Invocation {
	$class(MockListener$OnBinary, $NO_CLASS_INIT, ::MockListener$Invocation)
public:
	MockListener$OnBinary();
	void init$(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* data, bool last);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::java::nio::ByteBuffer* data = nullptr;
	bool last = false;
};

#endif // _MockListener$OnBinary_h_