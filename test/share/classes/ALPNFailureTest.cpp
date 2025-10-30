#include <ALPNFailureTest.h>

#include <ALPNFailureTest$ReadOnlyServer.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/net/InetAddress.h>
#include <java/net/ProxySelector.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/net/http/HttpTimeoutException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/net/ServerSocketFactory.h>
#include <javax/net/ssl/SSLContext.h>
#include <jcpp.h>

#undef HTTP_1_1

using $ALPNFailureTest$ReadOnlyServer = ::ALPNFailureTest$ReadOnlyServer;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InetAddress = ::java::net::InetAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $HttpTimeoutException = ::java::net::http::HttpTimeoutException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ServerSocketFactory = ::javax::net::ServerSocketFactory;
using $SSLContext = ::javax::net::ssl::SSLContext;

$MethodInfo _ALPNFailureTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ALPNFailureTest::*)()>(&ALPNFailureTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ALPNFailureTest::main)), "java.lang.Exception"},
	{"test", "(Ljava/net/ServerSocket;Ljavax/net/ssl/SSLContext;Ljava/net/ProxySelector;[Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($ServerSocket*,$SSLContext*,$ProxySelector*,$StringArray*)>(&ALPNFailureTest::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ALPNFailureTest_InnerClassesInfo_[] = {
	{"ALPNFailureTest$ReadOnlyServer", "ALPNFailureTest", "ReadOnlyServer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ALPNFailureTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ALPNFailureTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ALPNFailureTest_MethodInfo_,
	nullptr,
	nullptr,
	_ALPNFailureTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ALPNFailureTest$ReadOnlyServer"
};

$Object* allocate$ALPNFailureTest($Class* clazz) {
	return $of($alloc(ALPNFailureTest));
}

void ALPNFailureTest::init$() {
}

void ALPNFailureTest::main($StringArray* args$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, args, args$renamed);
	if (args == nullptr || $nc(args)->length == 0) {
		$init($HttpClient$Version);
		$assign(args, $new($StringArray, {$($HttpClient$Version::HTTP_1_1->name())}));
	}
	$var($ServerSocket, socket, $nc($($ServerSocketFactory::getDefault()))->createServerSocket(0, 10, $($InetAddress::getLoopbackAddress())));
	test(socket, nullptr, nullptr, args);
}

void ALPNFailureTest::test($ServerSocket* socket, $SSLContext* context, $ProxySelector* ps, $StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("Tests a race condition in SSLTube/SSLFlowDelegate"_s);
	$nc($System::out)->println("This test will timeout if the ALPN CF is not completed when a \'Connection reset by peer\' exception is raised during the handshake - see 8217094."_s);
	$var($String, var$0, "https"_s);
	$var($String, var$1, $nc($($nc(socket)->getInetAddress()))->getHostAddress());
	$var($URI, uri, $new($URI, var$0, nullptr, var$1, socket->getLocalPort(), "/ReadOnlyServer/https_1_1/"_s, nullptr, nullptr));
	$var($HttpRequest, request1, $nc($($nc($($HttpRequest::newBuilder(uri)))->GET()))->build());
	$var($HttpRequest, request2, $nc($($nc($($HttpRequest::newBuilder(uri)))->POST($($HttpRequest$BodyPublishers::ofString("foo"_s)))))->build());
	$var($ALPNFailureTest$ReadOnlyServer, server, $new($ALPNFailureTest$ReadOnlyServer, socket));
	$var($Thread, serverThread, $new($Thread, static_cast<$Runnable*>(server), "ServerThread"_s));
	serverThread->start();
	{
		$var($Throwable, var$2, nullptr);
		try {
			{
				$var($StringArray, arr$, args);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, arg, arr$->get(i$));
					{
						$HttpClient$Version* version = $HttpClient$Version::valueOf(arg);
						$var($HttpClient$Builder, builder, $nc($($HttpClient::newBuilder()))->version(version));
						if (ps != nullptr) {
							$nc(builder)->proxy(ps);
						}
						if (context != nullptr) {
							$nc(builder)->sslContext(context);
						}
						$var($HttpClient, client, $nc(builder)->build());
						{
							$var($Iterator, i$, $nc($($List::of(request1, request2)))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($HttpRequest, request, $cast($HttpRequest, i$->next()));
								{
									$var($String, var$4, $$str({"Server is "_s, $($nc(socket)->getLocalSocketAddress()), ", Version is "_s, version, ", Method is "_s}));
									$var($String, var$3, $$concat(var$4, $($nc(request)->method())));
									$nc($System::out)->println($$concat(var$3, (ps == nullptr ? ", no proxy"_s : ($$str({", Proxy is "_s, $($nc(ps)->select($(request->uri())))})))));
									try {
										$var($HttpResponse, resp, $nc(client)->send(request, $($HttpResponse$BodyHandlers::ofString())));
										$throwNew($AssertionError, $of($$str({"Client should not have received any response: "_s, resp})));
									} catch ($HttpTimeoutException& x) {
										$nc($System::out)->println($$str({"Unexpected "_s, x}));
										x->printStackTrace();
										$throwNew($AssertionError, $$str({"Unexpected exception "_s, x}), x);
									} catch ($Exception& x) {
										$nc($System::err)->println($$str({"Client got expected exception: "_s, x}));
										x->printStackTrace($System::out);
									}
								}
							}
						}
					}
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$2, var$5);
		} /*finally*/ {
			server->close();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

ALPNFailureTest::ALPNFailureTest() {
}

$Class* ALPNFailureTest::load$($String* name, bool initialize) {
	$loadClass(ALPNFailureTest, name, initialize, &_ALPNFailureTest_ClassInfo_, allocate$ALPNFailureTest);
	return class$;
}

$Class* ALPNFailureTest::class$ = nullptr;