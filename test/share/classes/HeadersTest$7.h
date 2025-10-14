#ifndef _HeadersTest$7_h_
#define _HeadersTest$7_h_
//$ class HeadersTest$7
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

class HeadersTest$7 : public ::java::net::http::HttpRequest {
	$class(HeadersTest$7, $NO_CLASS_INIT, ::java::net::http::HttpRequest)
public:
	HeadersTest$7();
	void init$();
	virtual ::java::util::Optional* bodyPublisher() override;
	virtual bool expectContinue() override;
	virtual ::java::net::http::HttpHeaders* headers() override;
	virtual $String* method() override;
	virtual ::java::util::Optional* timeout() override;
	virtual ::java::net::URI* uri() override;
	virtual ::java::util::Optional* version() override;
};

#endif // _HeadersTest$7_h_