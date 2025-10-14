#ifndef _MethodsTest$1_h_
#define _MethodsTest$1_h_
//$ class MethodsTest$1
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

class MethodsTest$1 : public ::java::net::http::HttpRequest {
	$class(MethodsTest$1, $NO_CLASS_INIT, ::java::net::http::HttpRequest)
public:
	MethodsTest$1();
	void init$($String* val$name);
	virtual ::java::util::Optional* bodyPublisher() override;
	virtual bool expectContinue() override;
	virtual ::java::net::http::HttpHeaders* headers() override;
	static bool lambda$headers$0($String* x, $String* y);
	virtual $String* method() override;
	virtual ::java::util::Optional* timeout() override;
	virtual ::java::net::URI* uri() override;
	virtual ::java::util::Optional* version() override;
	$String* val$name = nullptr;
};

#endif // _MethodsTest$1_h_