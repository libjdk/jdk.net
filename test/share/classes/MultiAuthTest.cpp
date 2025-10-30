#include <MultiAuthTest.h>

#include <MultiAuthTest$ClientAuth.h>
#include <MultiAuthTest$Handler.h>
#include <MultiAuthTest$ServerAuth.h>
#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/BasicAuthenticator.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/io/IOException.h>
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
#include <java/util/UUID.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

#undef POST_BODY
#undef RESPONSE

using $MultiAuthTest$ClientAuth = ::MultiAuthTest$ClientAuth;
using $MultiAuthTest$Handler = ::MultiAuthTest$Handler;
using $MultiAuthTest$ServerAuth = ::MultiAuthTest$ServerAuth;
using $Authenticator = ::com::sun::net::httpserver::Authenticator;
using $BasicAuthenticator = ::com::sun::net::httpserver::BasicAuthenticator;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
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
using $UUID = ::java::util::UUID;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _MultiAuthTest_FieldInfo_[] = {
	{"ok", "Z", nullptr, $STATIC | $VOLATILE, $staticField(MultiAuthTest, ok)},
	{"RESPONSE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MultiAuthTest, RESPONSE)},
	{"POST_BODY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MultiAuthTest, POST_BODY)},
	{}
};

$MethodInfo _MultiAuthTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiAuthTest::*)()>(&MultiAuthTest::init$))},
	{"createServer", "(Ljava/util/concurrent/ExecutorService;Lcom/sun/net/httpserver/BasicAuthenticator;)Lcom/sun/net/httpserver/HttpServer;", nullptr, $STATIC, $method(static_cast<$HttpServer*(*)($ExecutorService*,$BasicAuthenticator*)>(&MultiAuthTest::createServer)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MultiAuthTest::main)), "java.lang.Exception"},
	{"test", "(Ljava/net/http/HttpClient;LMultiAuthTest$ClientAuth;Ljava/net/URI;ILjava/lang/Class;)V", "(Ljava/net/http/HttpClient;LMultiAuthTest$ClientAuth;Ljava/net/URI;ILjava/lang/Class<+Ljava/lang/Exception;>;)V", $STATIC, $method(static_cast<void(*)($HttpClient*,$MultiAuthTest$ClientAuth*,$URI*,int32_t,$Class*)>(&MultiAuthTest::test)), "java.io.IOException,java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _MultiAuthTest_InnerClassesInfo_[] = {
	{"MultiAuthTest$Handler", "MultiAuthTest", "Handler", $STATIC},
	{"MultiAuthTest$ClientAuth", "MultiAuthTest", "ClientAuth", $STATIC},
	{"MultiAuthTest$ServerAuth", "MultiAuthTest", "ServerAuth", $STATIC},
	{"MultiAuthTest$HttpRequestBuilderFactory", "MultiAuthTest", "HttpRequestBuilderFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MultiAuthTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MultiAuthTest",
	"java.lang.Object",
	nullptr,
	_MultiAuthTest_FieldInfo_,
	_MultiAuthTest_MethodInfo_,
	nullptr,
	nullptr,
	_MultiAuthTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MultiAuthTest$Handler,MultiAuthTest$ClientAuth,MultiAuthTest$ServerAuth,MultiAuthTest$HttpRequestBuilderFactory"
};

$Object* allocate$MultiAuthTest($Class* clazz) {
	return $of($alloc(MultiAuthTest));
}

$volatile(bool) MultiAuthTest::ok = false;
$String* MultiAuthTest::RESPONSE = nullptr;
$String* MultiAuthTest::POST_BODY = nullptr;

void MultiAuthTest::init$() {
}

$HttpServer* MultiAuthTest::createServer($ExecutorService* e, $BasicAuthenticator* sa) {
	$init(MultiAuthTest);
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	$var($HttpServer, server, $HttpServer::create(addr, 10));
	$var($MultiAuthTest$Handler, h, $new($MultiAuthTest$Handler));
	$var($HttpContext, serverContext, $nc(server)->createContext("/test"_s, h));
	$nc(serverContext)->setAuthenticator(sa);
	server->setExecutor(e);
	server->start();
	return server;
}

void MultiAuthTest::main($StringArray* args) {
	$init(MultiAuthTest);
	$useLocalCurrentObjectStackCache();
	$var($ExecutorService, e, $Executors::newCachedThreadPool());
	$var($MultiAuthTest$ServerAuth, sa, $new($MultiAuthTest$ServerAuth, "foo realm"_s));
	$var($HttpServer, server, createServer(e, sa));
	int32_t port = $nc($($nc(server)->getAddress()))->getPort();
	$nc($System::out)->println($$str({"Server port = "_s, $$str(port)}));
	$var($MultiAuthTest$ClientAuth, ca, $new($MultiAuthTest$ClientAuth));
	$var($HttpClient, client1, $nc($($nc($($HttpClient::newBuilder()))->authenticator(ca)))->build());
	$var($HttpClient, client2, $nc($($nc($($HttpClient::newBuilder()))->authenticator(ca)))->build());
	$var($HttpClient, client3, $HttpClient::newHttpClient());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($URI, uri, $new($URI, $$str({"http://localhost:"_s, $$str(port), "/test/foo"_s})));
			$nc($System::out)->println($$str({"URI: "_s, uri}));
			$nc($System::out)->println("\nTesting with client #1, Authenticator #1"_s);
			test(client1, ca, uri, 1, nullptr);
			$nc($System::out)->println("Testing again with client #1, Authenticator #1"_s);
			test(client1, ca, uri, 1, nullptr);
			$nc($System::out)->println("Testing with client #2, Authenticator #1"_s);
			test(client2, ca, uri, 2, nullptr);
			$nc($System::out)->println("Testing with default client (HttpClient.newHttpClient()), no authenticator"_s);
			$load($IOException);
			test($($HttpClient::newHttpClient()), ca, uri, 2, $IOException::class$);
			$nc($System::out)->println("\nSetting default authenticator\n"_s);
			$1Authenticator::setDefault(ca);
			$nc($System::out)->println("Testing default client (HttpClient.newHttpClient()), no authenticator"_s);
			test($($HttpClient::newHttpClient()), ca, uri, 3, $IOException::class$);
			$nc($System::out)->println("Testing with client #4, no authenticator"_s);
			test(client3, ca, uri, 4, $IOException::class$);
			$var($String, oldpwd, sa->passwd);
			$set(sa, passwd, "changed"_s);
			$nc($System::out)->println("\nChanged server password\n"_s);
			$set(sa, passwd, "changed"_s);
			$nc($System::out)->println("\nChanged server password\n"_s);
			$nc($System::out)->println($$str({"Testing with client #1, Authenticator #1 (count="_s, $$str($nc(ca->count)->get()), ")"_s}));
			test(client1, ca, uri, 7, $IOException::class$);
			$nc($System::out)->println($$str({"Testing again with client #1, Authenticator #1 (count="_s, $$str($nc(ca->count)->get()), ")"_s}));
			test(client1, ca, uri, 10, $IOException::class$);
			$nc($System::out)->println($$str({"Testing with client #2, Authenticator #1 (count="_s, $$str($nc(ca->count)->get()), ")"_s}));
			test(client2, ca, uri, 14, $IOException::class$);
			$nc($System::out)->println($$str({"\nRestored server password (count="_s, $$str($nc(ca->count)->get()), ")\n"_s}));
			$set(sa, passwd, oldpwd);
			int32_t count = $nc(ca->count)->get();
			$nc($System::out)->println("Testing with client #1, Authenticator #1"_s);
			test(client1, ca, uri, count + 1, nullptr);
			$nc($System::out)->println("Testing again with client #1, Authenticator #1"_s);
			test(client1, ca, uri, count + 1, nullptr);
			$nc($System::out)->println("Testing with client #2, Authenticator #1"_s);
			test(client2, ca, uri, count + 2, nullptr);
			$set(sa, passwd, ($set(ca, passwd, "changed#2"_s)));
			$nc($System::out)->println("\nChanged password on both sides\n"_s);
			$nc($System::out)->println("Testing with client #1, Authenticator #1"_s);
			test(client1, ca, uri, count + 3, nullptr);
			$nc($System::out)->println("Testing again with client #1, Authenticator #1"_s);
			test(client1, ca, uri, count + 3, nullptr);
			$nc($System::out)->println("Testing with client #2, Authenticator #1"_s);
			test(client2, ca, uri, count + 4, nullptr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
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

void MultiAuthTest::test($HttpClient* client, $MultiAuthTest$ClientAuth* ca, $URI* uri, int32_t expectCount, $Class* expectFailure) {
	$init(MultiAuthTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest, req, $nc($($nc($($HttpRequest::newBuilder(uri)))->GET()))->build());
	$var($HttpResponse, resp, nullptr);
	try {
		$assign(resp, $nc(client)->send(req, $($HttpResponse$BodyHandlers::ofString())));
		bool var$0 = $nc(resp)->statusCode() == 200;
		MultiAuthTest::ok = var$0 && $nc($of($(resp->body())))->equals(MultiAuthTest::RESPONSE);
		bool var$1 = resp->statusCode() == 401;
		if (var$1 || resp->statusCode() == 407) {
			$throwNew($IOException, $($String::valueOf($of(resp))));
		}
		if (expectFailure != nullptr) {
			$throwNew($RuntimeException, $$str({"Expected "_s, $(expectFailure->getName()), " not raised"_s}));
		}
	} catch ($IOException& io) {
		if (expectFailure != nullptr) {
			if (expectFailure->isInstance(io)) {
				$nc($System::out)->println($$str({"Got expected exception: "_s, io}));
				return;
			}
		}
		$throw(io);
	}
	if (!MultiAuthTest::ok || $nc($nc(ca)->count)->get() != expectCount) {
		$throwNew($RuntimeException, $$str({"Test failed: ok="_s, $$str(MultiAuthTest::ok), " count="_s, $$str($nc(ca->count)->get()), " (expected="_s, $$str(expectCount), ")"_s}));
	}
	$assign(resp, $nc(client)->send(req, $($HttpResponse$BodyHandlers::ofString())));
	bool var$2 = $nc(resp)->statusCode() == 200;
	MultiAuthTest::ok = var$2 && $nc($of($(resp->body())))->equals(MultiAuthTest::RESPONSE);
	if (!MultiAuthTest::ok || $nc($nc(ca)->count)->get() != expectCount) {
		$throwNew($RuntimeException, $$str({"Test failed: ok="_s, $$str(MultiAuthTest::ok), " count="_s, $$str($nc(ca->count)->get()), " (expected="_s, $$str(expectCount), ")"_s}));
	}
	$assign(req, $nc($($nc($($HttpRequest::newBuilder(uri)))->POST($($HttpRequest$BodyPublishers::ofString(MultiAuthTest::POST_BODY)))))->build());
	$assign(resp, client->send(req, $($HttpResponse$BodyHandlers::ofString())));
	MultiAuthTest::ok = resp->statusCode() == 200;
	if (!MultiAuthTest::ok || $nc($nc(ca)->count)->get() != expectCount) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void clinit$MultiAuthTest($Class* class$) {
	$assignStatic(MultiAuthTest::RESPONSE, "Hello world"_s);
	$assignStatic(MultiAuthTest::POST_BODY, $str({"This is the POST body "_s, $($UUID::randomUUID())}));
}

MultiAuthTest::MultiAuthTest() {
}

$Class* MultiAuthTest::load$($String* name, bool initialize) {
	$loadClass(MultiAuthTest, name, initialize, &_MultiAuthTest_ClassInfo_, clinit$MultiAuthTest, allocate$MultiAuthTest);
	return class$;
}

$Class* MultiAuthTest::class$ = nullptr;