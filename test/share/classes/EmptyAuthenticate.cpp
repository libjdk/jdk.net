#include <EmptyAuthenticate.h>

#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $Optional = ::java::util::Optional;

class EmptyAuthenticate$$Lambda$lambda$main$0 : public $HttpHandler {
	$class(EmptyAuthenticate$$Lambda$lambda$main$0, $NO_CLASS_INIT, $HttpHandler)
public:
	void init$() {
	}
	virtual void handle($HttpExchange* exchange) override {
		EmptyAuthenticate::lambda$main$0(exchange);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<EmptyAuthenticate$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo EmptyAuthenticate$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EmptyAuthenticate$$Lambda$lambda$main$0::*)()>(&EmptyAuthenticate$$Lambda$lambda$main$0::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo EmptyAuthenticate$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"EmptyAuthenticate$$Lambda$lambda$main$0",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	nullptr,
	methodInfos
};
$Class* EmptyAuthenticate$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(EmptyAuthenticate$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* EmptyAuthenticate$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _EmptyAuthenticate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EmptyAuthenticate::*)()>(&EmptyAuthenticate::init$))},
	{"lambda$main$0", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($HttpExchange*)>(&EmptyAuthenticate::lambda$main$0)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EmptyAuthenticate::main)), "java.io.IOException,java.net.URISyntaxException,java.lang.InterruptedException"},
	{}
};

$ClassInfo _EmptyAuthenticate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EmptyAuthenticate",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EmptyAuthenticate_MethodInfo_
};

$Object* allocate$EmptyAuthenticate($Class* clazz) {
	return $of($alloc(EmptyAuthenticate));
}

void EmptyAuthenticate::init$() {
}

void EmptyAuthenticate::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t port = 0;
	$var($HttpServer, server, $HttpServer::create($$new($InetSocketAddress, port), 0));
	port = $nc($($nc(server)->getAddress()))->getPort();
	server->createContext("/"_s, static_cast<$HttpHandler*>($$new(EmptyAuthenticate$$Lambda$lambda$main$0)));
	server->start();
	$var($HttpResponse, response, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($HttpClient, httpClient, $HttpClient::newHttpClient());
				$var($HttpRequest, request, $nc($($nc($($HttpRequest::newBuilder($$new($URI, $$str({"http://localhost:"_s, $$str(port), "/"_s})))))->GET()))->build());
				$assign(response, $nc(httpClient)->send(request, $($HttpResponse$BodyHandlers::ofString())));
				bool ok = !$nc($($nc($($nc(response)->headers()))->firstValue("WWW-Authenticate"_s)))->isEmpty();
				if (!ok) {
					$throwNew($RuntimeException, "WWW-Authenicate missing"_s);
				}
			} catch ($IOException& e) {
				e->printStackTrace();
				$throwNew($RuntimeException, "Test failed"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			server->stop(0);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void EmptyAuthenticate::lambda$main$0($HttpExchange* exchange) {
	$useLocalCurrentObjectStackCache();
	$var($String, response, "test body"_s);
	$nc($($nc(exchange)->getResponseHeaders()))->add("www-authenticate"_s, ""_s);
	exchange->sendResponseHeaders(401, response->length());
	$var($OutputStream, os, exchange->getResponseBody());
	$nc(os)->write($(response->getBytes()));
	os->close();
}

EmptyAuthenticate::EmptyAuthenticate() {
}

$Class* EmptyAuthenticate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(EmptyAuthenticate$$Lambda$lambda$main$0::classInfo$.name)) {
			return EmptyAuthenticate$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(EmptyAuthenticate, name, initialize, &_EmptyAuthenticate_ClassInfo_, allocate$EmptyAuthenticate);
	return class$;
}

$Class* EmptyAuthenticate::class$ = nullptr;