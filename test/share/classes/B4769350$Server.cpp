#include <B4769350$Server.h>

#include <B4769350$Server$AuthenticationHandlerT1a.h>
#include <B4769350$Server$AuthenticationHandlerT1b.h>
#include <B4769350$Server$AuthenticationHandlerT1c.h>
#include <B4769350$Server$AuthenticationHandlerT1d.h>
#include <B4769350$Server$AuthenticationHandlerT2a.h>
#include <B4769350$Server$AuthenticationHandlerT2b.h>
#include <B4769350$Server$AuthenticationHandlerT3a.h>
#include <B4769350$Server$AuthenticationHandlerT3bc.h>
#include <B4769350.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/io/IOException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/util/List.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $B4769350 = ::B4769350;
using $B4769350$Server$AuthenticationHandlerT1a = ::B4769350$Server$AuthenticationHandlerT1a;
using $B4769350$Server$AuthenticationHandlerT1b = ::B4769350$Server$AuthenticationHandlerT1b;
using $B4769350$Server$AuthenticationHandlerT1c = ::B4769350$Server$AuthenticationHandlerT1c;
using $B4769350$Server$AuthenticationHandlerT1d = ::B4769350$Server$AuthenticationHandlerT1d;
using $B4769350$Server$AuthenticationHandlerT2a = ::B4769350$Server$AuthenticationHandlerT2a;
using $B4769350$Server$AuthenticationHandlerT2b = ::B4769350$Server$AuthenticationHandlerT2b;
using $B4769350$Server$AuthenticationHandlerT3a = ::B4769350$Server$AuthenticationHandlerT3a;
using $B4769350$Server$AuthenticationHandlerT3bc = ::B4769350$Server$AuthenticationHandlerT3bc;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $IOException = ::java::io::IOException;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $List = ::java::util::List;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;

$FieldInfo _B4769350$Server_FieldInfo_[] = {
	{"this$0", "LB4769350;", nullptr, $FINAL | $SYNTHETIC, $field(B4769350$Server, this$0)},
	{"server", "Lcom/sun/net/httpserver/HttpServer;", nullptr, 0, $field(B4769350$Server, server)},
	{"executor", "Ljava/util/concurrent/Executor;", nullptr, 0, $field(B4769350$Server, executor)},
	{}
};

$MethodInfo _B4769350$Server_MethodInfo_[] = {
	{"<init>", "(LB4769350;)V", nullptr, 0, $method(static_cast<void(B4769350$Server::*)($B4769350*)>(&B4769350$Server::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"getAddress", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPort", "()I", nullptr, $PUBLIC},
	{"startServer", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _B4769350$Server_InnerClassesInfo_[] = {
	{"B4769350$Server", "B4769350", "Server", 0},
	{"B4769350$Server$AuthenticationHandlerT3bc", "B4769350$Server", "AuthenticationHandlerT3bc", 0},
	{"B4769350$Server$AuthenticationHandlerT3a", "B4769350$Server", "AuthenticationHandlerT3a", 0},
	{"B4769350$Server$AuthenticationHandlerT2b", "B4769350$Server", "AuthenticationHandlerT2b", 0},
	{"B4769350$Server$AuthenticationHandlerT2a", "B4769350$Server", "AuthenticationHandlerT2a", 0},
	{"B4769350$Server$AuthenticationHandlerT1d", "B4769350$Server", "AuthenticationHandlerT1d", 0},
	{"B4769350$Server$AuthenticationHandlerT1c", "B4769350$Server", "AuthenticationHandlerT1c", 0},
	{"B4769350$Server$AuthenticationHandlerT1b", "B4769350$Server", "AuthenticationHandlerT1b", 0},
	{"B4769350$Server$AuthenticationHandlerT1a", "B4769350$Server", "AuthenticationHandlerT1a", 0},
	{}
};

$ClassInfo _B4769350$Server_ClassInfo_ = {
	$ACC_SUPER,
	"B4769350$Server",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	_B4769350$Server_FieldInfo_,
	_B4769350$Server_MethodInfo_,
	nullptr,
	nullptr,
	_B4769350$Server_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B4769350"
};

$Object* allocate$B4769350$Server($Class* clazz) {
	return $of($alloc(B4769350$Server));
}

void B4769350$Server::init$($B4769350* this$0) {
	$set(this, this$0, this$0);
}

$String* B4769350$Server::getAddress() {
	return $nc($($nc(this->server)->getAddress()))->getHostName();
}

void B4769350$Server::startServer() {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
	$var($InetSocketAddress, addr, $new($InetSocketAddress, loopback, 0));
	try {
		$set(this, server, $HttpServer::create(addr, 0));
	} catch ($IOException& ioe) {
		$throwNew($RuntimeException, "Server could not be created"_s);
	}
	$set(this, executor, $Executors::newFixedThreadPool(10));
	$nc(this->server)->setExecutor(this->executor);
	$nc(this->server)->createContext("/test/realm1/t1a"_s, $$new($B4769350$Server$AuthenticationHandlerT1a, this));
	$nc(this->server)->createContext("/test/realm2/t1b"_s, $$new($B4769350$Server$AuthenticationHandlerT1b, this));
	$nc(this->server)->createContext("/test/realm1/t1c"_s, $$new($B4769350$Server$AuthenticationHandlerT1c, this));
	$nc(this->server)->createContext("/test/realm2/t1d"_s, $$new($B4769350$Server$AuthenticationHandlerT1d, this));
	$nc(this->server)->createContext("/test/realm3/t2a"_s, $$new($B4769350$Server$AuthenticationHandlerT2a, this));
	$nc(this->server)->createContext("/test/realm3/t2b"_s, $$new($B4769350$Server$AuthenticationHandlerT2b, this));
	$nc(this->server)->createContext("/test/realm4/t3a"_s, $$new($B4769350$Server$AuthenticationHandlerT3a, this));
	$nc(this->server)->createContext("/test/realm4/t3b"_s, $$new($B4769350$Server$AuthenticationHandlerT3bc, this));
	$nc(this->server)->createContext("/test/realm4/t3c"_s, $$new($B4769350$Server$AuthenticationHandlerT3bc, this));
	$init($B4769350);
	$assignStatic($B4769350::t1Cond1, $new($CyclicBarrier, 3));
	$nc(this->server)->start();
}

int32_t B4769350$Server::getPort() {
	return $nc($($nc(this->server)->getAddress()))->getPort();
}

void B4769350$Server::close() {
	if (this->executor != nullptr) {
		$nc(($cast($ExecutorService, this->executor)))->shutdownNow();
	}
	if (this->server != nullptr) {
		$nc(this->server)->stop(0);
	}
}

B4769350$Server::B4769350$Server() {
}

$Class* B4769350$Server::load$($String* name, bool initialize) {
	$loadClass(B4769350$Server, name, initialize, &_B4769350$Server_ClassInfo_, allocate$B4769350$Server);
	return class$;
}

$Class* B4769350$Server::class$ = nullptr;