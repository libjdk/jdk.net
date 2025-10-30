#include <LocalHostCookie$MyCookieHandler.h>

#include <LocalHostCookie.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $LocalHostCookie = ::LocalHostCookie;
using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _LocalHostCookie$MyCookieHandler_FieldInfo_[] = {
	{"this$0", "LLocalHostCookie;", nullptr, $FINAL | $SYNTHETIC, $field(LocalHostCookie$MyCookieHandler, this$0)},
	{}
};

$MethodInfo _LocalHostCookie$MyCookieHandler_MethodInfo_[] = {
	{"<init>", "(LLocalHostCookie;)V", nullptr, 0, $method(static_cast<void(LocalHostCookie$MyCookieHandler::*)($LocalHostCookie*)>(&LocalHostCookie$MyCookieHandler::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _LocalHostCookie$MyCookieHandler_InnerClassesInfo_[] = {
	{"LocalHostCookie$MyCookieHandler", "LocalHostCookie", "MyCookieHandler", 0},
	{}
};

$ClassInfo _LocalHostCookie$MyCookieHandler_ClassInfo_ = {
	$ACC_SUPER,
	"LocalHostCookie$MyCookieHandler",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_LocalHostCookie$MyCookieHandler_FieldInfo_,
	_LocalHostCookie$MyCookieHandler_MethodInfo_,
	nullptr,
	nullptr,
	_LocalHostCookie$MyCookieHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LocalHostCookie"
};

$Object* allocate$LocalHostCookie$MyCookieHandler($Class* clazz) {
	return $of($alloc(LocalHostCookie$MyCookieHandler));
}

void LocalHostCookie$MyCookieHandler::init$($LocalHostCookie* this$0) {
	$set(this, this$0, this$0);
}

void LocalHostCookie$MyCookieHandler::handle($HttpExchange* exchange) {
	$useLocalCurrentObjectStackCache();
	$var($String, requestMethod, $nc(exchange)->getRequestMethod());
	if ($nc(requestMethod)->equalsIgnoreCase("GET"_s)) {
		$var($Headers, responseHeaders, exchange->getResponseHeaders());
		$nc(responseHeaders)->set("Content-Type"_s, "text/plain"_s);
		responseHeaders->set("Date"_s, "June 13th 2012"_s);
		responseHeaders->set("Set-Cookie2"_s, "name=value"_s);
		exchange->sendResponseHeaders(200, 0);
		$var($OutputStream, os, exchange->getResponseBody());
		$var($String, str, "This is what the server sent!"_s);
		$nc(os)->write($(str->getBytes()));
		os->flush();
		os->close();
	}
}

LocalHostCookie$MyCookieHandler::LocalHostCookie$MyCookieHandler() {
}

$Class* LocalHostCookie$MyCookieHandler::load$($String* name, bool initialize) {
	$loadClass(LocalHostCookie$MyCookieHandler, name, initialize, &_LocalHostCookie$MyCookieHandler_ClassInfo_, allocate$LocalHostCookie$MyCookieHandler);
	return class$;
}

$Class* LocalHostCookie$MyCookieHandler::class$ = nullptr;