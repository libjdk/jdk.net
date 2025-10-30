#include <PlainProxyConnectionTest.h>

#include <PlainProxyConnectionTest$1.h>
#include <PlainProxyConnectionTest$CountingProxySelector.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Proxy$Type.h>
#include <java/net/Proxy.h>
#include <java/net/ProxySelector.h>
#include <java/net/SocketAddress.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef HTTP
#undef HTTP_1_1
#undef HTTP_2
#undef NO_PROXY
#undef PATH
#undef RESPONSE
#undef UTF_8

using $PlainProxyConnectionTest$1 = ::PlainProxyConnectionTest$1;
using $PlainProxyConnectionTest$CountingProxySelector = ::PlainProxyConnectionTest$CountingProxySelector;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Proxy = ::java::net::Proxy;
using $Proxy$Type = ::java::net::Proxy$Type;
using $ProxySelector = ::java::net::ProxySelector;
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

$FieldInfo _PlainProxyConnectionTest_FieldInfo_[] = {
	{"RESPONSE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PlainProxyConnectionTest, RESPONSE)},
	{"PATH", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PlainProxyConnectionTest, PATH)},
	{"connections", "Ljava/util/concurrent/ConcurrentLinkedQueue;", "Ljava/util/concurrent/ConcurrentLinkedQueue<Ljava/net/InetSocketAddress;>;", $STATIC | $FINAL, $staticField(PlainProxyConnectionTest, connections)},
	{}
};

