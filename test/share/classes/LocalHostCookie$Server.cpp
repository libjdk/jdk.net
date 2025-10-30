#include <LocalHostCookie$Server.h>

#include <LocalHostCookie$MyCookieHandler.h>
#include <LocalHostCookie.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/io/IOException.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $LocalHostCookie = ::LocalHostCookie;
using $LocalHostCookie$MyCookieHandler = ::LocalHostCookie$MyCookieHandler;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;

$FieldInfo _LocalHostCookie$Server_FieldInfo_[] = {
	{"this$0", "LLocalHostCookie;", nullptr, $FINAL | $SYNTHETIC, $field(LocalHostCookie$Server, this$0)},
	{"server", "Lcom/sun/net/httpserver/HttpServer;", nullptr, 0, $field(LocalHostCookie$Server, server)},
	{}
};

$MethodInfo _LocalHostCookie$Server_MethodInfo_[] = {
	{"<init>", "(LLocalHostCookie;)V", nullptr, 0, $method(static_cast<void(LocalHostCookie$Server::*)($LocalHostCookie*)>(&LocalHostCookie$Server::init$))},
	{"getPort", "()I", nullptr, $PUBLIC},
	{"startServer", "()V", nullptr, $PUBLIC},
	{"stopServer", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LocalHostCookie$Server_InnerClassesInfo_[] = {
	{"LocalHostCookie$Server", "LocalHostCookie", "Server", 0},
	{}
};

$ClassInfo _LocalHostCookie$Server_ClassInfo_ = {
	$ACC_SUPER,
	"LocalHostCookie$Server",
	"java.lang.Object",
	nullptr,
	_LocalHostCookie$Server_FieldInfo_,
	_LocalHostCookie$Server_MethodInfo_,
	nullptr,
	nullptr,
	_LocalHostCookie$Server_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LocalHostCookie"
};

$Object* allocate$LocalHostCookie$Server($Class* clazz) {
	return $of($alloc(LocalHostCookie$Server));
}

void LocalHostCookie$Server::init$($LocalHostCookie* this$0) {
	$set(this, this$0, this$0);
}

void LocalHostCookie$Server::startServer() {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, 0));
	try {
		$set(this, server, $HttpServer::create(addr, 0));
	} catch ($IOException& ioe) {
		$throwNew($RuntimeException, "Server could not be created"_s);
	}
	$nc(this->server)->createContext("/"_s, $$new($LocalHostCookie$MyCookieHandler, this->this$0));
	$nc(this->server)->start();
}

int32_t LocalHostCookie$Server::getPort() {
	return $nc($($nc(this->server)->getAddress()))->getPort();
}

void LocalHostCookie$Server::stopServer() {
	if (this->server != nullptr) {
		$nc(this->server)->stop(0);
	}
}

LocalHostCookie$Server::LocalHostCookie$Server() {
}

$Class* LocalHostCookie$Server::load$($String* name, bool initialize) {
	$loadClass(LocalHostCookie$Server, name, initialize, &_LocalHostCookie$Server_ClassInfo_, allocate$LocalHostCookie$Server);
	return class$;
}

$Class* LocalHostCookie$Server::class$ = nullptr;