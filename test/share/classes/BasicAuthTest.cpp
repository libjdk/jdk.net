#include <BasicAuthTest.h>

#include <BasicAuthTest$ClientAuth.h>
#include <BasicAuthTest$Handler.h>
#include <BasicAuthTest$ServerAuth.h>
#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/BasicAuthenticator.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/net/Authenticator.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/List.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

#undef POST_BODY
#undef RESPONSE

using $BasicAuthTest$ClientAuth = ::BasicAuthTest$ClientAuth;
using $BasicAuthTest$Handler = ::BasicAuthTest$Handler;
using $BasicAuthTest$ServerAuth = ::BasicAuthTest$ServerAuth;
using $Authenticator = ::com::sun::net::httpserver::Authenticator;
using $BasicAuthenticator = ::com::sun::net::httpserver::BasicAuthenticator;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $1Authenticator = ::java::net::Authenticator;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $List = ::java::util::List;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;

$FieldInfo _BasicAuthTest_FieldInfo_[] = {
	{"ok", "Z", nullptr, $STATIC | $VOLATILE, $staticField(BasicAuthTest, ok)},
	{"RESPONSE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicAuthTest, RESPONSE)},
	{"POST_BODY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicAuthTest, POST_BODY)},
	{}
};

$MethodInfo _BasicAuthTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicAuthTest::*)()>(&BasicAuthTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BasicAuthTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _BasicAuthTest_InnerClassesInfo_[] = {
	{"BasicAuthTest$Handler", "BasicAuthTest", "Handler", $STATIC},
	{"BasicAuthTest$ClientAuth", "BasicAuthTest", "ClientAuth", $STATIC},
	{"BasicAuthTest$ServerAuth", "BasicAuthTest", "ServerAuth", $STATIC},
	{}
};

$ClassInfo _BasicAuthTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BasicAuthTest",
	"java.lang.Object",
	nullptr,
	_BasicAuthTest_FieldInfo_,
	_BasicAuthTest_MethodInfo_,
	nullptr,
	nullptr,
	_BasicAuthTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"BasicAuthTest$Handler,BasicAuthTest$ClientAuth,BasicAuthTest$ServerAuth"
};

$Object* allocate$BasicAuthTest($Class* clazz) {
	return $of($alloc(BasicAuthTest));
}

$volatile(bool) BasicAuthTest::ok = false;
$String* BasicAuthTest::RESPONSE = nullptr;
$String* BasicAuthTest::POST_BODY = nullptr;

void BasicAuthTest::init$() {
}

void BasicAuthTest::main($StringArray* args) {
	$init(BasicAuthTest);
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	$var($HttpServer, server, $HttpServer::create(addr, 10));
	$var($ExecutorService, e, $Executors::newCachedThreadPool());
	$var($BasicAuthTest$Handler, h, $new($BasicAuthTest$Handler));
	$var($HttpContext, serverContext, $nc(server)->createContext("/test"_s, h));
	int32_t port = $nc($(server->getAddress()))->getPort();
	$nc($System::out)->println($$str({"Server port = "_s, $$str(port)}));
	$var($BasicAuthTest$ClientAuth, ca, $new($BasicAuthTest$ClientAuth));
	$var($BasicAuthTest$ServerAuth, sa, $new($BasicAuthTest$ServerAuth, "foo realm"_s));
	$nc(serverContext)->setAuthenticator(sa);
	server->setExecutor(e);
	server->start();
	$var($HttpClient, client, $nc($($nc($($HttpClient::newBuilder()))->authenticator(ca)))->build());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($URI, uri, $new($URI, $$str({"http://localhost:"_s, $($Integer::toString(port)), "/test/foo"_s})));
			$var($HttpRequest, req, $nc($($nc($($HttpRequest::newBuilder(uri)))->GET()))->build());
			$var($HttpResponse, resp, $nc(client)->send(req, $($HttpResponse$BodyHandlers::ofString())));
			bool var$1 = $nc(resp)->statusCode() == 200;
			BasicAuthTest::ok = var$1 && $nc($of($(resp->body())))->equals(BasicAuthTest::RESPONSE);
			if (!BasicAuthTest::ok || ca->count != 1) {
				$throwNew($RuntimeException, "Test failed"_s);
			}
			$assign(resp, client->send(req, $($HttpResponse$BodyHandlers::ofString())));
			bool var$2 = resp->statusCode() == 200;
			BasicAuthTest::ok = var$2 && $nc($of($(resp->body())))->equals(BasicAuthTest::RESPONSE);
			if (!BasicAuthTest::ok || ca->count != 1) {
				$throwNew($RuntimeException, "Test failed"_s);
			}
			$assign(req, $nc($($nc($($HttpRequest::newBuilder(uri)))->POST($($HttpRequest$BodyPublishers::ofString(BasicAuthTest::POST_BODY)))))->build());
			$assign(resp, client->send(req, $($HttpResponse$BodyHandlers::ofString())));
			BasicAuthTest::ok = resp->statusCode() == 200;
			if (!BasicAuthTest::ok || ca->count != 1) {
				$throwNew($RuntimeException, "Test failed"_s);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			server->stop(0);
			$nc(e)->shutdownNow();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$nc($System::out)->println("OK"_s);
}

BasicAuthTest::BasicAuthTest() {
}

void clinit$BasicAuthTest($Class* class$) {
	$assignStatic(BasicAuthTest::RESPONSE, "Hello world"_s);
	$assignStatic(BasicAuthTest::POST_BODY, "This is the POST body 123909090909090"_s);
}

$Class* BasicAuthTest::load$($String* name, bool initialize) {
	$loadClass(BasicAuthTest, name, initialize, &_BasicAuthTest_ClassInfo_, clinit$BasicAuthTest, allocate$BasicAuthTest);
	return class$;
}

$Class* BasicAuthTest::class$ = nullptr;