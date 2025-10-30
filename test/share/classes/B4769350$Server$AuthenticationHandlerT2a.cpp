#include <B4769350$Server$AuthenticationHandlerT2a.h>

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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _B4769350$Server$AuthenticationHandlerT2a_FieldInfo_[] = {
	{"this$1", "LB4769350$Server;", nullptr, $FINAL | $SYNTHETIC, $field(B4769350$Server$AuthenticationHandlerT2a, this$1)},
	{"count", "I", nullptr, $VOLATILE, $field(B4769350$Server$AuthenticationHandlerT2a, count)},
	{}
};

$MethodInfo _B4769350$Server$AuthenticationHandlerT2a_MethodInfo_[] = {
	{"<init>", "(LB4769350$Server;)V", nullptr, 0, $method(static_cast<void(B4769350$Server$AuthenticationHandlerT2a::*)($B4769350$Server*)>(&B4769350$Server$AuthenticationHandlerT2a::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _B4769350$Server$AuthenticationHandlerT2a_InnerClassesInfo_[] = {
	{"B4769350$Server", "B4769350", "Server", 0},
	{"B4769350$Server$AuthenticationHandlerT2a", "B4769350$Server", "AuthenticationHandlerT2a", 0},
	{}
};

$ClassInfo _B4769350$Server$AuthenticationHandlerT2a_ClassInfo_ = {
	$ACC_SUPER,
	"B4769350$Server$AuthenticationHandlerT2a",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_B4769350$Server$AuthenticationHandlerT2a_FieldInfo_,
	_B4769350$Server$AuthenticationHandlerT2a_MethodInfo_,
	nullptr,
	nullptr,
	_B4769350$Server$AuthenticationHandlerT2a_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B4769350"
};

$Object* allocate$B4769350$Server$AuthenticationHandlerT2a($Class* clazz) {
	return $of($alloc(B4769350$Server$AuthenticationHandlerT2a));
}

void B4769350$Server$AuthenticationHandlerT2a::init$($B4769350$Server* this$1) {
	$set(this, this$1, this$1);
	this->count = -1;
}

void B4769350$Server$AuthenticationHandlerT2a::handle($HttpExchange* exchange) {
	++this->count;
	if (this->count == 1) {
		$init($B4769350);
		$nc($B4769350::t2condlatch)->countDown();
	}
	$B4769350$AuthenticationHandler::errorReply(exchange, "Basic realm=\"realm3\""_s);
}

B4769350$Server$AuthenticationHandlerT2a::B4769350$Server$AuthenticationHandlerT2a() {
}

$Class* B4769350$Server$AuthenticationHandlerT2a::load$($String* name, bool initialize) {
	$loadClass(B4769350$Server$AuthenticationHandlerT2a, name, initialize, &_B4769350$Server$AuthenticationHandlerT2a_ClassInfo_, allocate$B4769350$Server$AuthenticationHandlerT2a);
	return class$;
}

$Class* B4769350$Server$AuthenticationHandlerT2a::class$ = nullptr;