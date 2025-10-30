#include <FixedHttpResponse.h>

#include <java/net/URI.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/Optional.h>
#include <javax/net/ssl/SSLSession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpResponse = ::java::net::http::HttpResponse;
using $Optional = ::java::util::Optional;
using $SSLSession = ::javax::net::ssl::SSLSession;

$FieldInfo _FixedHttpResponse_FieldInfo_[] = {
	{"statusCode", "I", nullptr, $PRIVATE | $FINAL, $field(FixedHttpResponse, statusCode$)},
	{"request", "Ljava/net/http/HttpRequest;", nullptr, $PRIVATE | $FINAL, $field(FixedHttpResponse, request$)},
	{"headers", "Ljava/net/http/HttpHeaders;", nullptr, $PRIVATE | $FINAL, $field(FixedHttpResponse, headers$)},
	{"body", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(FixedHttpResponse, body$)},
	{"sslSession", "Ljavax/net/ssl/SSLSession;", nullptr, $PRIVATE | $FINAL, $field(FixedHttpResponse, sslSession$)},
	{"uri", "Ljava/net/URI;", nullptr, $PRIVATE | $FINAL, $field(FixedHttpResponse, uri$)},
	{"version", "Ljava/net/http/HttpClient$Version;", nullptr, $PRIVATE | $FINAL, $field(FixedHttpResponse, version$)},
	{}
};

$MethodInfo _FixedHttpResponse_MethodInfo_[] = {
	{"<init>", "(ILjava/net/http/HttpRequest;Ljava/net/http/HttpHeaders;Ljava/lang/Object;Ljavax/net/ssl/SSLSession;Ljava/net/URI;Ljava/net/http/HttpClient$Version;)V", "(ILjava/net/http/HttpRequest;Ljava/net/http/HttpHeaders;TT;Ljavax/net/ssl/SSLSession;Ljava/net/URI;Ljava/net/http/HttpClient$Version;)V", $PUBLIC, $method(static_cast<void(FixedHttpResponse::*)(int32_t,$HttpRequest*,$HttpHeaders*,Object$*,$SSLSession*,$URI*,$HttpClient$Version*)>(&FixedHttpResponse::init$))},
	{"body", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"previousResponse", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpResponse<TT;>;>;", $PUBLIC},
	{"request", "()Ljava/net/http/HttpRequest;", nullptr, $PUBLIC},
	{"sslSession", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljavax/net/ssl/SSLSession;>;", $PUBLIC},
	{"statusCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/net/http/HttpClient$Version;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FixedHttpResponse_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FixedHttpResponse",
	"java.lang.Object",
	"java.net.http.HttpResponse",
	_FixedHttpResponse_FieldInfo_,
	_FixedHttpResponse_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/net/http/HttpResponse<TT;>;"
};

$Object* allocate$FixedHttpResponse($Class* clazz) {
	return $of($alloc(FixedHttpResponse));
}

void FixedHttpResponse::init$(int32_t statusCode, $HttpRequest* request, $HttpHeaders* headers, Object$* body, $SSLSession* sslSession, $URI* uri, $HttpClient$Version* version) {
	this->statusCode$ = statusCode;
	$set(this, request$, request);
	$set(this, headers$, headers);
	$set(this, body$, body);
	$set(this, sslSession$, sslSession);
	$set(this, uri$, uri);
	$set(this, version$, version);
}

int32_t FixedHttpResponse::statusCode() {
	return this->statusCode$;
}

$HttpRequest* FixedHttpResponse::request() {
	return this->request$;
}

$Optional* FixedHttpResponse::previousResponse() {
	return $Optional::empty();
}

$HttpHeaders* FixedHttpResponse::headers() {
	return this->headers$;
}

$Object* FixedHttpResponse::body() {
	return $of(this->body$);
}

$Optional* FixedHttpResponse::sslSession() {
	return $Optional::ofNullable(this->sslSession$);
}

$URI* FixedHttpResponse::uri() {
	return this->uri$;
}

$HttpClient$Version* FixedHttpResponse::version() {
	return this->version$;
}

$String* FixedHttpResponse::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	return sb->append($($HttpResponse::toString()))->append(" [ "_s)->append("status code: "_s)->append(this->statusCode$)->append(", request: "_s)->append($of(this->request$))->append(", headers: "_s)->append($of(this->headers$))->append(" ]"_s)->toString();
}

FixedHttpResponse::FixedHttpResponse() {
}

$Class* FixedHttpResponse::load$($String* name, bool initialize) {
	$loadClass(FixedHttpResponse, name, initialize, &_FixedHttpResponse_ClassInfo_, allocate$FixedHttpResponse);
	return class$;
}

$Class* FixedHttpResponse::class$ = nullptr;