$MethodInfo _PlainProxyConnectionTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlainProxyConnectionTest::*)()>(&PlainProxyConnectionTest::init$))},
	{"createHttpsServer", "()Lcom/sun/net/httpserver/HttpServer;", nullptr, $STATIC, $method(static_cast<$HttpServer*(*)()>(&PlainProxyConnectionTest::createHttpsServer)), "java.io.IOException,java.security.NoSuchAlgorithmException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PlainProxyConnectionTest::main)), "java.io.IOException,java.net.URISyntaxException,java.security.NoSuchAlgorithmException,java.lang.InterruptedException"},
	{"performSanityTest", "(Lcom/sun/net/httpserver/HttpServer;Ljava/net/URI;Ljava/net/URI;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($HttpServer*,$URI*,$URI*)>(&PlainProxyConnectionTest::performSanityTest)), "java.io.IOException"},
	{"test", "(Lcom/sun/net/httpserver/HttpServer;Ljava/net/http/HttpClient$Version;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($HttpServer*,$HttpClient$Version*)>(&PlainProxyConnectionTest::test)), "java.io.IOException,java.net.URISyntaxException,java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _PlainProxyConnectionTest_InnerClassesInfo_[] = {
	{"PlainProxyConnectionTest$CountingProxySelector", "PlainProxyConnectionTest", "CountingProxySelector", $STATIC},
	{"PlainProxyConnectionTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PlainProxyConnectionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PlainProxyConnectionTest",
	"java.lang.Object",
	nullptr,
	_PlainProxyConnectionTest_FieldInfo_,
	_PlainProxyConnectionTest_MethodInfo_,
	nullptr,
	nullptr,
	_PlainProxyConnectionTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"PlainProxyConnectionTest$CountingProxySelector,PlainProxyConnectionTest$1"
};

$Object* allocate$PlainProxyConnectionTest($Class* clazz) {
	return $of($alloc(PlainProxyConnectionTest));
}

$String* PlainProxyConnectionTest::RESPONSE = nullptr;
$String* PlainProxyConnectionTest::PATH = nullptr;
$ConcurrentLinkedQueue* PlainProxyConnectionTest::connections = nullptr;

void PlainProxyConnectionTest::init$() {
}

$HttpServer* PlainProxyConnectionTest::createHttpsServer() {
	$init(PlainProxyConnectionTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpServer, server, $HttpServer::create());
	$var($HttpContext, context, $nc(server)->createContext(PlainProxyConnectionTest::PATH));
	$nc(context)->setHandler($$new($PlainProxyConnectionTest$1));
	$var($InetSocketAddress, addr, $new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	server->bind(addr, 0);
	return server;
}

void PlainProxyConnectionTest::main($StringArray* args) {
	$init(PlainProxyConnectionTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpServer, server, createHttpsServer());
	$nc(server)->start();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($HttpClient$Version);
			test(server, $HttpClient$Version::HTTP_1_1);
			test(server, $HttpClient$Version::HTTP_2);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			server->stop(0);
			$nc($System::out)->println("Server stopped"_s);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void PlainProxyConnectionTest::performSanityTest($HttpServer* server, $URI* uri, $URI* proxiedURI) {
	$init(PlainProxyConnectionTest);
	$useLocalCurrentObjectStackCache();
	$nc(PlainProxyConnectionTest::connections)->clear();
	$nc($System::out)->println("Verifying communication with server"_s);
	{
		$init($Proxy);
		$var($InputStream, is, $nc($($nc($($nc(uri)->toURL()))->openConnection($Proxy::NO_PROXY)))->getInputStream());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$init($StandardCharsets);
					$var($String, resp, $new($String, $($nc(is)->readAllBytes()), $StandardCharsets::UTF_8));
					$nc($System::out)->println(resp);
					if (!$nc(PlainProxyConnectionTest::RESPONSE)->equals(resp)) {
						$throwNew($AssertionError, $of("Unexpected response from server"_s));
					}
				} catch ($Throwable& t$) {
					if (is != nullptr) {
						try {
							is->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (is != nullptr) {
					is->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$nc($System::out)->println("Communication with server OK"_s);
	int32_t count = $nc(PlainProxyConnectionTest::connections)->size();
	if (count != 1) {
		$nc($System::err)->println($$str({"Unexpected connection count: "_s, $$str(count)}));
		$nc($System::err)->println($$str({"Connections: "_s, PlainProxyConnectionTest::connections}));
		$throwNew($AssertionError, $of($$str({"Expected only one connection: "_s, PlainProxyConnectionTest::connections})));
	}
	{
		$var($Throwable, var$2, nullptr);
		try {
			$nc($System::out)->println("Pretending the server is a proxy..."_s);
			$init($Proxy$Type);
			$var($String, var$3, $nc($($nc($($nc(server)->getAddress()))->getAddress()))->getHostAddress());
			$var($Proxy, p, $new($Proxy, $Proxy$Type::HTTP, $($InetSocketAddress::createUnresolved(var$3, $nc($(server->getAddress()))->getPort()))));
			$nc($System::out)->println("Verifying communication with proxy"_s);
			$var($HttpURLConnection, conn, $cast($HttpURLConnection, $nc($($nc(proxiedURI)->toURL()))->openConnection(p)));
			{
				$var($InputStream, is, $nc(conn)->getInputStream());
				{
					$var($Throwable, var$4, nullptr);
					try {
						try {
							$init($StandardCharsets);
							$var($String, resp, $new($String, $($nc(is)->readAllBytes()), $StandardCharsets::UTF_8));
							$nc($System::out)->println(resp);
							if (!$nc(PlainProxyConnectionTest::RESPONSE)->equals(resp)) {
								$throwNew($AssertionError, $of("Unexpected response from proxy"_s));
							}
						} catch ($Throwable& t$) {
							if (is != nullptr) {
								try {
									is->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$5) {
						$assign(var$4, var$5);
					} /*finally*/ {
						if (is != nullptr) {
							is->close();
						}
					}
					if (var$4 != nullptr) {
						$throw(var$4);
					}
				}
			}
			count = $nc(PlainProxyConnectionTest::connections)->size();
			if (count != 2) {
				$nc($System::err)->println($$str({"Unexpected connection count: "_s, $$str(count)}));
				$nc($System::err)->println($$str({"Connections: "_s, PlainProxyConnectionTest::connections}));
				$throwNew($AssertionError, $of($$str({"Expected two connection: "_s, PlainProxyConnectionTest::connections})));
			}
			$nc($System::out)->println("Communication with proxy OK"_s);
		} catch ($Throwable& var$6) {
			$assign(var$2, var$6);
		} /*finally*/ {
			$nc(PlainProxyConnectionTest::connections)->clear();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

void PlainProxyConnectionTest::test($HttpServer* server, $HttpClient$Version* version) {
	$init(PlainProxyConnectionTest);
	$useLocalCurrentObjectStackCache();
	$nc(PlainProxyConnectionTest::connections)->clear();
	$nc($System::out)->println($$str({"\n===== Testing with "_s, version}));
	$nc($System::out)->println($$str({"Server is: "_s, $($nc($($nc(server)->getAddress()))->toString())}));
	$var($String, var$0, "http"_s);
	$var($String, var$1, $nc($($nc($($nc(server)->getAddress()))->getAddress()))->getHostAddress());
	$var($URI, uri, $new($URI, var$0, nullptr, var$1, $nc($(server->getAddress()))->getPort(), $$str({PlainProxyConnectionTest::PATH, "x"_s}), nullptr, nullptr));
	$var($URI, proxiedURI, $new($URI, $$str({"http://some.host.that.does.not.exist:4242"_s, PlainProxyConnectionTest::PATH, "x"_s})));
	performSanityTest(server, uri, proxiedURI);
	{
		$var($Throwable, var$2, nullptr);
		try {
			$nc(PlainProxyConnectionTest::connections)->clear();
			$nc($System::out)->println("\nReal test begins here."_s);
			$nc($System::out)->println($$str({"Setting up request with HttpClient for version: "_s, $($nc(version)->name())}));
			$var($String, var$3, $nc($($nc($($nc(server)->getAddress()))->getAddress()))->getHostAddress());
			$var($PlainProxyConnectionTest$CountingProxySelector, ps, $PlainProxyConnectionTest$CountingProxySelector::of($($InetSocketAddress::createUnresolved(var$3, $nc($(server->getAddress()))->getPort()))));
			$var($HttpClient, client, $nc($($nc($($nc($($HttpClient::newBuilder()))->version(version)))->proxy(ps)))->build());
			$var($HttpRequest, request, $nc($($nc($($nc($($HttpRequest::newBuilder()))->uri(proxiedURI)))->GET()))->build());
			$nc($System::out)->println($$str({"Sending request with HttpClient: "_s, request}));
			$var($HttpResponse, response, $nc(client)->send(request, $($HttpResponse$BodyHandlers::ofString())));
			$nc($System::out)->println("Got response"_s);
			$var($String, resp, $cast($String, $nc(response)->body()));
			$nc($System::out)->println($$str({"Received: "_s, resp}));
			if (!$nc(PlainProxyConnectionTest::RESPONSE)->equals(resp)) {
				$throwNew($AssertionError, $of("Unexpected response"_s));
			}
			if ($nc(ps)->count() > 1) {
				$throwNew($AssertionError, $of($$str({"CountingProxySelector. Expected 1, got "_s, $$str(ps->count())})));
			}
			int32_t count = $nc(PlainProxyConnectionTest::connections)->size();
			if (count != 1) {
				$nc($System::err)->println($$str({"Unexpected connection count: "_s, $$str(count)}));
				$nc($System::err)->println($$str({"Connections: "_s, PlainProxyConnectionTest::connections}));
				$throwNew($AssertionError, $of($$str({"Expected only one connection: "_s, PlainProxyConnectionTest::connections})));
			}
			for (int32_t i = 2; i < 5; ++i) {
				$nc($System::out)->println($$str({"Sending next request ("_s, $$str(i), ") with HttpClient: "_s, request}));
				$assign(response, client->send(request, $($HttpResponse$BodyHandlers::ofString())));
				$nc($System::out)->println("Got response"_s);
				$assign(resp, $cast($String, $nc(response)->body()));
				$nc($System::out)->println($$str({"Received: "_s, resp}));
				if (!$nc(PlainProxyConnectionTest::RESPONSE)->equals(resp)) {
					$throwNew($AssertionError, $of("Unexpected response"_s));
				}
				if ($nc(ps)->count() > i) {
					$throwNew($AssertionError, $of($$str({"CountingProxySelector. Expected "_s, $$str(i), ", got "_s, $$str(ps->count())})));
				}
				count = $nc(PlainProxyConnectionTest::connections)->size();
				if (count != i) {
					$nc($System::err)->println($$str({"Unexpected connection count: "_s, $$str(count)}));
					$nc($System::err)->println($$str({"Connections: "_s, PlainProxyConnectionTest::connections}));
					$throwNew($AssertionError, $of($$str({"Expected "_s, $$str(i), ": "_s, PlainProxyConnectionTest::connections})));
				}
			}
			$var($Set, remote, $cast($Set, $nc($($nc($($nc(PlainProxyConnectionTest::connections)->stream()))->distinct()))->collect($($Collectors::toSet()))));
			count = $nc(remote)->size();
			if (count != 1) {
				$nc($System::err)->println($$str({"Unexpected connection count: "_s, $$str(count)}));
				$nc($System::err)->println($$str({"Connections: "_s, remote}));
				$throwNew($AssertionError, $of($$str({"Expected only one connection: "_s, remote})));
			} else {
				$nc($System::out)->println($$str({"PASSED: Proxy received only one connection from: "_s, remote}));
			}
		} catch ($Throwable& var$4) {
			$assign(var$2, var$4);
		} /*finally*/ {
			$nc(PlainProxyConnectionTest::connections)->clear();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

void clinit$PlainProxyConnectionTest($Class* class$) {
	$assignStatic(PlainProxyConnectionTest::RESPONSE, "<html><body><p>Hello World!</body></html>"_s);
	$assignStatic(PlainProxyConnectionTest::PATH, "/foo/"_s);
	$assignStatic(PlainProxyConnectionTest::connections, $new($ConcurrentLinkedQueue));
}

PlainProxyConnectionTest::PlainProxyConnectionTest() {
}

$Class* PlainProxyConnectionTest::load$($String* name, bool initialize) {
	$loadClass(PlainProxyConnectionTest, name, initialize, &_PlainProxyConnectionTest_ClassInfo_, clinit$PlainProxyConnectionTest, allocate$PlainProxyConnectionTest);
	return class$;
}

$Class* PlainProxyConnectionTest::class$ = nullptr;