#include <B4962064.h>

#include <B4962064$MyAuthenticator.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/net/Authenticator.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $B4962064$MyAuthenticator = ::B4962064$MyAuthenticator;
using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Authenticator = ::java::net::Authenticator;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;

$FieldInfo _B4962064_FieldInfo_[] = {
	{"count", "I", nullptr, $STATIC, $staticField(B4962064, count)},
	{"server", "Lcom/sun/net/httpserver/HttpServer;", nullptr, $STATIC, $staticField(B4962064, server)},
	{"urlsave", "Ljava/net/URL;", nullptr, $STATIC, $staticField(B4962064, urlsave)},
	{}
};

$MethodInfo _B4962064_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B4962064::*)()>(&B4962064::init$))},
	{"client", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&B4962064::client)), "java.lang.Exception"},
	{"except", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&B4962064::except))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B4962064::main)), "java.lang.Exception"},
	{"read", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $method(static_cast<void(*)($InputStream*)>(&B4962064::read)), "java.io.IOException"},
	{}
};

$InnerClassInfo _B4962064_InnerClassesInfo_[] = {
	{"B4962064$MyAuthenticator", "B4962064", "MyAuthenticator", $STATIC},
	{}
};

$ClassInfo _B4962064_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B4962064",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_B4962064_FieldInfo_,
	_B4962064_MethodInfo_,
	nullptr,
	nullptr,
	_B4962064_InnerClassesInfo_,
	nullptr,
	nullptr,
	"B4962064$MyAuthenticator"
};

$Object* allocate$B4962064($Class* clazz) {
	return $of($alloc(B4962064));
}

int32_t B4962064::count = 0;
$HttpServer* B4962064::server = nullptr;
$URL* B4962064::urlsave = nullptr;

void B4962064::init$() {
}

void B4962064::handle($HttpExchange* req) {
	$useLocalCurrentObjectStackCache();
	try {
		switch (B4962064::count) {
		case 0:
			{
				$nc($($nc(req)->getResponseHeaders()))->set("Connection"_s, "close"_s);
				$nc($($nc(req)->getResponseHeaders()))->add("WWW-Authenticate"_s, "Basic realm=\"foo\""_s);
				$nc(req)->sendResponseHeaders(401, -1);
				break;
			}
		case 1:
			{}
		case 3:
			{
				$nc(req)->sendResponseHeaders(200, 0);
				{
					$var($PrintWriter, pw, $new($PrintWriter, $($nc(req)->getResponseBody())));
					{
						$var($Throwable, var$0, nullptr);
						try {
							try {
								pw->print("Hello ."_s);
							} catch ($Throwable& t$) {
								try {
									pw->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$1) {
							$assign(var$0, var$1);
						} /*finally*/ {
							pw->close();
						}
						if (var$0 != nullptr) {
							$throw(var$0);
						}
					}
				}
				break;
			}
		case 2:
			{
				$nc($($nc(req)->getResponseHeaders()))->set("Connection"_s, "close"_s);
				$nc($($nc(req)->getResponseHeaders()))->add("Proxy-Authenticate"_s, "Basic realm=\"foo\""_s);
				$nc(req)->sendResponseHeaders(407, -1);
				break;
			}
		}
		++B4962064::count;
	} catch ($IOException& e) {
		e->printStackTrace();
	}
}

void B4962064::read($InputStream* is) {
	$init(B4962064);
	int32_t c = 0;
	$nc($System::out)->println("reading"_s);
	while ((c = $nc(is)->read()) != -1) {
		$nc($System::out)->write(c);
	}
	$nc($System::out)->println(""_s);
	$nc($System::out)->println("finished reading"_s);
}

void B4962064::client($String* u) {
	$init(B4962064);
	$useLocalCurrentObjectStackCache();
	$var($URL, url, $new($URL, u));
	$nc($System::out)->println($$str({"client opening connection to: "_s, u}));
	$var($URLConnection, urlc, url->openConnection());
	$var($InputStream, is, $nc(urlc)->getInputStream());
	read(is);
	$nc(is)->close();
}

void B4962064::main($StringArray* args) {
	$init(B4962064);
	$useLocalCurrentObjectStackCache();
	$var(B4962064, b4962064, $new(B4962064));
	try {
		$var($InetAddress, address, $InetAddress::getLoopbackAddress());
		$var($InetAddress, resolved, $InetAddress::getByName($($nc(address)->getHostName())));
		$var($String, var$2, $$str({"Lookup: "_s, address, " -> \""_s}));
		$var($String, var$1, $$concat(var$2, $($nc(address)->getHostName())));
		$var($String, var$0, $$concat(var$1, "\" -> "));
		$nc($System::out)->println($$concat(var$0, $(resolved)));
		$assignStatic(B4962064::server, $HttpServer::create($$new($InetSocketAddress, address, 0), 10));
		$nc(B4962064::server)->createContext("/"_s, b4962064);
		$nc(B4962064::server)->setExecutor($($Executors::newSingleThreadExecutor()));
		$nc(B4962064::server)->start();
		int32_t port = $nc($($nc(B4962064::server)->getAddress()))->getPort();
		$var($String, proxyHost, $nc(address)->equals(resolved) ? $nc(address)->getHostName() : address->getHostAddress());
		$System::setProperty("http.proxyHost"_s, proxyHost);
		$System::setProperty("http.proxyPort"_s, $($Integer::toString(port)));
		$var($B4962064$MyAuthenticator, auth, $new($B4962064$MyAuthenticator));
		$Authenticator::setDefault(auth);
		$nc($System::out)->println($$str({"Server started: listening on port: "_s, $$str(port)}));
		$var($String, s, $new($String, "http://foo.com/d1/d2/d3/foo.html"_s));
		$assignStatic(B4962064::urlsave, $new($URL, s));
		client(s);
		$assign(s, $new($String, "http://bar.com/dr/d3/foo.html"_s));
		$assignStatic(B4962064::urlsave, $new($URL, s));
		client(s);
	} catch ($Exception& e) {
		if (B4962064::server != nullptr) {
			$nc(B4962064::server)->stop(1);
		}
		$throw(e);
	}
	$nc(B4962064::server)->stop(1);
}

void B4962064::except($String* s) {
	$init(B4962064);
	$nc(B4962064::server)->stop(1);
	$throwNew($RuntimeException, s);
}

void clinit$B4962064($Class* class$) {
	B4962064::count = 0;
}

B4962064::B4962064() {
}

$Class* B4962064::load$($String* name, bool initialize) {
	$loadClass(B4962064, name, initialize, &_B4962064_ClassInfo_, clinit$B4962064, allocate$B4962064);
	return class$;
}

$Class* B4962064::class$ = nullptr;