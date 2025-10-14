#ifndef _HeadersTest$10_h_
#define _HeadersTest$10_h_
//$ class HeadersTest$10
//$ extends java.net.http.HttpRequest

#include <java/net/http/HttpRequest.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace net {
		namespace http {
			class HttpHeaders;
		}
	}
}
namespace java {
	namespace time {
		class Duration;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

class HeadersTest$10 : public ::java::net::http::HttpRequest {
	$class(HeadersTest$10, $NO_CLASS_INIT, ::java::net::http::HttpRequest)
public:
	HeadersTest$10();
	void init$(::java::time::Duration* val$bad);
	virtual ::java::util::Optional* bodyPublisher() override;
	virtual bool expectContinue() override;
	virtual ::java::net::http::HttpHeaders* headers() override;
	virtual $String* method() override;
	virtual ::java::util::Optional* timeout() override;
	virtual ::java::net::URI* uri() override;
	virtual ::java::util::Optional* version() override;
	::java::time::Duration* val$bad = nullptr;
};

#endif // _HeadersTest$10_h_