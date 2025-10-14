#ifndef _MockServer$Connection_h_
#define _MockServer$Connection_h_
//$ class MockServer$Connection
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

#pragma push_macro("CLOSED")
#undef CLOSED
#pragma push_macro("CRLF")
#undef CRLF

class MockServer;
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class Socket;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ArrayBlockingQueue;
			class TimeUnit;
		}
	}
}

class $export MockServer$Connection : public ::java::lang::Thread {
	$class(MockServer$Connection, 0, ::java::lang::Thread)
public:
	MockServer$Connection();
	void init$(::MockServer* this$0, ::java::net::Socket* s);
	void cleanup();
	virtual void close();
	virtual $String* nextInput(int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	virtual $String* nextInput();
	virtual bool poll();
	virtual void run() override;
	virtual void send($String* r);
	virtual void sendHttpResponse(int32_t code, $String* body, $StringArray* headers);
	virtual void sendIncompleteHttpResponseBody(int32_t code);
	virtual void sendIncompleteHttpResponseHeaders(int32_t code);
	virtual $String* toString() override;
	::MockServer* this$0 = nullptr;
	::java::net::Socket* socket = nullptr;
	int32_t id = 0;
	::java::io::InputStream* is = nullptr;
	::java::io::OutputStream* os = nullptr;
	::java::util::concurrent::ArrayBlockingQueue* incoming = nullptr;
	$volatile($String*) statusLine = nullptr;
	static $String* CRLF;
	static $String* CLOSED;
	$volatile(bool) closed = false;
	$volatile(bool) released = false;
};

#pragma pop_macro("CLOSED")
#pragma pop_macro("CRLF")

#endif // _MockServer$Connection_h_