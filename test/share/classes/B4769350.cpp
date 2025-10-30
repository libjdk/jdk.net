#include <B4769350.h>

#include <B4769350$Client.h>
#include <B4769350$MyAuthenticator.h>
#include <B4769350$Server.h>
#include <java/io/InputStream.h>
#include <java/net/Authenticator.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProxySelector.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $B4769350$Client = ::B4769350$Client;
using $B4769350$MyAuthenticator = ::B4769350$MyAuthenticator;
using $B4769350$Server = ::B4769350$Server;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Authenticator = ::java::net::Authenticator;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;

$FieldInfo _B4769350_FieldInfo_[] = {
	{"count", "I", nullptr, $STATIC, $staticField(B4769350, count)},
	{"error", "Z", nullptr, $STATIC, $staticField(B4769350, error)},
	{"server", "LB4769350$Server;", nullptr, $STATIC, $staticField(B4769350, server)},
	{"auth", "LB4769350$MyAuthenticator;", nullptr, $STATIC, $staticField(B4769350, auth)},
	{"redirects", "I", nullptr, $STATIC, $staticField(B4769350, redirects)},
	{"c1", "LB4769350$Client;", nullptr, $STATIC, $staticField(B4769350, c1)},
	{"c2", "LB4769350$Client;", nullptr, $STATIC, $staticField(B4769350, c2)},
	{"c3", "LB4769350$Client;", nullptr, $STATIC, $staticField(B4769350, c3)},
	{"c4", "LB4769350$Client;", nullptr, $STATIC, $staticField(B4769350, c4)},
	{"c5", "LB4769350$Client;", nullptr, $STATIC, $staticField(B4769350, c5)},
	{"c6", "LB4769350$Client;", nullptr, $STATIC, $staticField(B4769350, c6)},
	{"c7", "LB4769350$Client;", nullptr, $STATIC, $staticField(B4769350, c7)},
	{"c8", "LB4769350$Client;", nullptr, $STATIC, $staticField(B4769350, c8)},
	{"c9", "LB4769350$Client;", nullptr, $STATIC, $staticField(B4769350, c9)},
	{"t2condlatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $STATIC, $staticField(B4769350, t2condlatch)},
	{"t3cond1", "Ljava/util/concurrent/CountDownLatch;", nullptr, $STATIC, $staticField(B4769350, t3cond1)},
	{"t1Cond1", "Ljava/util/concurrent/CyclicBarrier;", nullptr, $STATIC, $staticField(B4769350, t1Cond1)},
	{}
};

$MethodInfo _B4769350_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B4769350::*)()>(&B4769350::init$))},
	{"authority", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&B4769350::authority))},
	{"doProxyTests", "(Ljava/lang/String;LB4769350$Server;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$B4769350$Server*)>(&B4769350::doProxyTests)), "java.lang.Exception"},
	{"doServerTests", "(Ljava/lang/String;LB4769350$Server;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$B4769350$Server*)>(&B4769350::doServerTests)), "java.lang.Exception"},
	{"except", "(Ljava/lang/String;LB4769350$Server;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$B4769350$Server*)>(&B4769350::except))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B4769350::main)), "java.lang.Exception"},
	{"read", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $method(static_cast<void(*)($InputStream*)>(&B4769350::read)), "java.io.IOException"},
	{"runTest", "(Z)V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _B4769350_InnerClassesInfo_[] = {
	{"B4769350$MyAuthenticator", "B4769350", "MyAuthenticator", $STATIC},
	{"B4769350$AuthenticationHandler", "B4769350", "AuthenticationHandler", $STATIC},
	{"B4769350$Server", "B4769350", "Server", 0},
	{"B4769350$Client", "B4769350", "Client", $STATIC},
	{}
};

$ClassInfo _B4769350_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B4769350",
	"java.lang.Object",
	nullptr,
	_B4769350_FieldInfo_,
	_B4769350_MethodInfo_,
	nullptr,
	nullptr,
	_B4769350_InnerClassesInfo_,
	nullptr,
	nullptr,
	"B4769350$MyAuthenticator,B4769350$AuthenticationHandler,B4769350$Server,B4769350$Server$AuthenticationHandlerT3bc,B4769350$Server$AuthenticationHandlerT3a,B4769350$Server$AuthenticationHandlerT2b,B4769350$Server$AuthenticationHandlerT2a,B4769350$Server$AuthenticationHandlerT1d,B4769350$Server$AuthenticationHandlerT1c,B4769350$Server$AuthenticationHandlerT1b,B4769350$Server$AuthenticationHandlerT1a,B4769350$Client"
};

$Object* allocate$B4769350($Class* clazz) {
	return $of($alloc(B4769350));
}

int32_t B4769350::count = 0;
bool B4769350::error = false;
$B4769350$Server* B4769350::server = nullptr;
$B4769350$MyAuthenticator* B4769350::auth = nullptr;
int32_t B4769350::redirects = 0;
$B4769350$Client* B4769350::c1 = nullptr;
$B4769350$Client* B4769350::c2 = nullptr;
$B4769350$Client* B4769350::c3 = nullptr;
$B4769350$Client* B4769350::c4 = nullptr;
$B4769350$Client* B4769350::c5 = nullptr;
$B4769350$Client* B4769350::c6 = nullptr;
$B4769350$Client* B4769350::c7 = nullptr;
$B4769350$Client* B4769350::c8 = nullptr;
$B4769350$Client* B4769350::c9 = nullptr;
$CountDownLatch* B4769350::t2condlatch = nullptr;
$CountDownLatch* B4769350::t3cond1 = nullptr;
$CyclicBarrier* B4769350::t1Cond1 = nullptr;

void B4769350::init$() {
}

void B4769350::read($InputStream* is) {
	$init(B4769350);
	while ($nc(is)->read() != -1) {
	}
}

void B4769350::doServerTests($String* authority, $B4769350$Server* server) {
	$init(B4769350);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("Doing Server tests"_s);
	$nc($System::out)->println("T1"_s);
	$assignStatic(B4769350::c1, $new($B4769350$Client, authority, "/test/realm1/t1a"_s, false));
	$assignStatic(B4769350::c2, $new($B4769350$Client, authority, "/test/realm2/t1b"_s, false));
	$assignStatic(B4769350::c3, $new($B4769350$Client, authority, "/test/realm1/t1c"_s, false));
	$assignStatic(B4769350::c4, $new($B4769350$Client, authority, "/test/realm2/t1d"_s, false));
	$nc(B4769350::c1)->start();
	$nc(B4769350::c2)->start();
	$nc(B4769350::t1Cond1)->await();
	$nc(B4769350::c3)->start();
	$nc(B4769350::c4)->start();
	$nc(B4769350::c1)->join();
	$nc(B4769350::c2)->join();
	$nc(B4769350::c3)->join();
	$nc(B4769350::c4)->join();
	int32_t f = $nc(B4769350::auth)->getCount();
	if (f != 2) {
		except($$str({"Authenticator was called "_s, $$str(f), " times. Should be 2"_s}), server);
	}
	if (B4769350::error) {
		except("error occurred"_s, server);
	}
	$nc(B4769350::auth)->resetCount();
	$nc($System::out)->println("T2"_s);
	$assignStatic(B4769350::c5, $new($B4769350$Client, authority, "/test/realm3/t2a"_s, true));
	$assignStatic(B4769350::c6, $new($B4769350$Client, authority, "/test/realm3/t2b"_s, false));
	$assignStatic(B4769350::t2condlatch, $new($CountDownLatch, 1));
	$nc(B4769350::c5)->start();
	$nc(B4769350::t2condlatch)->await();
	$nc(B4769350::c6)->start();
	$nc(B4769350::c5)->join();
	$nc(B4769350::c6)->join();
	f = $nc(B4769350::auth)->getCount();
	if (f != B4769350::redirects + 1) {
		except($$str({"Authenticator was called "_s, $$str(f), " times. Should be: "_s, $$str(B4769350::redirects), $$str(1)}), server);
	}
	if (B4769350::error) {
		except("error occurred"_s, server);
	}
}

void B4769350::doProxyTests($String* authority, $B4769350$Server* server) {
	$init(B4769350);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("Doing Proxy tests"_s);
	$assignStatic(B4769350::c7, $new($B4769350$Client, authority, "/test/realm4/t3a"_s, false));
	$assignStatic(B4769350::c8, $new($B4769350$Client, authority, "/test/realm4/t3b"_s, false));
	$assignStatic(B4769350::c9, $new($B4769350$Client, authority, "/test/realm4/t3c"_s, false));
	$assignStatic(B4769350::t3cond1, $new($CountDownLatch, 1));
	$nc(B4769350::c7)->start();
	$nc(B4769350::t3cond1)->await();
	$nc(B4769350::c8)->start();
	$nc(B4769350::c9)->start();
	$nc(B4769350::c7)->join();
	$nc(B4769350::c8)->join();
	$nc(B4769350::c9)->join();
	int32_t f = $nc(B4769350::auth)->getCount();
	if (f != 2) {
		except($$str({"Authenticator was called "_s, $$str(f), " times. Should be: "_s, $$str(2)}), server);
	}
	if (B4769350::error) {
		except("error occurred"_s, server);
	}
}

void B4769350::main($StringArray* args) {
	$init(B4769350);
	$$new(B4769350)->runTest($nc($nc(args)->get(0))->equals("proxy"_s));
}

void B4769350::runTest(bool proxy) {
	$useLocalCurrentObjectStackCache();
	$System::setProperty("http.maxRedirects"_s, $($Integer::toString(B4769350::redirects)));
	$System::setProperty("http.auth.serializeRequests"_s, "true"_s);
	$Authenticator::setDefault(B4769350::auth);
	{
		$var($B4769350$Server, server, $new($B4769350$Server, this));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					server->startServer();
					$nc($System::out)->println($$str({"Server: listening on port: "_s, $$str(server->getPort())}));
					if (proxy) {
						$System::setProperty("http.proxyHost"_s, $($nc($($InetAddress::getLoopbackAddress()))->getHostAddress()));
						$System::setProperty("http.proxyPort"_s, $($Integer::toString(server->getPort())));
						doProxyTests("www.foo.com"_s, server);
					} else {
						$ProxySelector::setDefault($($ProxySelector::of(nullptr)));
						doServerTests($(authority(server->getPort())), server);
					}
				} catch ($Throwable& t$) {
					try {
						server->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				server->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$String* B4769350::authority(int32_t port) {
	$init(B4769350);
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
	$var($String, hoststr, $nc(loopback)->getHostAddress());
	if ($nc(hoststr)->indexOf((int32_t)u':') > -1) {
		$assign(hoststr, $str({"["_s, hoststr, "]"_s}));
	}
	return $str({hoststr, ":"_s, $$str(port)});
}

void B4769350::except($String* s, $B4769350$Server* server) {
	$init(B4769350);
	$nc(server)->close();
	$throwNew($RuntimeException, s);
}

void clinit$B4769350($Class* class$) {
	B4769350::count = 0;
	B4769350::error = false;
	$assignStatic(B4769350::auth, $new($B4769350$MyAuthenticator));
	B4769350::redirects = 4;
}

B4769350::B4769350() {
}

$Class* B4769350::load$($String* name, bool initialize) {
	$loadClass(B4769350, name, initialize, &_B4769350_ClassInfo_, clinit$B4769350, allocate$B4769350);
	return class$;
}

$Class* B4769350::class$ = nullptr;