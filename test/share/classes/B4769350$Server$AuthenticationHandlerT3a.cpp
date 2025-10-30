#include <B4769350$Server$AuthenticationHandlerT3a.h>

#include <B4769350$AuthenticationHandler.h>
#include <B4769350$Server.h>
#include <B4769350.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $B4769350 = ::B4769350;
using $B4769350$AuthenticationHandler = ::B4769350$AuthenticationHandler;
using $B4769350$Server = ::B4769350$Server;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _B4769350$Server$AuthenticationHandlerT3a_FieldInfo_[] = {
	{"this$1", "LB4769350$Server;", nullptr, $FINAL | $SYNTHETIC, $field(B4769350$Server$AuthenticationHandlerT3a, this$1)},
	{"count", "I", nullptr, $VOLATILE, $field(B4769350$Server$AuthenticationHandlerT3a, count)},
	{}
};

$MethodInfo _B4769350$Server$AuthenticationHandlerT3a_MethodInfo_[] = {
	{"<init>", "(LB4769350$Server;)V", nullptr, 0, $method(static_cast<void(B4769350$Server$AuthenticationHandlerT3a::*)($B4769350$Server*)>(&B4769350$Server$AuthenticationHandlerT3a::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _B4769350$Server$AuthenticationHandlerT3a_InnerClassesInfo_[] = {
	{"B4769350$Server", "B4769350", "Server", 0},
	{"B4769350$Server$AuthenticationHandlerT3a", "B4769350$Server", "AuthenticationHandlerT3a", 0},
	{}
};

$ClassInfo _B4769350$Server$AuthenticationHandlerT3a_ClassInfo_ = {
	$ACC_SUPER,
	"B4769350$Server$AuthenticationHandlerT3a",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_B4769350$Server$AuthenticationHandlerT3a_FieldInfo_,
	_B4769350$Server$AuthenticationHandlerT3a_MethodInfo_,
	nullptr,
	nullptr,
	_B4769350$Server$AuthenticationHandlerT3a_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B4769350"
};

$Object* allocate$B4769350$Server$AuthenticationHandlerT3a($Class* clazz) {
	return $of($alloc(B4769350$Server$AuthenticationHandlerT3a));
}

void B4769350$Server$AuthenticationHandlerT3a::init$($B4769350$Server* this$1) {
	$set(this, this$1, this$1);
	this->count = -1;
}

void B4769350$Server$AuthenticationHandlerT3a::handle($HttpExchange* exchange) {
	++this->count;
	switch (this->count) {
	case 0:
		{
			$B4769350$AuthenticationHandler::proxyReply(exchange, "Basic realm=\"proxy\""_s);
			break;
		}
	case 1:
		{
			$init($B4769350);
			$nc($B4769350::t3cond1)->countDown();
			$B4769350$AuthenticationHandler::errorReply(exchange, "Basic realm=\"realm4\""_s);
			break;
		}
	case 2:
		{
			$B4769350$AuthenticationHandler::okReply(exchange);
			break;
		}
	default:
		{
			$nc($System::out)->println("Unexpected request"_s);
		}
	}
}

B4769350$Server$AuthenticationHandlerT3a::B4769350$Server$AuthenticationHandlerT3a() {
}

$Class* B4769350$Server$AuthenticationHandlerT3a::load$($String* name, bool initialize) {
	$loadClass(B4769350$Server$AuthenticationHandlerT3a, name, initialize, &_B4769350$Server$AuthenticationHandlerT3a_ClassInfo_, allocate$B4769350$Server$AuthenticationHandlerT3a);
	return class$;
}

$Class* B4769350$Server$AuthenticationHandlerT3a::class$ = nullptr;