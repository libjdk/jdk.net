#ifndef _FixedHttpResponse_h_
#define _FixedHttpResponse_h_
//$ class FixedHttpResponse
//$ extends java.net.http.HttpResponse

#include <java/net/http/HttpResponse.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace net {
		namespace http {
			class HttpClient$Version;
			class HttpHeaders;
			class HttpRequest;
		}
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLSession;
		}
	}
}

class $export FixedHttpResponse : public ::java::net::http::HttpResponse {
	$class(FixedHttpResponse, $NO_CLASS_INIT, ::java::net::http::HttpResponse)
public:
	FixedHttpResponse();
	void init$(int32_t statusCode, ::java::net::http::HttpRequest* request, ::java::net::http::HttpHeaders* headers, Object$* body, ::javax::net::ssl::SSLSession* sslSession, ::java::net::URI* uri, ::java::net::http::HttpClient$Version* version);
	virtual $Object* body() override;
	virtual ::java::net::http::HttpHeaders* headers() override;
	virtual ::java::util::Optional* previousResponse() override;
	virtual ::java::net::http::HttpRequest* request() override;
	virtual ::java::util::Optional* sslSession() override;
	virtual int32_t statusCode() override;
	virtual $String* toString() override;
	virtual ::java::net::URI* uri() override;
	virtual ::java::net::http::HttpClient$Version* version() override;
	int32_t statusCode$ = 0;
	::java::net::http::HttpRequest* request$ = nullptr;
	::java::net::http::HttpHeaders* headers$ = nullptr;
	$Object* body$ = nullptr;
	::javax::net::ssl::SSLSession* sslSession$ = nullptr;
	::java::net::URI* uri$ = nullptr;
	::java::net::http::HttpClient$Version* version$ = nullptr;
};

#endif // _FixedHttpResponse_h_