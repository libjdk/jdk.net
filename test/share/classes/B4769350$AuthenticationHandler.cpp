#include <B4769350$AuthenticationHandler.h>

#include <B4769350.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $B4769350 = ::B4769350;
using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$MethodInfo _B4769350$AuthenticationHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(B4769350$AuthenticationHandler::*)()>(&B4769350$AuthenticationHandler::init$))},
	{"errorReply", "(Lcom/sun/net/httpserver/HttpExchange;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($HttpExchange*,$String*)>(&B4769350$AuthenticationHandler::errorReply)), "java.io.IOException"},
	{"okReply", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $STATIC, $method(static_cast<void(*)($HttpExchange*)>(&B4769350$AuthenticationHandler::okReply)), "java.io.IOException"},
	{"proxyReply", "(Lcom/sun/net/httpserver/HttpExchange;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($HttpExchange*,$String*)>(&B4769350$AuthenticationHandler::proxyReply)), "java.io.IOException"},
	{}
};

$InnerClassInfo _B4769350$AuthenticationHandler_InnerClassesInfo_[] = {
	{"B4769350$AuthenticationHandler", "B4769350", "AuthenticationHandler", $STATIC},
	{}
};

$ClassInfo _B4769350$AuthenticationHandler_ClassInfo_ = {
	$ACC_SUPER,
	"B4769350$AuthenticationHandler",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B4769350$AuthenticationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_B4769350$AuthenticationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B4769350"
};

$Object* allocate$B4769350$AuthenticationHandler($Class* clazz) {
	return $of($alloc(B4769350$AuthenticationHandler));
}

void B4769350$AuthenticationHandler::init$() {
}

void B4769350$AuthenticationHandler::errorReply($HttpExchange* exchange, $String* reply) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(exchange)->getResponseHeaders()))->add("Connection"_s, "close"_s);
	$nc($(exchange->getResponseHeaders()))->add("WWW-Authenticate"_s, reply);
	exchange->sendResponseHeaders(401, 0);
	exchange->close();
}

void B4769350$AuthenticationHandler::proxyReply($HttpExchange* exchange, $String* reply) {
	$nc($($nc(exchange)->getResponseHeaders()))->add("Proxy-Authenticate"_s, reply);
	exchange->sendResponseHeaders(407, 0);
}

void B4769350$AuthenticationHandler::okReply($HttpExchange* exchange) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(exchange)->getResponseHeaders()))->add("Connection"_s, "close"_s);
	$var($String, response, "Hello ."_s);
	exchange->sendResponseHeaders(200, $(response->getBytes())->length);
	{
		$var($OutputStream, os, exchange->getResponseBody());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(os)->write($(response->getBytes()));
				} catch ($Throwable& t$) {
					if (os != nullptr) {
						try {
							os->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (os != nullptr) {
					os->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	exchange->close();
}

B4769350$AuthenticationHandler::B4769350$AuthenticationHandler() {
}

$Class* B4769350$AuthenticationHandler::load$($String* name, bool initialize) {
	$loadClass(B4769350$AuthenticationHandler, name, initialize, &_B4769350$AuthenticationHandler_ClassInfo_, allocate$B4769350$AuthenticationHandler);
	return class$;
}

$Class* B4769350$AuthenticationHandler::class$ = nullptr;