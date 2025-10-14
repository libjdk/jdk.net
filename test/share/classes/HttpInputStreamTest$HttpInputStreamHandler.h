#ifndef _HttpInputStreamTest$HttpInputStreamHandler_h_
#define _HttpInputStreamTest$HttpInputStreamHandler_h_
//$ class HttpInputStreamTest$HttpInputStreamHandler
//$ extends java.net.http.HttpResponse$BodyHandler

#include <java/net/http/HttpResponse$BodyHandler.h>

#pragma push_macro("MAX_BUFFERS_IN_QUEUE")
#undef MAX_BUFFERS_IN_QUEUE

namespace java {
	namespace net {
		namespace http {
			class HttpResponse$BodySubscriber;
			class HttpResponse$ResponseInfo;
		}
	}
}

class $export HttpInputStreamTest$HttpInputStreamHandler : public ::java::net::http::HttpResponse$BodyHandler {
	$class(HttpInputStreamTest$HttpInputStreamHandler, $NO_CLASS_INIT, ::java::net::http::HttpResponse$BodyHandler)
public:
	HttpInputStreamTest$HttpInputStreamHandler();
	void init$();
	void init$(int32_t maxBuffers);
	virtual ::java::net::http::HttpResponse$BodySubscriber* apply(::java::net::http::HttpResponse$ResponseInfo* rinfo) override;
	static const int32_t MAX_BUFFERS_IN_QUEUE = 1;
	int32_t maxBuffers = 0;
};

#pragma pop_macro("MAX_BUFFERS_IN_QUEUE")

#endif // _HttpInputStreamTest$HttpInputStreamHandler_h_