#include <ImmutableHeaders$ImmutableHeadersHandler.h>

#include <ImmutableHeaders.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef US_ASCII

using $ImmutableHeaders = ::ImmutableHeaders;
using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

$MethodInfo _ImmutableHeaders$ImmutableHeadersHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImmutableHeaders$ImmutableHeadersHandler::*)()>(&ImmutableHeaders$ImmutableHeadersHandler::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ImmutableHeaders$ImmutableHeadersHandler_InnerClassesInfo_[] = {
	{"ImmutableHeaders$ImmutableHeadersHandler", "ImmutableHeaders", "ImmutableHeadersHandler", $STATIC},
	{}
};

$ClassInfo _ImmutableHeaders$ImmutableHeadersHandler_ClassInfo_ = {
	$ACC_SUPER,
	"ImmutableHeaders$ImmutableHeadersHandler",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	nullptr,
	_ImmutableHeaders$ImmutableHeadersHandler_MethodInfo_,
	nullptr,
	nullptr,
	_ImmutableHeaders$ImmutableHeadersHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ImmutableHeaders"
};

$Object* allocate$ImmutableHeaders$ImmutableHeadersHandler($Class* clazz) {
	return $of($alloc(ImmutableHeaders$ImmutableHeadersHandler));
}

void ImmutableHeaders$ImmutableHeadersHandler::init$() {
}

void ImmutableHeaders$ImmutableHeadersHandler::handle($HttpExchange* he) {
	$useLocalCurrentObjectStackCache();
	$var($String, method, $nc(he)->getRequestMethod());
	$var($InputStream, is, he->getRequestBody());
	$var($Headers, h, he->getResponseHeaders());
	$nc(h)->add("X-Foo-Response"_s, "resp"_s);
	he->sendResponseHeaders(200, "Hello world"_s->length());
	$var($OutputStream, os, he->getResponseBody());
	$init($StandardCharsets);
	$nc(os)->write($("Hello world"_s->getBytes($StandardCharsets::US_ASCII)));
	os->close();
}

ImmutableHeaders$ImmutableHeadersHandler::ImmutableHeaders$ImmutableHeadersHandler() {
}

$Class* ImmutableHeaders$ImmutableHeadersHandler::load$($String* name, bool initialize) {
	$loadClass(ImmutableHeaders$ImmutableHeadersHandler, name, initialize, &_ImmutableHeaders$ImmutableHeadersHandler_ClassInfo_, allocate$ImmutableHeaders$ImmutableHeadersHandler);
	return class$;
}

$Class* ImmutableHeaders$ImmutableHeadersHandler::class$ = nullptr;