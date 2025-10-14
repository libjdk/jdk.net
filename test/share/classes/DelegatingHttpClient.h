#ifndef _DelegatingHttpClient_h_
#define _DelegatingHttpClient_h_
//$ class DelegatingHttpClient
//$ extends java.net.http.HttpClient

#include <java/net/http/HttpClient.h>

namespace java {
	namespace net {
		namespace http {
			class HttpClient$Redirect;
			class HttpClient$Version;
			class HttpRequest;
			class HttpResponse;
			class HttpResponse$BodyHandler;
			class HttpResponse$PushPromiseHandler;
		}
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLContext;
			class SSLParameters;
		}
	}
}

class $export DelegatingHttpClient : public ::java::net::http::HttpClient {
	$class(DelegatingHttpClient, $NO_CLASS_INIT, ::java::net::http::HttpClient)
public:
	DelegatingHttpClient();
	void init$(::java::net::http::HttpClient* client);
	virtual ::java::util::Optional* authenticator() override;
	virtual ::java::util::Optional* connectTimeout() override;
	virtual ::java::util::Optional* cookieHandler() override;
	virtual ::java::util::Optional* executor() override;
	virtual ::java::net::http::HttpClient$Redirect* followRedirects() override;
	virtual ::java::util::Optional* proxy() override;
	virtual ::java::net::http::HttpResponse* send(::java::net::http::HttpRequest* request, ::java::net::http::HttpResponse$BodyHandler* responseBodyHandler) override;
	virtual ::java::util::concurrent::CompletableFuture* sendAsync(::java::net::http::HttpRequest* request, ::java::net::http::HttpResponse$BodyHandler* responseBodyHandler) override;
	virtual ::java::util::concurrent::CompletableFuture* sendAsync(::java::net::http::HttpRequest* request, ::java::net::http::HttpResponse$BodyHandler* responseBodyHandler, ::java::net::http::HttpResponse$PushPromiseHandler* pushPromiseHandler) override;
	virtual ::javax::net::ssl::SSLContext* sslContext() override;
	virtual ::javax::net::ssl::SSLParameters* sslParameters() override;
	virtual ::java::net::http::HttpClient$Version* version() override;
	::java::net::http::HttpClient* client = nullptr;
};

#endif // _DelegatingHttpClient_h_