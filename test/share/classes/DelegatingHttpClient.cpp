#include <DelegatingHttpClient.h>

#include <java/net/http/HttpClient$Redirect.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$PushPromiseHandler.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Redirect = ::java::net::http::HttpClient$Redirect;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$PushPromiseHandler = ::java::net::http::HttpResponse$PushPromiseHandler;
using $Optional = ::java::util::Optional;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLParameters = ::javax::net::ssl::SSLParameters;

$FieldInfo _DelegatingHttpClient_FieldInfo_[] = {
	{"client", "Ljava/net/http/HttpClient;", nullptr, $PRIVATE | $FINAL, $field(DelegatingHttpClient, client)},
	{}
};

$MethodInfo _DelegatingHttpClient_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/HttpClient;)V", nullptr, $PUBLIC, $method(static_cast<void(DelegatingHttpClient::*)($HttpClient*)>(&DelegatingHttpClient::init$))},
	{"authenticator", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/Authenticator;>;", $PUBLIC},
	{"connectTimeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"cookieHandler", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/CookieHandler;>;", $PUBLIC},
	{"executor", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/util/concurrent/Executor;>;", $PUBLIC},
	{"followRedirects", "()Ljava/net/http/HttpClient$Redirect;", nullptr, $PUBLIC},
	{"proxy", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/ProxySelector;>;", $PUBLIC},
	{"send", "(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler;)Ljava/net/http/HttpResponse;", "<T:Ljava/lang/Object;>(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler<TT;>;)Ljava/net/http/HttpResponse<TT;>;", $PUBLIC, nullptr, "java.io.IOException,java.lang.InterruptedException"},
	{"sendAsync", "(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler<TT;>;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/HttpResponse<TT;>;>;", $PUBLIC},
	{"sendAsync", "(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler;Ljava/net/http/HttpResponse$PushPromiseHandler;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler<TT;>;Ljava/net/http/HttpResponse$PushPromiseHandler<TT;>;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/HttpResponse<TT;>;>;", $PUBLIC},
	{"sslContext", "()Ljavax/net/ssl/SSLContext;", nullptr, $PUBLIC},
	{"sslParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC},
	{"version", "()Ljava/net/http/HttpClient$Version;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DelegatingHttpClient_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DelegatingHttpClient",
	"java.net.http.HttpClient",
	nullptr,
	_DelegatingHttpClient_FieldInfo_,
	_DelegatingHttpClient_MethodInfo_
};

$Object* allocate$DelegatingHttpClient($Class* clazz) {
	return $of($alloc(DelegatingHttpClient));
}

void DelegatingHttpClient::init$($HttpClient* client) {
	$HttpClient::init$();
	$set(this, client, client);
}

$Optional* DelegatingHttpClient::cookieHandler() {
	return $nc(this->client)->cookieHandler();
}

$Optional* DelegatingHttpClient::connectTimeout() {
	return $nc(this->client)->connectTimeout();
}

$HttpClient$Redirect* DelegatingHttpClient::followRedirects() {
	return $nc(this->client)->followRedirects();
}

$Optional* DelegatingHttpClient::proxy() {
	return $nc(this->client)->proxy();
}

$SSLContext* DelegatingHttpClient::sslContext() {
	return $nc(this->client)->sslContext();
}

$SSLParameters* DelegatingHttpClient::sslParameters() {
	return $nc(this->client)->sslParameters();
}

$Optional* DelegatingHttpClient::authenticator() {
	return $nc(this->client)->authenticator();
}

$HttpClient$Version* DelegatingHttpClient::version() {
	return $nc(this->client)->version();
}

$Optional* DelegatingHttpClient::executor() {
	return $nc(this->client)->executor();
}

$HttpResponse* DelegatingHttpClient::send($HttpRequest* request, $HttpResponse$BodyHandler* responseBodyHandler) {
	return $nc(this->client)->send(request, responseBodyHandler);
}

$CompletableFuture* DelegatingHttpClient::sendAsync($HttpRequest* request, $HttpResponse$BodyHandler* responseBodyHandler) {
	return $nc(this->client)->sendAsync(request, responseBodyHandler);
}

$CompletableFuture* DelegatingHttpClient::sendAsync($HttpRequest* request, $HttpResponse$BodyHandler* responseBodyHandler, $HttpResponse$PushPromiseHandler* pushPromiseHandler) {
	return $nc(this->client)->sendAsync(request, responseBodyHandler, pushPromiseHandler);
}

DelegatingHttpClient::DelegatingHttpClient() {
}

$Class* DelegatingHttpClient::load$($String* name, bool initialize) {
	$loadClass(DelegatingHttpClient, name, initialize, &_DelegatingHttpClient_ClassInfo_, allocate$DelegatingHttpClient);
	return class$;
}

$Class* DelegatingHttpClient::class$ = nullptr;