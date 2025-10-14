#ifndef _HeadersTest$2_h_
#define _HeadersTest$2_h_
//$ class HeadersTest$2
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

class HeadersTest$2 : public ::java::net::http::HttpRequest {
	$class(HeadersTest$2, $NO_CLASS_INIT, ::java::net::http::HttpRequest)
public:
	HeadersTest$2();
	void init$($String* val$value);
	virtual ::java::util::Optional* bodyPublisher() override;
	virtual bool expectContinue() override;
	virtual ::java::net::http::HttpHeaders* headers() override;
	virtual $String* method() override;
	virtual ::java::util::Optional* timeout() override;
	virtual ::java::net::URI* uri() override;
	virtual ::java::util::Optional* version() override;
	$String* val$value = nullptr;
};

#endif // _HeadersTest$2_h_