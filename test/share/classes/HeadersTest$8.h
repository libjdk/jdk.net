#ifndef _HeadersTest$8_h_
#define _HeadersTest$8_h_
//$ class HeadersTest$8
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
	namespace util {
		class Optional;
	}
}

class HeadersTest$8 : public ::java::net::http::HttpRequest {
	$class(HeadersTest$8, $NO_CLASS_INIT, ::java::net::http::HttpRequest)
public:
	HeadersTest$8();
	void init$(::java::net::URI* val$uri);
	virtual ::java::util::Optional* bodyPublisher() override;
	virtual bool expectContinue() override;
	virtual ::java::net::http::HttpHeaders* headers() override;
	virtual $String* method() override;
	virtual ::java::util::Optional* timeout() override;
	virtual ::java::net::URI* uri() override;
	virtual ::java::util::Optional* version() override;
	::java::net::URI* val$uri = nullptr;
};

#endif // _HeadersTest$8_h_