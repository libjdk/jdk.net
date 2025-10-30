#include <ZeroRedirects.h>

#include <ZeroRedirects$Handler.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient$Redirect.h>
#include <java/net/http/HttpClient.h>
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

#undef ALWAYS

using $ZeroRedirects$Handler = ::ZeroRedirects$Handler;
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
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpClient$Redirect = ::java::net::http::HttpClient$Redirect;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $List = ::java::util::List;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;

$FieldInfo _ZeroRedirects_FieldInfo_[] = {
	{"s1", "Lcom/sun/net/httpserver/HttpServer;", nullptr, $STATIC, $staticField(ZeroRedirects, s1)},
	{"executor", "Ljava/util/concurrent/ExecutorService;", nullptr, $STATIC, $staticField(ZeroRedirects, executor)},
	{"port", "I", nullptr, $STATIC, $staticField(ZeroRedirects, port)},
	{"client", "Ljava/net/http/HttpClient;", nullptr, $STATIC, $staticField(ZeroRedirects, client)},
	{"uri", "Ljava/net/URI;", nullptr, $STATIC, $staticField(ZeroRedirects, uri)},
	{}
};

$MethodInfo _ZeroRedirects_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ZeroRedirects::*)()>(&ZeroRedirects::init$))},
	{"initServer", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ZeroRedirects::initServer)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ZeroRedirects::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ZeroRedirects::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ZeroRedirects_InnerClassesInfo_[] = {
	{"ZeroRedirects$Handler", "ZeroRedirects", "Handler", $STATIC},
	{}
};

$ClassInfo _ZeroRedirects_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ZeroRedirects",
	"java.lang.Object",
	nullptr,
	_ZeroRedirects_FieldInfo_,
	_ZeroRedirects_MethodInfo_,
	nullptr,
	nullptr,
	_ZeroRedirects_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ZeroRedirects$Handler"
};

$Object* allocate$ZeroRedirects($Class* clazz) {
	return $of($alloc(ZeroRedirects));
}

$HttpServer* ZeroRedirects::s1 = nullptr;
$ExecutorService* ZeroRedirects::executor = nullptr;
int32_t ZeroRedirects::port = 0;
$HttpClient* ZeroRedirects::client = nullptr;
$URI* ZeroRedirects::uri = nullptr;

void ZeroRedirects::init$() {
}

void ZeroRedirects::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	initServer();
	$init(ZeroRedirects);
	$init($HttpClient$Redirect);
	$assignStatic(ZeroRedirects::client, $nc($($nc($($nc($($HttpClient::newBuilder()))->executor(ZeroRedirects::executor)))->followRedirects($HttpClient$Redirect::ALWAYS)))->build());
	{
		$var($Throwable, var$0, nullptr);
		try {
			test();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(ZeroRedirects::s1)->stop(0);
			$nc(ZeroRedirects::executor)->shutdownNow();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ZeroRedirects::test() {
	$useLocalCurrentObjectStackCache();
	$System::setProperty("java.net.http.redirects.retrylimit"_s, "0"_s);
	$init(ZeroRedirects);
	$var($HttpRequest, r, $nc($($nc($($HttpRequest::newBuilder(ZeroRedirects::uri)))->GET()))->build());
	$var($HttpResponse, resp, $nc(ZeroRedirects::client)->send(r, $($HttpResponse$BodyHandlers::discarding())));
	$nc($System::out)->printf("Client: response is %d\n"_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc(resp)->statusCode())))}));
	if ($nc(resp)->statusCode() != 200) {
		$throwNew($RuntimeException);
	}
}

void ZeroRedirects::initServer() {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	$init(ZeroRedirects);
	$assignStatic(ZeroRedirects::s1, $HttpServer::create(addr, 0));
	$var($HttpHandler, h, $new($ZeroRedirects$Handler));
	$var($HttpContext, c1, $nc(ZeroRedirects::s1)->createContext("/"_s, h));
	$assignStatic(ZeroRedirects::executor, $Executors::newCachedThreadPool());
	$nc(ZeroRedirects::s1)->setExecutor(ZeroRedirects::executor);
	$nc(ZeroRedirects::s1)->start();
	ZeroRedirects::port = $nc($($nc(ZeroRedirects::s1)->getAddress()))->getPort();
	$assignStatic(ZeroRedirects::uri, $new($URI, $$str({"http://localhost:"_s, $$str(ZeroRedirects::port), "/foo"_s})));
	$nc($System::out)->println($$str({"HTTP server port = "_s, $$str(ZeroRedirects::port)}));
}

ZeroRedirects::ZeroRedirects() {
}

$Class* ZeroRedirects::load$($String* name, bool initialize) {
	$loadClass(ZeroRedirects, name, initialize, &_ZeroRedirects_ClassInfo_, allocate$ZeroRedirects);
	return class$;
}

$Class* ZeroRedirects::class$ = nullptr;