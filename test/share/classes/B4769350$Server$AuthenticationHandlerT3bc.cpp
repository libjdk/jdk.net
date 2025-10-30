#include <B4769350$Server$AuthenticationHandlerT3bc.h>

#include <B4769350$AuthenticationHandler.h>
#include <B4769350$Server.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <jcpp.h>

using $B4769350$AuthenticationHandler = ::B4769350$AuthenticationHandler;
using $B4769350$Server = ::B4769350$Server;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _B4769350$Server$AuthenticationHandlerT3bc_FieldInfo_[] = {
	{"this$1", "LB4769350$Server;", nullptr, $FINAL | $SYNTHETIC, $field(B4769350$Server$AuthenticationHandlerT3bc, this$1)},
	{"count", "I", nullptr, $VOLATILE, $field(B4769350$Server$AuthenticationHandlerT3bc, count)},
	{}
};

$MethodInfo _B4769350$Server$AuthenticationHandlerT3bc_MethodInfo_[] = {
	{"<init>", "(LB4769350$Server;)V", nullptr, 0, $method(static_cast<void(B4769350$Server$AuthenticationHandlerT3bc::*)($B4769350$Server*)>(&B4769350$Server$AuthenticationHandlerT3bc::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _B4769350$Server$AuthenticationHandlerT3bc_InnerClassesInfo_[] = {
	{"B4769350$Server", "B4769350", "Server", 0},
	{"B4769350$Server$AuthenticationHandlerT3bc", "B4769350$Server", "AuthenticationHandlerT3bc", 0},
	{}
};

$ClassInfo _B4769350$Server$AuthenticationHandlerT3bc_ClassInfo_ = {
	$ACC_SUPER,
	"B4769350$Server$AuthenticationHandlerT3bc",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_B4769350$Server$AuthenticationHandlerT3bc_FieldInfo_,
	_B4769350$Server$AuthenticationHandlerT3bc_MethodInfo_,
	nullptr,
	nullptr,
	_B4769350$Server$AuthenticationHandlerT3bc_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B4769350"
};

$Object* allocate$B4769350$Server$AuthenticationHandlerT3bc($Class* clazz) {
	return $of($alloc(B4769350$Server$AuthenticationHandlerT3bc));
}

void B4769350$Server$AuthenticationHandlerT3bc::init$($B4769350$Server* this$1) {
	$set(this, this$1, this$1);
	this->count = -1;
}

void B4769350$Server$AuthenticationHandlerT3bc::handle($HttpExchange* exchange) {
	++this->count;
	switch (this->count) {
	case 0:
		{
			$B4769350$AuthenticationHandler::proxyReply(exchange, "Basic realm=\"proxy\""_s);
			break;
		}
	case 1:
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

B4769350$Server$AuthenticationHandlerT3bc::B4769350$Server$AuthenticationHandlerT3bc() {
}

$Class* B4769350$Server$AuthenticationHandlerT3bc::load$($String* name, bool initialize) {
	$loadClass(B4769350$Server$AuthenticationHandlerT3bc, name, initialize, &_B4769350$Server$AuthenticationHandlerT3bc_ClassInfo_, allocate$B4769350$Server$AuthenticationHandlerT3bc);
	return class$;
}

$Class* B4769350$Server$AuthenticationHandlerT3bc::class$ = nullptr;