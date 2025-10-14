#ifndef _ShortRequestBody$AbstractDelegateRequestBody_h_
#define _ShortRequestBody$AbstractDelegateRequestBody_h_
//$ class ShortRequestBody$AbstractDelegateRequestBody
//$ extends java.net.http.HttpRequest$BodyPublisher

#include <java/net/http/HttpRequest$BodyPublisher.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Subscriber;
		}
	}
}

class $export ShortRequestBody$AbstractDelegateRequestBody : public ::java::net::http::HttpRequest$BodyPublisher {
	$class(ShortRequestBody$AbstractDelegateRequestBody, $NO_CLASS_INIT, ::java::net::http::HttpRequest$BodyPublisher)
public:
	ShortRequestBody$AbstractDelegateRequestBody();
	void init$(::java::net::http::HttpRequest$BodyPublisher* delegate, int64_t contentLength);
	virtual int64_t contentLength() override;
	virtual void subscribe(::java::util::concurrent::Flow$Subscriber* subscriber) override;
	::java::net::http::HttpRequest$BodyPublisher* delegate = nullptr;
	int64_t contentLength$ = 0;
};

#endif // _ShortRequestBody$AbstractDelegateRequestBody_h_